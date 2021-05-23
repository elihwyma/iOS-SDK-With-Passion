/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIResponder.h>

#import <TVMLKit/Swift-Protocol.h>

@class BKSProcessAssertion, IKURLBagCache, NSDictionary, NSString, NSURL, TVApplicationController, TVStoreApplicationSetupHelper, UIWindow;

@interface TVStoreApplicationDelegate : UIResponder <Swift>

{
    TVStoreApplicationSetupHelper *_setupHelper;
    NSDictionary *_launchOptions;
    NSURL *_launchOpenURL;
    NSDictionary *_launchOpenURLOptions;
    BKSProcessAssertion *_launchAssertion;
    _Bool _shouldTerminateOnEnterBackground;
    _Bool _headLess;
    _Bool _overrideOrientation;
    UIWindow *_window;
    TVApplicationController *_appController;
    IKURLBagCache *_bagCache;
}

@property (retain, nonatomic) UIWindow *window;
@property (nonatomic, readonly) TVApplicationController *appController;
@property (nonatomic, readonly) IKURLBagCache *bagCache;
@property (nonatomic, readonly) _Bool supportsIdleModeVisualEffects;
@property (nonatomic) _Bool overrideOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)reload;
- (void)applicationDidEnterBackground:(id)arg1;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (id)bagBootURLKey;
- (id)offlineJSURL;
- (void)_launchApp;
- (void)appController:(id)arg1 didFailWithError:(id)arg2;
- (void)updateIdleModeVisualEffectsStatus:(_Bool)arg1;
- (void)_controllerDidDisplay:(id)arg1;
- (void)_presetDialogWithError:(long long)arg1 appController:(id)arg2;
- (_Bool)shouldBeForcedLeftToRight;
- (id)bootURL;
- (id)_bagBootURL;
- (void)_loadWithBootURL:(id)arg1;
- (void)setupWithBootURL:(id)arg1;
- (id)appLocalBootURL;
- (void)didShowViewController;
- (id)cachedBagPath;

@end
