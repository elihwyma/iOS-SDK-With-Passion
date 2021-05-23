/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <UIKit/UIView.h>

@class UIButton, UIVisualEffectView;

@protocol SXFullscreenNavigationBarViewDelegate;

@interface SXFullscreenNavigationBarView : UIView

{
    _Bool _expanded;
    id <SXFullscreenNavigationBarViewDelegate> _delegate;
    UIVisualEffectView *_backgroundView;
    UIButton *_button;
}

@property (nonatomic, readonly) UIVisualEffectView *backgroundView;
@property (nonatomic, readonly) UIButton *button;
@property (weak, nonatomic) id <SXFullscreenNavigationBarViewDelegate> delegate;
@property (nonatomic, readonly) _Bool expanded;

- (id)init;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)doneButtonPressed:(id)arg1;
- (void)createBackgroundView;
- (void)updateFrameAnimated:(_Bool)arg1;
- (void)createDoneButton;
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2;

@end
