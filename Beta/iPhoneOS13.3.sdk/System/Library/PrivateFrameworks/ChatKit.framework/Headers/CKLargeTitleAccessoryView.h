/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class UIButton;

@interface CKLargeTitleAccessoryView : UIView

{
    UIButton *_leftAccessoryButton;
    UIButton *_rightAccessoryButton;
}

@property (retain, nonatomic) UIButton *leftAccessoryButton;
@property (retain, nonatomic) UIButton *rightAccessoryButton;

+ (id)newComposeButton;
+ (id)newOptionsButton;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;

@end
