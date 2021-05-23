/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBDeviceApplicationSceneViewController, SBSceneViewStatusBarAssertion, UIView;

@interface SBInlineAppExposeLiveContentOverlayView : NSObject <Swift>

{
    _Bool _transitioning;
    SBDeviceApplicationSceneViewController *_deviceApplicationSceneViewController;
    SBSceneViewStatusBarAssertion *_statusBarAssertion;
}

@property (nonatomic, readonly) SBDeviceApplicationSceneViewController *deviceApplicationSceneViewController;
@property (nonatomic, readonly) SBSceneViewStatusBarAssertion *statusBarAssertion;
@property (nonatomic, getter=isTransitioning) _Bool transitioning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *contentOverlayView;

- (void)dealloc;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;
- (long long)rasterizationStyle;
- (void)disableAsynchronousRenderingForNextCommit;
- (void)setUsesBrightSceneViewBackgroundMaterial:(_Bool)arg1;
- (void)setStatusBarHidden:(_Bool)arg1 nubViewHidden:(_Bool)arg2 animator:(CDUnknownBlockType)arg3;
- (void)setHomeGrabberHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setRasterizationStyle:(long long)arg1 withMinificationFilterEnabled:(_Bool)arg2;
- (id)initWithDeviceApplicationSceneViewController:(id)arg1;

@end
