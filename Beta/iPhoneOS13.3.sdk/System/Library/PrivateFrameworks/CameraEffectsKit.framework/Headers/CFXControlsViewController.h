/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <UIKit/UIViewController.h>

@class CFXEffectBrowserContentPresenterViewController, NSLayoutConstraint, UIView;

@interface CFXControlsViewController : UIViewController

{
    _Bool _usesInternalCaptureSession;
    UIView *_controlsContainerView;
    UIView *_effectsPickerDrawer;
    UIView *_effectsBrowser;
    NSLayoutConstraint *_controlsContainerViewHeightConstraint;
    NSLayoutConstraint *_controlsContainerViewWidthConstraint;
    NSLayoutConstraint *_controlsContainerViewTrailingConstraint;
    NSLayoutConstraint *_controlsContainerViewLeadingConstraint;
    NSLayoutConstraint *_controlsContainerViewTopConstraint;
    CFXEffectBrowserContentPresenterViewController *_effectBrowserContentPresenterViewController;
}

@property (weak, nonatomic) UIView *controlsContainerView;
@property (retain, nonatomic) UIView *effectsPickerDrawer;
@property (retain, nonatomic) UIView *effectsBrowser;
@property (nonatomic) _Bool usesInternalCaptureSession;
@property (retain, nonatomic) NSLayoutConstraint *controlsContainerViewHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *controlsContainerViewWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *controlsContainerViewTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *controlsContainerViewLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *controlsContainerViewTopConstraint;
@property (retain, nonatomic) CFXEffectBrowserContentPresenterViewController *effectBrowserContentPresenterViewController;

- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (id)effectsPickerSnapshot;
- (struct CGPoint)effectsPickerCenter;

@end
