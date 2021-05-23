/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIApplication.h>

@class NSString, UIColor, UIWindow;

@interface SUApplication : UIApplication

{
    _Bool _terminateOnNextSuspend;
    UIWindow *_window;
    UIColor *_interactionTintColor;
}

@property (copy, nonatomic) UIColor *interactionTintColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UIWindow *window;

- (id)init;
- (void)dealloc;
- (double)defaultImageSnapshotExpiration;
- (_Bool)applicationSuspendWithSettings:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)applicationDidFinishLaunching:(id)arg1;
- (_Bool)runTest:(id)arg1 options:(id)arg2;
- (void)_storeEnabledChangeNotification:(id)arg1;
- (void)_teardownUI;
- (void)_applicationDidFinishLaunching:(id)arg1;
- (void)_setupUI;
- (void)_exitIfStoreNotAvailable;
- (void)_exitForStoreNotAvailable;
- (void)_runScriptTestWithOptions:(id)arg1;
- (void)runTestInvocation:(id)arg1;

@end
