/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class UIVisualEffectView, VUIConfirmationCardLayout, VUILabel, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIConfirmationCardView : UIView

{
    VUIConfirmationCardLayout *_layout;
    VUILabel *_textLabel;
    _TVImageView *_badgeView;
    UIView *_cardView;
    UIVisualEffectView *_backdropView;
}

@property (retain, nonatomic) VUIConfirmationCardLayout *layout;
@property (retain, nonatomic) VUILabel *textLabel;
@property (retain, nonatomic) _TVImageView *badgeView;
@property (retain, nonatomic) UIView *cardView;
@property (nonatomic, readonly) UIVisualEffectView *backdropView;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_configureSubviews;

@end
