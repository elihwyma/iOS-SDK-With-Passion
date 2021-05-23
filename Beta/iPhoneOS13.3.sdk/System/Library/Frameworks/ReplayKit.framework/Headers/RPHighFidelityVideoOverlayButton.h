/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <UIKit/UIView.h>

@class UIButton, _UIBackdropView;

@interface RPHighFidelityVideoOverlayButton : UIView

{
    long long _style;
    UIButton *_button;
    _UIBackdropView *_backdropView;
    id _target;
    SEL _action;
}

@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;

- (long long)style;
- (id)initWithStyle:(long long)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (void)_playButtonTapped:(id)arg1;
- (void)_playButtonActivate:(id)arg1;
- (void)_playButtonDeactivate:(id)arg1;

@end
