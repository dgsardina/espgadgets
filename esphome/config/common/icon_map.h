#include <map>
std::map<int, std::string> battery_icon_map
  {
    {0, "\U000F10CD"},
    {1, "\U000F007A"},
    {2, "\U000F007B"},
    {3, "\U000F007C"},
    {4, "\U000F007D"},
    {5, "\U000F007E"},
    {6, "\U000F007F"},
    {7, "\U000F0080"},
    {8, "\U000F0081"},
    {9, "\U000F0082"},
    {10, "\U000F0079"},
  };

std::map<std::string, std::string> weather_icon_map
  {
    {"cloudy", "\U000F0590"},
    {"cloudy-alert", "\U000F0F2F"},
    {"cloudy-arrow-right", "\U000F0E6E"},
    {"fog", "\U000F0591"},
    {"hail", "\U000F0592"},
    {"hazy", "\U000F0F30"},
    {"hurricane", "\U000F0898"},
    {"lightning", "\U000F0593"},
    {"lightning-rainy", "\U000F067E"},
    {"night", "\U000F0594"},
    {"night-partly-cloudy", "\U000F0F31"},
    {"partlycloudy", "\U000F0595"},
    {"partly-lightning", "\U000F0F32"},
    {"partly-rainy", "\U000F0F33"},
    {"partly-snowy", "\U000F0F34"},
    {"partly-snowy-rainy", "\U000F0F35"},
    {"pouring", "\U000F0596"},
    {"rainy", "\U000F0597"},
    {"snowy", "\U000F0598"},
    {"snowy-heavy", "\U000F0F36"},
    {"snowy-rainy", "\U000F067F"},
    {"sunny", "\U000F0599"},
    {"sunny-alert", "\U000F0F37"},
    {"sunny-off", "\U000F14E4"},
    {"sunset", "\U000F059A"},
    {"sunset-down", "\U000F059B"},
    {"sunset-up", "\U000F059C"},
    {"tornado", "\U000F0F38"},
    {"windy", "\U000F059D"},
    {"windy-variant", "\U000F059E"},
  };

std::map<int, std::string> wifi_icon_map
  {
    {-1, "\U000F092D"}, //off
    { 0, "\U000F092E"}, //0 bar
    { 1, "\U000F091F"}, //1 bar
    { 2, "\U000F0922"}, //2 bar
    { 3, "\U000F0925"}, //3 bar
    { 4, "\U000F0928"}, //4 bar
  };
