/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class FBDisplayLayoutElement, NSString, SBFHomeGrabberSettings, SBFloatingApplicationLiveContentWindow, SBMedusaDecoratedDeviceApplicationSceneViewController, SBSceneViewStatusBarAssertion, SBUISizeObservingView, SBWindowSelfHostWrapper, UIView;

@interface SBFloatingApplicationSceneLiveContentOverlayView : NSObject

{
    _Bool _wantsMinificationFilter;
    _Bool _liveContentRasterizationDisabled;
    _Bool _asynchronousRenderingTemporarilyDisabled;
    long long _rasterizationStyle;
    SBFloatingApplicationLiveContentWindow *_window;
    SBWindowSelfHostWrapper *_windowHostWrapper;
    SBUISizeObservingView *_sizeObservingView;
    SBMedusaDecoratedDeviceApplicationSceneViewController *_deviceApplicationSceneViewController;
    SBSceneViewStatusBarAssertion *_statusBarAssertion;
    SBFHomeGrabberSettings *_grabberSettings;
    FBDisplayLayoutElement *_displayLayoutElement;
}

@property (nonatomic, readonly) SBFloatingApplicationLiveContentWindow *window;
@property (nonatomic, readonly) SBWindowSelfHostWrapper *windowHostWrapper;
@property (nonatomic, readonly) SBUISizeObservingView *sizeObservingView;
@property (nonatomic, readonly) SBMedusaDecoratedDeviceApplicationSceneViewController *deviceApplicationSceneViewController;
@property (nonatomic, readonly) SBSceneViewStatusBarAssertion *statusBarAssertion;
@property (nonatomic, readonly) SBFHomeGrabberSettings *grabberSettings;
@property (nonatomic, readonly) FBDisplayLayoutElement *displayLayoutElement;
@property (nonatomic, readonly) long long rasterizationStyle;
@property (nonatomic, readonly) _Bool wantsMinificationFilter;
@property (nonatomic, readonly) _Bool liveContentRasterizationDisabled;
@property (nonatomic, readonly) _Bool asynchronousRenderingTemporarilyDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *contentOverlayView;

- (void)dealloc;
- (void)invalidate;
- (id)contentViewController;
- (id)initWithWindow:(id)arg1;
- (void)sizeObservingView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)sceneHandle:(id)arg1 didCreateScene:(id)arg2;
- (void)_updateLiveContentRasterization;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;
- (void)noteNeedsLayoutUpdateFor180DegreeRotation;
- (void)disableAsynchronousRenderingForNextCommit;
- (void)setUsesBrightSceneViewBackgroundMaterial:(_Bool)arg1;
- (void)setStatusBarHidden:(_Bool)arg1 nubViewHidden:(_Bool)arg2 animator:(CDUnknownBlockType)arg3;
- (void)setHomeGrabberHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setRasterizationStyle:(long long)arg1 withMinificationFilterEnabled:(_Bool)arg2;
- (void)setLiveContentRasterizationDisabled:(_Bool)arg1;
- (void)configureWithWorkspaceEntity:(id)arg1 referenceFrame:(struct CGRect)arg2 interfaceOrientation:(long long)arg3;
- (void)_updateContentWindowFrameFromView:(id)arg1;

@end
