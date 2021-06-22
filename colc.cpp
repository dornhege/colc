#include <stdio.h>
#include <iostream>
#include <QApplication>
#include <QColorDialog>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    QColor startColor(255, 0, 0);

    if(argc == 4) {
        std::string r = argv[1];
        std::string g = argv[2];
        std::string b = argv[3];
        if(r.find(".") != std::string::npos ||
                g.find(".") != std::string::npos ||
                b.find(".") != std::string::npos) { // any '.' in the "numbers" means these are floats [0, 1]
            startColor = QColor(255 * std::stod(r), 255 * std::stod(g), 255 * std::stod(b));
        } else {
            startColor = QColor(std::stoi(r), std::stoi(g), std::stoi(b));
        }
    }

    QColor color = QColorDialog::getColor(startColor, nullptr, "Select Color", QColorDialog::DontUseNativeDialog);

    printf("RGB:\n");
    printf("%d %d %d\n", color.red(), color.green(), color.blue());
    printf("%d, %d, %d\n", color.red(), color.green(), color.blue());
    printf("%.3f %.3f %.3f\n", color.redF(), color.greenF(), color.blueF());
    printf("%.3f, %.3f, %.3f\n", color.redF(), color.greenF(), color.blueF());
    printf("%02X%02X%02X\n", color.red(), color.green(), color.blue());
    printf("#%02X%02X%02X\n", color.red(), color.green(), color.blue());
    printf("\n");
    printf("    %d %d %d    \n", color.red(), color.green(), color.blue());
    printf("    %d, %d, %d    \n", color.red(), color.green(), color.blue());
    printf("    %.3f %.3f %.3f    \n", color.redF(), color.greenF(), color.blueF());
    printf("    %.3f, %.3f, %.3f    \n", color.redF(), color.greenF(), color.blueF());
    printf("    %02X%02X%02X    \n", color.red(), color.green(), color.blue());
    printf("    #%02X%02X%02X    \n", color.red(), color.green(), color.blue());
    printf("\n");
    printf("HSV:\n");
    printf("%d %d %d\n", color.hue(), color.saturation(), color.value());
    printf("%d, %d, %d\n", color.hue(), color.saturation(), color.value());
    printf("%.3f %.3f %.3f\n", color.hueF(), color.saturationF(), color.valueF());
    printf("%.3f, %.3f, %.3f\n", color.hueF(), color.saturationF(), color.valueF());
    printf("\n");
    printf("    %d %d %d    \n", color.hue(), color.saturation(), color.value());
    printf("    %d, %d, %d    \n", color.hue(), color.saturation(), color.value());
    printf("    %.3f %.3f %.3f    \n", color.hueF(), color.saturationF(), color.valueF());
    printf("    %.3f, %.3f, %.3f    \n", color.hueF(), color.saturationF(), color.valueF());
    printf("\n");
    printf("HSL:\n");
    printf("%d %d %d\n", color.hslHue(), color.hslSaturation(), color.lightness());
    printf("%d, %d, %d\n", color.hslHue(), color.hslSaturation(), color.lightness());
    printf("%.3f %.3f %.3f\n", color.hslHueF(), color.hslSaturationF(), color.lightnessF());
    printf("%.3f, %.3f, %.3f\n", color.hslHueF(), color.hslSaturationF(), color.lightnessF());
    printf("\n");
    printf("    %d %d %d    \n", color.hslHue(), color.hslSaturation(), color.lightness());
    printf("    %d, %d, %d    \n", color.hslHue(), color.hslSaturation(), color.lightness());
    printf("    %.3f %.3f %.3f    \n", color.hslHueF(), color.hslSaturationF(), color.lightnessF());
    printf("    %.3f, %.3f, %.3f    \n", color.hslHueF(), color.hslSaturationF(), color.lightnessF());
}

