/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@protocol MKSystemControllerOpenURLDelegate;

@interface MKSystemController : NSObject

{
    id <MKSystemControllerOpenURLDelegate> _openURLDelegate;
}

@property (weak, nonatomic) id <MKSystemControllerOpenURLDelegate> openURLDelegate;

+ (id)sharedInstance;

- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)openURL:(id)arg1;
- (_Bool)isInternalInstall;
- (int)userInterfaceIdiom;
- (double)screenScale;
- (_Bool)isWifiEnabled;
- (struct CGSize)screenSize;
- (_Bool)reduceMotionEnabled;
- (_Bool)supportsPitchAPI;
- (_Bool)requiresRTT;
- (_Bool)overrideBlurStyle;
- (_Bool)supports3DImagery;
- (_Bool)supportsAlwaysOnCompass;
- (_Bool)supports3DMaps;
- (_Bool)isDevicePluggedIn;
- (_Bool)isHiDPI;
- (void)openURL:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)openUserActivity:(id)arg1 withApplicationProxy:(id)arg2 requireOptionKeyPromptUnlockDevice:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)placeDialRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_openURLsOnBackgroundThread;
- (_Bool)_isRunningInLockScreen;
- (_Bool)_shouldUseLaunchServices;
- (id)_defaultOpenURLOptions;
- (id)_transformURLIfNecessary:(id)arg1;
- (_Bool)isPhone6PlusOrLarger;
- (void)openURL:(id)arg1 fromScene:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)shouldCaptureMapViewGestureAnalytics;

@end
