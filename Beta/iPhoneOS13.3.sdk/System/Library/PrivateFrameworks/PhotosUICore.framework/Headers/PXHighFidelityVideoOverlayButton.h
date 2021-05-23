/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class UIButton, UIImageView, _UIBackdropView;

@interface PXHighFidelityVideoOverlayButton : UIView

{
    long long _style;
    UIButton *_button;
    _UIBackdropView *_backdropView;
    UIImageView *_overlayPlayBackground;
    id _target;
    SEL _action;
    _Bool _showAsPause;
    _Bool __didConfigureForPause;
}

@property (nonatomic, setter=_setDidConfigureForPause:) _Bool _didConfigureForPause;
@property (nonatomic) _Bool showAsPause;

- (long long)style;
- (void)layoutSubviews;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (void)_playButtonTapped:(id)arg1;
- (void)_playButtonActivate:(id)arg1;
- (void)_playButtonDeactivate:(id)arg1;
- (id)initWithStyle:(long long)arg1 allowBackdropStatisticsSupression:(_Bool)arg2;

@end
