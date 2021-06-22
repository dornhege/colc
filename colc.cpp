#include <stdio.h>
#include <QApplication>
#include <QColorDialog>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    QColorDialog diag;
    diag.setOption(QColorDialog::DontUseNativeDialog);
    diag.exec();

    QColor color = diag.selectedColor();

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

