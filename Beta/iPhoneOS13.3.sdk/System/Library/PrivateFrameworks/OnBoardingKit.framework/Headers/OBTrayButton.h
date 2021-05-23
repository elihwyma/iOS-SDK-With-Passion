/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

#import <UIKit/UIButton.h>

@interface OBTrayButton : UIButton

+ (id)buttonWithType:(long long)arg1;
+ (double)standardHeight;

- (struct CGSize)intrinsicContentSize;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)_buttonFont;
- (id)_fontTextStyle;

@end
