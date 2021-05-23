/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIResponder.h>

#import <TVMLKit/Swift-Protocol.h>

@class BKSProcessAssertion, NSString, TVApplicationController, UIWindow;

@interface TVAppDelegate : UIResponder <Swift>

{
    _Bool _headLess;
    _Bool _shouldTerminateOnEnterBackground;
    UIWindow *_window;
    TVApplicationController *_appController;
    BKSProcessAssertion *_launchAssertion;
}

@property (retain, nonatomic) TVApplicationController *appController;
@property (nonatomic) _Bool shouldTerminateOnEnterBackground;
@property (retain, nonatomic) BKSProcessAssertion *launchAssertion;
@property (retain, nonatomic) UIWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)applicationDidEnterBackground:(id)arg1;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (id)_launchContext;
- (void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (void)appController:(id)arg1 didFailWithError:(id)arg2;
- (id)launchOptionsWithDefaultOptions:(id)arg1;
- (void)_controllerDidDisplay:(id)arg1;
- (void)_runScrollMoveTest:(id)arg1;
- (void)_presetDialogWithError:(long long)arg1 appController:(id)arg2;

@end
