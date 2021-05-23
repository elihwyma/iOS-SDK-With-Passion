/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, SBDeviceApplicationSceneHandle, SBOrientationTransformWrapperView, SBSceneHandleBlockObserver, UIApplicationSceneClientSettingsDiffInspector, UIApplicationSceneSettingsDiffInspector, UIButton;

@protocol SBDeviceApplicationSceneClassicAccessoryViewDelegate;

@interface SBDeviceApplicationSceneClassicAccessoryView : UIView

{
    SBDeviceApplicationSceneHandle *_sceneHandle;
    id <SBDeviceApplicationSceneClassicAccessoryViewDelegate> _delegate;
    UIView *_zoomButtonWrapperView;
    UIButton *_zoomButton;
    long long _buttonOrientation;
    SBOrientationTransformWrapperView *_transformWrapperView;
    SBSceneHandleBlockObserver *_sceneHandleObserver;
    UIApplicationSceneClientSettingsDiffInspector *_clientSettingsInspector;
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsInspector;
    NSLayoutConstraint *_zoomButtonHorizontalConstraint;
    NSLayoutConstraint *_zoomButtonVerticalConstraint;
    NSLayoutConstraint *_zoomButtonWidthConstraint;
    NSLayoutConstraint *_zoomButtonHeightConstraint;
}

@property (retain, nonatomic, readonly) SBDeviceApplicationSceneHandle *sceneHandle;
@property (nonatomic) long long buttonOrientation;
@property (weak, nonatomic) id <SBDeviceApplicationSceneClassicAccessoryViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)layoutSubviews;
- (_Bool)_isZoomed;
- (void)_changeZoom:(id)arg1;
- (void)_updateZoomButton;
- (void)_setupPositioningAndRotationForInterfaceOrientation:(long long)arg1 offscreen:(_Bool)arg2;
- (void)_updateZoomButtonVisibilityAnimated:(_Bool)arg1;
- (void)_sceneHandleDidUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2;
- (void)_sceneHandleDidUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2;
- (_Bool)_zoomButtonShouldBeVisible;
- (void)_updateOrientationFrom:(long long)arg1 toOrientation:(long long)arg2 animationSettings:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 sceneHandle:(id)arg2;

@end
