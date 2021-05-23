/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

#import <UIKit/UIButton.h>

@interface OBHeaderAccessoryButton : UIButton

+ (id)buttonWithType:(long long)arg1;
+ (id)accessoryButton;

- (void)traitCollectionDidChange:(id)arg1;
- (void)tintColorDidChange;
- (void)_updateText;
- (id)_fontTextStyle;

@end
