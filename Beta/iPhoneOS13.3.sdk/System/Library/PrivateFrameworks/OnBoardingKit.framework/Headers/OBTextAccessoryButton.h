/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

#import <UIKit/UIButton.h>

@class NSString;

@interface OBTextAccessoryButton : UIButton

{
    NSString *_textStyle;
}

@property (nonatomic) NSString *textStyle;

+ (id)accessoryButtonWithTextStyle:(id)arg1;

- (void)traitCollectionDidChange:(id)arg1;
- (void)tintColorDidChange;

@end
