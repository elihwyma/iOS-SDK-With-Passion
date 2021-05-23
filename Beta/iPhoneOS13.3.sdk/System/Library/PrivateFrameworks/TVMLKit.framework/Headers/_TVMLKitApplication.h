/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class IKAppDataStorage, NSDictionary, NSString, TVApplicationControllerContext, UIViewController, UIWindow;

@protocol TVAppRootViewController, UITraitEnvironment;

__attribute__((visibility("hidden")))
@interface _TVMLKitApplication : NSObject

{
    _Bool _headless;
    TVApplicationControllerContext *_launchContext;
    IKAppDataStorage *_localDataStorage;
    UIViewController<TVAppRootViewController> *_appRootViewController;
    UIWindow *_keyWindow;
    id <UITraitEnvironment> _keyTraitEnvironment;
    NSDictionary *_javaScriptLaunchOptions;
}

@property (weak, nonatomic) TVApplicationControllerContext *launchContext;
@property (weak, nonatomic) IKAppDataStorage *localDataStorage;
@property (weak, nonatomic) UIViewController<TVAppRootViewController> *appRootViewController;
@property (weak, nonatomic) UIWindow *keyWindow;
@property (weak, nonatomic) id <UITraitEnvironment> keyTraitEnvironment;
@property (copy, nonatomic) NSDictionary *javaScriptLaunchOptions;
@property (nonatomic) _Bool headless;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)localStorage;
- (id)appIdentifier;
- (id)vendorIdentifier;
- (id)activeDocument;
- (_Bool)appIsTrusted;
- (id)vendorStorage;
- (id)userDefaultsStorage;
- (id)appJSCachePath;
- (id)appLocalJSURL;
- (id)bagBootURLKey;
- (id)appJSURL;
- (id)appTraitCollection;
- (id)offlineJSURL;
- (_Bool)appIsPrivileged;
- (_Bool)shouldIgnoreJSValidation;
- (id)appLaunchParams;
- (id)initWithLaunchContext:(id)arg1;

@end
