/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIColor.h>

@class NSString;

@interface UIColor (PKAccessibility)

@property (nonatomic, readonly) double pkaxLuma;
@property (nonatomic, readonly) NSString *pkaxApproximateColorDescription;
@property (nonatomic, readonly) NSString *pkaxDescriptionWithLuma;
@property (retain, nonatomic, setter=_pkaxSetCachedApproximateColorDescription:) NSString *_pkaxCachedApproximateColorDescription;

+ (id)pkaxHueNameForValue:(double)arg1;
+ (id)pk_paletteButtonBackgroundColor;
+ (id)pk_toolTintColor;
+ (id)pk_separatorLineColor;
+ (double)pk_rgbDistanceFromColor:(id)arg1 toColor:(id)arg2;
+ (id)pk_opacityTitleLabel;
+ (id)pk_paletteShadowColor;
+ (id)pk_linedPaperLineColor_dark;
+ (id)pk_linedPaperLineColor_light;
+ (id)pk_toolDockMaskColor;
+ (id)pk_thicknessButtonLightGray;
+ (id)pk_thicknessButtonBlack;
+ (id)pk_thicknessButtonWhite;
+ (id)pk_crosshairViewBorderColor;
+ (id)pk_crosshairViewShadowColor;
+ (id)pk_opacityValueLabel;
+ (id)pk_paletteBackgroundColor;
+ (id)pk_buttonImageColor;
+ (id)pk_paletteStrokeColor;
+ (id)pk_selectedPickerButtonBackgroundColor;
+ (id)pk_selectedPickerButtonMaskColor;
+ (id)pk_doneButtonTitleColor;
+ (id)pk_doneButtonBackgroundColor;
+ (id)pk_toolSampleViewBackgroundColor;
+ (id)pk_removeActiveToolButtonColor;

- (_Bool)pk_isColorWhite;
- (_Bool)pk_isColorBlack;
- (id)pkaxLightnessModifier;
- (id)_pkaxColorDescriptionForHue:(id)arg1 saturation:(id)arg2 lightness:(id)arg3;
- (id)pkaxSaturationModifier;
- (id)pkaxHueName;
- (double)pkaxHue;
- (double)pkaxSaturation;
- (id)_pkaxLightnessSaturationHueFormatString;
- (id)_pkaxLightnessHueFormatString;
- (id)_pkaxSaturationHueFormatString;

@end
