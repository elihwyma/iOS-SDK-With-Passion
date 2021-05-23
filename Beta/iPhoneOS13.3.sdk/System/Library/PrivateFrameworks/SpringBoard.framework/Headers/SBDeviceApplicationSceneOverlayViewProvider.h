/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class SBDeviceApplicationSceneHandle, SBIsolatedSceneOrientationFollowingWrapperViewController, UIViewController;

@protocol SBDeviceApplicationSceneOverlayViewProviderDelegate;

@interface SBDeviceApplicationSceneOverlayViewProvider : NSObject

{
    SBIsolatedSceneOrientationFollowingWrapperViewController *_orientationWrapperViewController;
    id <SBDeviceApplicationSceneOverlayViewProviderDelegate> _delegate;
    SBDeviceApplicationSceneHandle *_sceneHandle;
}

@property (retain, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property (weak, nonatomic, readonly) id <SBDeviceApplicationSceneOverlayViewProviderDelegate> delegate;
@property (nonatomic, readonly) UIViewController *overlayViewController;
@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (void)dealloc;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (id)initWithSceneHandle:(id)arg1 delegate:(id)arg2;
- (void)_activateIfPossible;
- (void)_deactivateIfPossible;
- (id)_realOverlayViewController;
- (_Bool)shouldFollowSceneOrientation;

@end
