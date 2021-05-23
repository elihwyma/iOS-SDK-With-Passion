/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <UILabel.h>

@interface UILabel (SiriUITextStyles)

+ (id)siriui_configuredBodyLabel;
+ (id)siriui_configuredHeadlineLabel;
+ (id)siriui_configuredSubheadLabel;
+ (id)siriui_configuredCaptionLabel;
+ (id)siriui_configuredFootnoteLabel;
+ (id)siriui_configuredTitleLabel;
+ (id)siriui_configuredLabel;
+ (id)siriui_configuredPriceLabel;
+ (id)siriui_configuredTitle3Label;

- (void)setUseSecondaryTextColor;
- (void)setUseShortLineHeight;

@end
