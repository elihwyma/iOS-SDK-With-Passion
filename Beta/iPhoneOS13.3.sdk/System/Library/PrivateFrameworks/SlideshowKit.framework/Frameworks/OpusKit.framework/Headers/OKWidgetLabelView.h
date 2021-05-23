/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKWidgetLabelViewProxy.h>

@interface OKWidgetLabelView : OKWidgetLabelViewProxy

+ (id)supportedSettings;

- (id)initWithWidget:(id)arg1;
- (id)settingAttributedText;
- (void)setSettingAttributedText:(id)arg1;
- (void)setSettingFontFileName:(id)arg1;
- (void)setSettingBaselineAdjustment:(long long)arg1;
- (long long)settingBaselineAdjustment;
- (id)settingTextShadowColor;
- (void)setSettingTextShadowColor:(id)arg1;
- (struct CGSize)settingTextShadowOffset;
- (void)setSettingTextShadowOffset:(struct CGSize)arg1;
- (long long)settingNumberOfLine;
- (void)setSettingNumberOfLines:(long long)arg1;
- (_Bool)settingAdjustsFontSizeToFitWidth;
- (void)setSettingAdjustsFontSizeToFitWidth:(_Bool)arg1;
- (long long)settingLineBreakMode;
- (void)setSettingLineBreakMode:(long long)arg1;
- (float)settingMinimumScaleFactor;
- (void)setSettingMinimumScaleFactor:(float)arg1;

@end
