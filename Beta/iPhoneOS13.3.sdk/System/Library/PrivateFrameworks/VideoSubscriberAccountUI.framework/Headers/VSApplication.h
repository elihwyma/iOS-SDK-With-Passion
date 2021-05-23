/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

@class IKAppContext, NSError, NSHTTPCookieStorage, NSString, NSURL, VSAppDeviceConfig, VSAuditToken, VSStateMachine;

@protocol VSApplicationDelegate;

__attribute__((visibility("hidden")))
@interface VSApplication : NSObject

{
    _Bool _shouldAllowRemoteInspection;
    NSURL *_bootURL;
    IKAppContext *_appContext;
    id <VSApplicationDelegate> _delegate;
    VSAuditToken *_auditToken;
    VSStateMachine *_stateMachine;
    VSAppDeviceConfig *_appDeviceConfig;
    NSHTTPCookieStorage *_cookieStorage;
    NSError *_failureToStart;
}

@property (retain, nonatomic) VSStateMachine *stateMachine;
@property (retain, nonatomic) VSAppDeviceConfig *appDeviceConfig;
@property (retain, nonatomic) IKAppContext *appContext;
@property (retain, nonatomic) NSHTTPCookieStorage *cookieStorage;
@property (retain, nonatomic) NSError *failureToStart;
@property (copy, nonatomic, readonly) NSURL *bootURL;
@property (weak, nonatomic) id <VSApplicationDelegate> delegate;
@property (copy, nonatomic) VSAuditToken *auditToken;
@property (nonatomic) _Bool shouldAllowRemoteInspection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (oneway void)release;
- (void)stop;
- (void)start;
- (id)localStorage;
- (id)appIdentifier;
- (id)vendorIdentifier;
- (id)activeDocument;
- (id)deviceConfigForContext:(id)arg1;
- (_Bool)appIsTrusted;
- (id)vendorStorage;
- (id)userDefaultsStorage;
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (id)appJSURL;
- (_Bool)appContext:(id)arg1 validateDOMDocument:(id)arg2 inContext:(id)arg3 error:(id *)arg4;
- (id)objectForPlayer:(id)arg1;
- (id)objectForPlaylist:(id)arg1;
- (id)objectForMediaItem:(id)arg1;
- (void)appContext:(id)arg1 didStartWithOptions:(id)arg2;
- (void)appContext:(id)arg1 didFailWithError:(id)arg2;
- (void)appContext:(id)arg1 didStopWithOptions:(id)arg2;
- (id)xhrSessionConfigurationForContext:(id)arg1;
- (id)sourceApplicationBundleIdentifierForContext:(id)arg1;
- (id)sourceApplicationAuditTokenDataForContext:(id)arg1;
- (id)viewElementRegistry;
- (_Bool)shouldIgnoreJSValidation;
- (id)appLaunchParams;
- (id)initWithBootURL:(id)arg1;
- (void)sendErrorWithMessage:(id)arg1;
- (void)evaluate:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)appDocumentForDocument:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)transitionToReadyState;
- (void)transitionToInvalidState;
- (void)transitionToStartingState;
- (void)transitionToNotifyingOfFailureToStartState;
- (void)transitionToStoppingState;

@end
