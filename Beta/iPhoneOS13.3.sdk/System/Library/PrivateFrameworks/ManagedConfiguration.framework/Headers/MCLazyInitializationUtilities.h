/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@interface MCLazyInitializationUtilities : NSObject

+ (void)loadNSBundleAtURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)loadBundleAtURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)initPowerlog;
+ (void)initCoreGraphics;
+ (void)initAppleKeyStore;
+ (void)initImageIO;
+ (void)initCoreText;
+ (void)initExchangeSyncExpress;
+ (void)initDataAccess;
+ (void)initDAEAS;
+ (void)initLoggingSupport;
+ (void)initSetupAssistant;
+ (void)initCoreServices;
+ (void)initSpringBoardServices;
+ (void)initSpringBoardUIServices;
+ (void)initUserManagement;
+ (void)initAppleIDSSOAuthentication;
+ (void)initAuthKit;
+ (void)initAssertionServices;

@end
