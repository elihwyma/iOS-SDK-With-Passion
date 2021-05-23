/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UIStackView.h>

@interface UIStackView (MessageUI)

+ (id)mf_equallyFilledVerticalStackView;
+ (id)mf_equallyFilledHorizontalStackView;
+ (id)mf_baselineAlignedVerticalStackView;
+ (id)mf_baselineAlignedHorizontalStackView;
+ (id)mf_equalSpacingHorizontalStackView;

- (void)mf_addArrangedSubviews:(id)arg1;

@end
