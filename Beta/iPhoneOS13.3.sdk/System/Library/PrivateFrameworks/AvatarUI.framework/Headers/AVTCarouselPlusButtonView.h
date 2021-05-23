/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UIView.h>

@class AVTUIEnvironment, UIButton;

@interface AVTCarouselPlusButtonView : UIView

{
    _Bool _highlighted;
    _Bool _allowHighlight;
    AVTUIEnvironment *_environment;
    UIButton *_button;
    struct CGSize _maxItemSize;
}

@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, readonly) UIButton *button;
@property (nonatomic) struct CGSize maxItemSize;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic) _Bool allowHighlight;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 environment:(id)arg2;

@end
