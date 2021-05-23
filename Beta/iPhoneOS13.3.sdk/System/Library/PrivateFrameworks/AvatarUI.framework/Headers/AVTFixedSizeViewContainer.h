/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UIView.h>

@interface AVTFixedSizeViewContainer : UIView

{
    UIView *_fixedSizeView;
}

@property (nonatomic, readonly) UIView *fixedSizeView;

- (void)layoutSubviews;
- (id)initWithFixedSizeView:(id)arg1;

@end
