/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
 */

#import <Foundation/NSObject.h>

@class FBSOrientationObserver, NSString, UIWindow;

@interface AXUIDaemonApplicationDelegate : NSObject

{
    FBSOrientationObserver *_orientationObserver;
    UIWindow *window;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UIWindow *window;

+ (id)featureEnabledStatusDidChangeNotification;
+ (id)loggingFacility;
+ (id)debugFeatureName;
+ (_Bool)isFeatureEnabled;

- (id)init;
- (void)dealloc;
- (void)applicationWillTerminate:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)_exitIfNotEnabled;
- (void)_setKeepAlive:(_Bool)arg1;
- (void)_enabledPreferenceDidChange:(id)arg1;
- (void)didFinishLaunching;
- (void)_didUpdateToOrientation:(long long)arg1 duration:(double)arg2;
- (void)willTerminate;
- (void)didUpdateOrientation;
- (void)_systemAppDidBecomeReady;

@end
