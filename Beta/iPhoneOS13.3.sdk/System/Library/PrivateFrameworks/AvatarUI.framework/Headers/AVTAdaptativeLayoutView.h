/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UIView.h>

@protocol AVTAdaptativeLayout;

@interface AVTAdaptativeLayoutView : UIView

{
    id <AVTAdaptativeLayout> _layout;
    UIView *_contentView;
}

@property (nonatomic, readonly) UIView *contentView;
@property (retain, nonatomic) id <AVTAdaptativeLayout> layout;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 contentView:(id)arg2;

@end
