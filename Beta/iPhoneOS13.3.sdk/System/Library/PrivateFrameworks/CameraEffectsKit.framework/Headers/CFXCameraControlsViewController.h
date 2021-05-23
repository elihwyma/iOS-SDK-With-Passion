/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <UIKit/UIViewController.h>

@class CAMBottomBar, CAMCreativeCameraButton, CAMFlipButton, CFXFeedbackController, CUShutterButton, NSLayoutConstraint, UIColor, UIView;

@protocol CFXCameraControlsViewControllerDelegate;

@interface CFXCameraControlsViewController : UIViewController

{
    _Bool _dockIsMagnified;
    CAMCreativeCameraButton *_effectButton;
    CAMFlipButton *_flipButton;
    id <CFXCameraControlsViewControllerDelegate> _delegate;
    UIView *_appStripBackgroundView;
    UIView *_backgroundView;
    UIView *_effectButtonContainerPad;
    UIView *_shutterButtonContainerPad;
    UIView *_flipButtonContainerPad;
    UIView *_bottomBlackView;
    UIView *_appStripBackgroundContainerView;
    NSLayoutConstraint *_backgroundViewHeightConstraint;
    NSLayoutConstraint *_bottomBlackViewHeightConstraint;
    NSLayoutConstraint *_bottomBlackViewTopConstraint;
    NSLayoutConstraint *_bottomBlackViewWidthConstraint;
    NSLayoutConstraint *_bottomBlackViewTrailingConstraint;
    NSLayoutConstraint *_appStripBackgroundContainerViewTopConstraint;
    NSLayoutConstraint *_appStripBackgroundContainerViewBottomConstraint;
    NSLayoutConstraint *_appStripBackgroundContainerViewHeightConstraint;
    NSLayoutConstraint *_appStripBackgroundContainerViewLeadingConstraint;
    NSLayoutConstraint *_appStripBackgroundContainerViewTrailingConstraint;
    CFXFeedbackController *_feedbackController;
    long long _captureMode;
    CAMBottomBar *_bottomBar;
    CUShutterButton *_shutterButton;
    double _dockMagnifiedHeightDelta;
}

@property (weak, nonatomic) UIView *effectButtonContainerPad;
@property (weak, nonatomic) UIView *shutterButtonContainerPad;
@property (weak, nonatomic) UIView *flipButtonContainerPad;
@property (weak, nonatomic) UIView *backgroundView;
@property (weak, nonatomic) UIView *bottomBlackView;
@property (retain, nonatomic) UIView *appStripBackgroundView;
@property (weak, nonatomic) UIView *appStripBackgroundContainerView;
@property (weak, nonatomic) NSLayoutConstraint *backgroundViewHeightConstraint;
@property (weak, nonatomic) NSLayoutConstraint *bottomBlackViewHeightConstraint;
@property (weak, nonatomic) NSLayoutConstraint *bottomBlackViewTopConstraint;
@property (weak, nonatomic) NSLayoutConstraint *bottomBlackViewWidthConstraint;
@property (weak, nonatomic) NSLayoutConstraint *bottomBlackViewTrailingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *appStripBackgroundContainerViewTopConstraint;
@property (weak, nonatomic) NSLayoutConstraint *appStripBackgroundContainerViewBottomConstraint;
@property (weak, nonatomic) NSLayoutConstraint *appStripBackgroundContainerViewHeightConstraint;
@property (weak, nonatomic) NSLayoutConstraint *appStripBackgroundContainerViewLeadingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *appStripBackgroundContainerViewTrailingConstraint;
@property (retain, nonatomic) CFXFeedbackController *feedbackController;
@property (nonatomic) long long captureMode;
@property (retain, nonatomic) CAMBottomBar *bottomBar;
@property (retain, nonatomic) CUShutterButton *shutterButton;
@property (nonatomic) _Bool dockIsMagnified;
@property (nonatomic) double dockMagnifiedHeightDelta;
@property (retain, nonatomic) CAMCreativeCameraButton *effectButton;
@property (retain, nonatomic) CAMFlipButton *flipButton;
@property (weak, nonatomic) id <CFXCameraControlsViewControllerDelegate> delegate;
@property (nonatomic) UIColor *backgroundColor;

- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)initWithDelegate:(id)arg1 captureMode:(long long)arg2;
- (void)configureUIForOrientation;
- (void)setShutterButtonAlpha:(double)arg1;
- (void)updateUIForDockMagnify:(_Bool)arg1 dockHeightDelta:(double)arg2;
- (void)updateUIForVideoRecording:(_Bool)arg1;
- (void)effectsButtonTapped:(id)arg1;
- (void)shutterButtonTapped:(id)arg1;
- (void)switchCameraButtonTapped:(id)arg1;
- (double)CFX_smallPhoneDockHeightAdjustment;
- (void)setShutterButtonEnabled:(_Bool)arg1;

@end
