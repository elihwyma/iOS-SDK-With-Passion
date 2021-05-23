/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIFont.h>

@interface UIFont (HKAdditions)

+ (id)hk_scalableFontForTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2;
+ (id)hk_preferredFontForTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2 maximumContentSizeCategory:(id)arg3;
+ (id)hk_preferredFontForTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2;
+ (id)hk_preferredFontForTextStyle:(id)arg1;
+ (id)hk_preferredRoundedFontForTextStyle:(id)arg1 additionalSymbolicTraits:(unsigned int)arg2;
+ (id)hk_chrValueCellPrimaryFont;
+ (id)hk_staticPreferredFontForTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2;
+ (id)hk_staticPreferredFontForTextStyle:(id)arg1;
+ (id)hk_chartCurrentValueDateFont;
+ (id)hk_chartCurrentValueKindFont;
+ (id)hk_roundedSystemFontWithSize:(double)arg1 weight:(double)arg2;
+ (id)hk_titleLabelFontScaledBy:(double)arg1;
+ (id)hk_defaultFontWithUIFontTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2 attributes:(id)arg3;
+ (double)hk_fittingScaleFactorForUILabels:(id)arg1 constrainingWidth:(double)arg2;
+ (id)hk_chartActivityValueFont;
+ (id)hk_chartCurrentValueUnitFont;
+ (id)hk_chartLollipopKeyFont;
+ (id)hk_chartCurrentValueValueFont;
+ (id)hk_preferredFontIgnoringAccessibilitySizeForTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2;
+ (id)hk_chartLollipopValueFont;
+ (id)hk_chartLollipopValueFontSmaller;
+ (id)hk_preferredFontIgnoringAccessibilitySizeForTextStyle:(id)arg1;
+ (id)hk_roundedSystemFontWithSize:(double)arg1 weight:(double)arg2 textStyle:(id)arg3;
+ (id)hk_chartAxisLabelFont;
+ (id)hk_preferredRoundedFontForTextStyle:(id)arg1;
+ (id)hk_unitLabelFontScaledBy:(double)arg1;
+ (id)hk_chartOverlaySectionHeaderFont;

- (id)hk_fontByAddingSymbolicTraits:(unsigned int)arg1;
- (id)_hk_fontByModifyingSymbolicTraits:(CDUnknownBlockType)arg1;
- (id)hk_fontByRemovingSymbolicTraits:(unsigned int)arg1;

@end
