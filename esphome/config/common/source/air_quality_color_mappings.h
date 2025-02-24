#define white      esphome::Color(0xFFFFFF)
#define magenta    esphome::Color(0xFF00FF)
#define red        esphome::Color(0xFF0000)
#define orange     esphome::Color(0xFFAA00)
#define yellow     esphome::Color(0xFFFF00)
#define green      esphome::Color(0x00FF00)
#define dark_green esphome::Color(0x00AA00)

// See: https://www.airgradient.com/documents/infographics/AQ-Monitor-Cheatsheet.pdf
// See: https://atmotube.com/atmocube-support/indoor-air-quality-index-iaqi
std::map<int, esphome::Color> co2_color_thresholds
{
  {    0, dark_green},
  {  600, green},
  {  800, yellow},
  { 1000, orange},
  { 1500, red},
  { 1800, magenta}
};

std::map<int, esphome::Color> nox_color_thresholds
{
  {   0, dark_green},
  {  50, green},
  {  75, yellow},
  { 100, orange},
  { 300, red},
  { 350, magenta}
};

std::map<int, esphome::Color> voc_color_thresholds
{
  {   0, dark_green},
  {  50, green},
  {  75, yellow},
  { 100, orange},
  { 300, red},
  { 350, magenta}
};

std::map<int, esphome::Color> pm_1_0_color_thresholds
{
  {  0, dark_green},
  { 15, green},
  { 25, yellow},
  { 35, orange},
  { 62, red},
  { 96, magenta}
};

std::map<int, esphome::Color> pm_2_5_color_thresholds
{
  {  0, dark_green},
  { 21, green},
  { 36, yellow},
  { 51, orange},
  { 91, red},
  { 141, magenta}
};

std::map<int, esphome::Color> pm_10_0_color_thresholds
{
  {  0, dark_green},
  { 31, green},
  { 51, yellow},
  { 76, orange},
  { 126, red},
  { 201, magenta}
};
