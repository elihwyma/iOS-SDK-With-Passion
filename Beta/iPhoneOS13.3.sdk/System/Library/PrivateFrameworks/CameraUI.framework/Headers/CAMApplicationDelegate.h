/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIResponder.h>

@class CAMBurstController, CAMCameraRollController, CAMIrisVideoController, CAMKeepAliveController, CAMLocationController, CAMMotionController, CAMNebulaDaemonProxyManager, CAMPersistenceController, CAMPowerController, CAMProtectionController, CAMRemoteShutterController, CAMTimelapseController, CAMViewfinderViewController, CUCaptureController, NSString, UIWindow;

@interface CAMApplicationDelegate : UIResponder

{
    UIWindow *_window;
    CAMViewfinderViewController *_viewfinderViewController;
    CAMCameraRollController *_cameraRollController;
    CUCaptureController *_captureController;
    CAMTimelapseController *_timelapseController;
    CAMPersistenceController *_persistenceController;
    CAMMotionController *_motionController;
    CAMLocationController *_locationController;
    CAMPowerController *_powerController;
    CAMBurstController *_burstController;
    CAMKeepAliveController *_keepAliveController;
    CAMProtectionController *_protectionController;
    CAMRemoteShutterController *_remoteShutterController;
    CAMNebulaDaemonProxyManager *_nebulaDaemonProxyManager;
    CAMIrisVideoController *_irisVideoController;
}

@property (retain, nonatomic) UIWindow *window;
@property (nonatomic, readonly) CAMViewfinderViewController *viewfinderViewController;
@property (nonatomic, readonly) CAMCameraRollController *cameraRollController;
@property (nonatomic, readonly) CUCaptureController *captureController;
@property (nonatomic, readonly) CAMTimelapseController *timelapseController;
@property (nonatomic, readonly) CAMPersistenceController *persistenceController;
@property (nonatomic, readonly) CAMMotionController *motionController;
@property (nonatomic, readonly) CAMLocationController *locationController;
@property (nonatomic, readonly) CAMPowerController *powerController;
@property (nonatomic, readonly) CAMBurstController *burstController;
@property (nonatomic, readonly) CAMKeepAliveController *keepAliveController;
@property (nonatomic, readonly) CAMProtectionController *protectionController;
@property (nonatomic, readonly) CAMRemoteShutterController *remoteShutterController;
@property (nonatomic, readonly) CAMNebulaDaemonProxyManager *nebulaDaemonProxyManager;
@property (nonatomic, readonly) CAMIrisVideoController *irisVideoController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (void)applicationWillTerminate:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)prepareForDefaultImageSnapshotForScreen:(id)arg1;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateShortcutItemsForApplication:(id)arg1;
- (_Bool)_createSubsystemsWithLaunchOptions:(id)arg1;

@end
