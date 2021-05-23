/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIFont.h>

@interface UIFont (VideosUI)

+ (id)vui_fontFromTextLayout:(id)arg1;
+ (id)_fontFromTextStyle:(long long)arg1 maximumContentSizeCategory:(id)arg2 fontWeight:(long long)arg3 fontSize:(double)arg4 symbolicTraits:(unsigned int)arg5 fontFeature:(long long)arg6;
+ (id)_uifontWeightFromFontWeight:(long long)arg1;
+ (id)_uiFontAttributesForFeature:(long long)arg1;
+ (id)vui_fontFromTextStyle:(long long)arg1 fontWeight:(long long)arg2 fontSize:(double)arg3 symbolicTraits:(unsigned int)arg4;

- (double)baselineHeight;
- (double)topMarginWithBaselineMargin:(double)arg1 traitCollection:(id)arg2;
- (double)bottomMarginWithBaselineMargin:(double)arg1 traitCollection:(id)arg2;
- (double)topMarginToFont:(id)arg1 withBaselineMargin:(double)arg2 traitCollection:(id)arg3;

@end
