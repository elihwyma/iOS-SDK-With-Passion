/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

#import <UIKit/UIControl.h>

@class NSString, UILabel;

@interface AKAuthorizationButton : UIControl

{
    UILabel *_titleLabel;
}

@property (copy, nonatomic) NSString *buttonText;

- (void)setEnabled:(_Bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)setHighlighted:(_Bool)arg1;

@end
