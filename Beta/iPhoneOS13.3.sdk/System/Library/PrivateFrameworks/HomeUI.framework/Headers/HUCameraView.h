/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class HMCameraSource, HMCameraView, HUCameraBadgeView, HUCameraErrorContent, HUCameraErrorView, HURemoteContextHostingView, NADecayingTimer, NSArray, NSLayoutConstraint, NSLayoutYAxisAnchor, UIActivityIndicatorView, UIImageView;

@interface HUCameraView : UIView

{
    _Bool _showActivityIndicator;
    unsigned long long _maskedCameraCorners;
    NSLayoutYAxisAnchor *_badgeBottomAnchor;
    HUCameraErrorContent *_errorContent;
    UIImageView *_demoSnapshotImageView;
    HURemoteContextHostingView *_cameraContainerView;
    HUCameraBadgeView *_badgeView;
    UIView *_cameraOverlayView;
    UIView *_cameraDimmingView;
    UIView *_backgroundView;
    HUCameraErrorView *_errorView;
    UIActivityIndicatorView *_activityIndicatorView;
    NADecayingTimer *_snapshotAgeUpdateTimer;
    NSArray *_staticConstraints;
    NSLayoutConstraint *_cameraAspectRatioConstraint;
    NSLayoutConstraint *_badgeBottomConstraint;
    NSLayoutConstraint *_badgeTrailingConstraint;
    struct UIOffset _badgeOffset;
}

@property (nonatomic, readonly) HMCameraView *cameraView;
@property (nonatomic, readonly) HURemoteContextHostingView *cameraContainerView;
@property (nonatomic, readonly) HUCameraBadgeView *badgeView;
@property (nonatomic, readonly) UIView *cameraOverlayView;
@property (retain, nonatomic) UIView *cameraDimmingView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) HUCameraErrorView *errorView;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) NADecayingTimer *snapshotAgeUpdateTimer;
@property (retain, nonatomic) NSArray *staticConstraints;
@property (retain, nonatomic) NSLayoutConstraint *cameraAspectRatioConstraint;
@property (retain, nonatomic) NSLayoutConstraint *badgeBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *badgeTrailingConstraint;
@property (retain, nonatomic) UIImageView *demoSnapshotImageView;
@property (nonatomic) unsigned long long maskedCameraCorners;
@property (retain, nonatomic) HMCameraSource *cameraSource;
@property (nonatomic, getter=isBadgeHidden) _Bool badgeHidden;
@property (nonatomic) struct UIOffset badgeOffset;
@property (retain, nonatomic) NSLayoutYAxisAnchor *badgeBottomAnchor;
@property (retain, nonatomic) HUCameraErrorContent *errorContent;
@property (nonatomic) _Bool showActivityIndicator;
@property (nonatomic, readonly) struct CGRect cameraContentFrame;
@property (nonatomic, readonly) struct CGRect derivedCameraContentFrame;
@property (nonatomic, readonly) UIView *cameraOverlaySnapshot;

+ (_Bool)requiresConstraintBasedLayout;

- (id)init;
- (void)dealloc;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentMode:(long long)arg1;
- (void)layoutSubviews;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)updateConstraints;
- (double)_continuousCornerRadius;
- (void)_updateBadgeView;
- (void)setCameraSource:(id)arg1 withDemoSnapshotURL:(id)arg2 animated:(_Bool)arg3;
- (void)setCameraSource:(id)arg1 animated:(_Bool)arg2;
- (void)setErrorContent:(id)arg1 animated:(_Bool)arg2;
- (id)initWithBadgeView:(id)arg1;
- (void)_updateMaskedCameraCorners;
- (void)_updateErrorAndActivityIndicatorVisibilityAnimated:(_Bool)arg1;
- (void)setShowActivityIndicator:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateBadgeViewReschedulingTimerIfNecessary:(_Bool)arg1;
- (void)_scheduleNextSnapshotAgeUpdateForCaptureDate:(id)arg1;
- (void)setCameraContentMode:(long long)arg1;
- (id)cameraContentSnapshot;

@end
