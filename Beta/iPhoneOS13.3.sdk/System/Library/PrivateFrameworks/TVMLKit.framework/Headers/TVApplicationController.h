/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

#import <TVMLKit/Swift-Protocol.h>

@class IKAppContext, IKAppDataStorage, NSDate, NSDictionary, NSString, NSXPCListener, TVApplicationControllerContext, UINavigationController, UIView, UIViewController, UIWindow, _TVApplicationInspector, _TVMLKitApplication;

@protocol TVAppRootViewController, TVApplicationControllerDelegate, UITraitEnvironment;

@interface TVApplicationController : NSObject <Swift>

{
    IKAppContext *_appContext;
    _TVMLKitApplication *_application;
    IKAppDataStorage *_appLocalStorage;
    NSXPCListener *_serviceListener;
    NSDictionary *_openURLResumeOptions;
    NSDictionary *_openURLReloadOptions;
    _Bool _suspended;
    _Bool _reloadInProgress;
    _Bool _reloadOnResume;
    double _reloadOnResumeMinInterval;
    NSDate *_reloadOnResumeBackgroundedDate;
    _Bool _doLaunchOpenURLHandling;
    NSDictionary *_launchOpenURLOptions;
    _Bool _popViewControllerOnBackground;
    UIViewController<TVAppRootViewController> *_appRootViewController;
    long long _interfaceOrientation;
    UIWindow *_window;
    TVApplicationControllerContext *_context;
    id <TVApplicationControllerDelegate> _delegate;
    _TVApplicationInspector *_applicationInspector;
    id <UITraitEnvironment> _keyTraitEnvironment;
}

@property (nonatomic, readonly) UINavigationController *_currentNavigationController;
@property (nonatomic, readonly) _TVApplicationInspector *applicationInspector;
@property (nonatomic, readonly) IKAppContext *appContext;
@property (nonatomic, readonly) UIViewController *rootViewController;
@property (weak, nonatomic) UIView *viewServiceKeyView;
@property (weak, nonatomic) id <UITraitEnvironment> keyTraitEnvironment;
@property (nonatomic, readonly) UIWindow *window;
@property (nonatomic, readonly) TVApplicationControllerContext *context;
@property (weak, nonatomic, readonly) id <TVApplicationControllerDelegate> delegate;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)_jsLaunchOptionsWithApplicationOptions:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)timeZone;
- (void)stop;
- (void)reload;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)applicationWillSuspend:(id)arg1;
- (id)_rootViewController;
- (void)_statusBarOrientationDidChange:(id)arg1;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (struct CGSize)screenSize;
- (id)activeDocument;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (id)deviceConfigForContext:(id)arg1;
- (id)navigationControllerForContext:(id)arg1;
- (id)modalControllerForContext:(id)arg1;
- (id)tabBarForContext:(id)arg1;
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (id)_appContext;
- (_Bool)appContext:(id)arg1 validateDOMDocument:(id)arg2 inContext:(id)arg3 error:(id *)arg4;
- (void)appContext:(id)arg1 needsReloadWithUrgency:(unsigned long long)arg2 options:(id)arg3;
- (void)appContext:(id)arg1 didStartWithOptions:(id)arg2;
- (void)appContext:(id)arg1 didFailWithError:(id)arg2;
- (void)appContext:(id)arg1 didStopWithOptions:(id)arg2;
- (_Bool)appContext:(id)arg1 highlightViewForElement:(id)arg2 contentColor:(id)arg3 paddingColor:(id)arg4 borderColor:(id)arg5 marginColor:(id)arg6;
- (_Bool)appContext:(id)arg1 highlightViewsForElements:(id)arg2 contentColor:(id)arg3 paddingColor:(id)arg4 borderColor:(id)arg5 marginColor:(id)arg6;
- (_Bool)cancelHighlightViewForAppContext:(id)arg1;
- (void)appContext:(id)arg1 didChangeInspectElementMode:(_Bool)arg2;
- (unsigned long long)preferredVideoFormat;
- (unsigned long long)preferredVideoPreviewFormat;
- (id)systemLanguage;
- (id)storeFrontCountryCode;
- (void)_launchApp;
- (_Bool)isTimeZoneSet;
- (void)_applicationWillTerminateNotification:(id)arg1;
- (void)_openURLControllerDidDisplay:(id)arg1;
- (void)applicationDidResume:(id)arg1;
- (_Bool)_hasReloadOnResumeMinIntervalPassed;
- (void)_reloadControllerDidDisplay:(id)arg1;
- (_Bool)_shouldReloadOnResume;
- (void)_openURLControllerHandler:(_Bool)arg1;
- (_Bool)appNavigationController:(id)arg1 shouldOverrideModalBehaviorForDocument:(id)arg2 andExistingDocument:(id)arg3;
- (_Bool)appNavigationController:(id)arg1 shouldIgnoreDismissalForViewController:(id)arg2;
- (_Bool)appNavigationController:(id)arg1 shouldDismissShroudForDocument:(id)arg2;
- (id)initWithContext:(id)arg1 window:(id)arg2 delegate:(id)arg3;
- (_Bool)openURL:(id)arg1 options:(id)arg2;
- (_Bool)jsOpenURL:(id)arg1 options:(id)arg2;
- (void)evaluateInJavaScriptContext:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_openURLOnAppLaunchControllerDidDisplay:(id)arg1;

@end
