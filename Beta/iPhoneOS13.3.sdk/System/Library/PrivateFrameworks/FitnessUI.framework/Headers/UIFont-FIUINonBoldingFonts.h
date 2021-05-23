/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <UIKit/UIFont.h>

@interface UIFont (FIUINonBoldingFonts)

+ (id)fu_heavySausageFontOfSize:(double)arg1;
+ (id)fu_mediumSausageFontOfSize:(double)arg1;
+ (id)fu_sausageFontOfSize:(double)arg1;
+ (id)fu_mediumFontOfSize:(double)arg1;
+ (id)_fiui_nonBoldedVersionOfFont:(id)arg1 size:(double)arg2;
+ (id)fiui_nonBoldingSystemFontOfSize:(double)arg1;
+ (id)fiui_nonBoldingSystemFontOfSize:(double)arg1 weight:(double)arg2;
+ (id)fiui_nonBoldingRoundedSystemFontOfSize:(double)arg1 weight:(double)arg2;
+ (id)fu_alternateColonsFeatureSetting;
+ (id)fu_fontByApplyingFeatureSettings:(id)arg1 toFont:(id)arg2;
+ (id)_fu_sausageFontOfSize:(double)arg1 fontWeight:(double)arg2 centeredColons:(_Bool)arg3;
+ (id)fu_lightSausageFontOfSize:(double)arg1 centeredColons:(_Bool)arg2;
+ (id)fu_mediumFontOfSize:(double)arg1 centeredColons:(_Bool)arg2;
+ (id)fu_sausageFontOfSize:(double)arg1 centeredColons:(_Bool)arg2;
+ (id)fu_lightSausageFontOfSize:(double)arg1;
+ (id)fu_semiboldSausageFontOfSize:(double)arg1;
+ (id)fu_boldSausageFontOfSize:(double)arg1;
+ (id)_fu_sausageFontOfSize:(double)arg1 fontWeight:(double)arg2;
+ (id)fu_systemFontOfSize:(double)arg1 centeredColons:(_Bool)arg2;
+ (id)fu_bodyShortFont;
+ (id)fu_bodyEmphasizeFont;

- (id)fu_shortSlashFont;
- (id)fu_fontWithCenteredColons;
- (id)fu_fontWithSizeFittingString:(id)arg1 withinWidth:(double)arg2 accountForGlyphOffset:(_Bool)arg3;
- (id)fu_fontWithSize:(double)arg1;
- (id)fu_fontWithStraightSidedNumbers;
- (id)fu_monospacedFont;
- (id)fu_smallCapsFont;
- (id)fu_fontWithSizeFittingString:(id)arg1 withinWidth:(double)arg2;

@end
