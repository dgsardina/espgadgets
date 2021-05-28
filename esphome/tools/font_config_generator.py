#!/usr/bin/env python3

## Taken from code snippets on:
## https://community.home-assistant.io/t/display-materialdesign-icons-on-esphome-attached-to-screen/199790/15
## Generates *_icon_map.h files and a sample config for esphome

from urllib.request import urlopen
import json
import re

ICONSETS= [
    'weather',
    'wifi',
    'battery'
]

url = urlopen("https://raw.githubusercontent.com/Templarian/MaterialDesign/master/meta.json")
meta_json = json.loads(url.read())

print('''---
esphome:
  # ...
  includes:
    - icon_map.h

# ...

font:
  - file: fonts/materialdesignicons-webfont.ttf
    id: ...
    size: ...
    glyphs:''')

with open('icon_map.h', 'w') as h:
    h.write('#include <map>\n')
    for ICONSET in ICONSETS:
        h.write('std::map<std::string, std::string> %s_icon_map\n' % ICONSET)
        h.write('  {\n')
        meta = [(i['name'], i['codepoint']) for i in meta_json if re.search('^%s-' % ICONSET, i['name'])]
        for name, codepoint in meta:
            print('      - "\\U000%s" # %s' % (codepoint, name))

        for name, codepoint in meta:
            h.write('    {"%s", "\\U000%s"},\n' % (name.replace('%s-' % ICONSET, ''), codepoint))
        h.write('  };\n\n')
