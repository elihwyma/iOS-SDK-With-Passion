/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class UIColor;

@interface NTKZeusColorPalette : NSObject

{
    unsigned long long _color;
    UIColor *_dialColor;
    UIColor *_complicationColor;
    UIColor *_secondHandColor;
    UIColor *_minuteHandColor;
    UIColor *_hourHandColor;
    UIColor *_handInlayColor;
    UIColor *_minuteHandDotColor;
    UIColor *_backgroundColor;
    double _secondHandAlpha;
    unsigned long long _bleed;
    UIColor *_splitColor;
}

@property (nonatomic, readonly) UIColor *dialColor;
@property (nonatomic, readonly) UIColor *complicationColor;
@property (nonatomic, readonly) UIColor *secondHandColor;
@property (nonatomic, readonly) UIColor *minuteHandColor;
@property (nonatomic, readonly) UIColor *hourHandColor;
@property (nonatomic, readonly) UIColor *handInlayColor;
@property (nonatomic, readonly) UIColor *minuteHandDotColor;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) double secondHandAlpha;
@property (nonatomic, readonly) unsigned long long bleed;
@property (nonatomic, readonly) UIColor *splitColor;

+ (id)paletteForColor:(unsigned long long)arg1;
+ (id)zeusSilverColor;
+ (id)zeusOrangeColor;
+ (id)craieColor;
+ (id)indigoColor;
+ (id)bordeauxColor;
+ (id)feuColor;
+ (id)capucineColor;
+ (id)roseAzaleeColor;
+ (id)roseExtremeColor;
+ (id)ambreColor;
+ (id)encreColor;
+ (id)etainColor;
+ (id)briqueColor;
+ (id)noirColor;
+ (id)noirHandStrokeColor;
+ (id)noirSecondHandColor;
+ (id)sakuraLightColor;
+ (id)sakuraMediumColor;
+ (id)sakuraDarkColor;
+ (id)bleuLightColor;
+ (id)bleuMediumColor;
+ (id)bleuDarkColor;
+ (id)offWhiteColor;
+ (id)charcoalColor;
+ (id)swatchColorForColor:(unsigned long long)arg1;
+ (id)swatchImageForColor:(unsigned long long)arg1;

- (id)initWithColor:(unsigned long long)arg1;

@end
