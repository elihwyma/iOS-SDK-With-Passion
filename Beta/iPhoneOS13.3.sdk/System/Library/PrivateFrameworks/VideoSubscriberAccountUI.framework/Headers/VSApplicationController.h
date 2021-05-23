/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

@class JSValue, NSError, NSOperationQueue, NSString, NSURL, VSAppDocumentController, VSApplication, VSApplicationControllerResponseHandler, VSAuditToken, VSIdentityProvider, VSPreferences, VSStateMachine;

@protocol VSApplicationControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSApplicationController : NSObject

{
    _Bool _applicationMustSelfValidate;
    _Bool _allowUI;
    id <VSApplicationControllerDelegate> _delegate;
    VSIdentityProvider *_identityProvider;
    NSString *_accountProviderAuthenticationToken;
    VSAuditToken *_auditToken;
    VSStateMachine *_stateMachine;
    NSError *_delegateError;
    NSError *_onLaunchError;
    NSURL *_fetchedURL;
    NSOperationQueue *_privateQueue;
    VSApplication *_application;
    VSApplicationControllerResponseHandler *_responseHandler;
    VSAppDocumentController *_appDocumentController;
    JSValue *_applicationReadyCallback;
    VSPreferences *_preferences;
}

@property (retain, nonatomic) VSStateMachine *stateMachine;
@property (retain) NSError *delegateError;
@property (retain) NSError *onLaunchError;
@property (retain, nonatomic) VSIdentityProvider *identityProvider;
@property (retain, nonatomic) NSURL *fetchedURL;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain) VSApplication *application;
@property (retain, nonatomic) VSApplicationControllerResponseHandler *responseHandler;
@property (retain, nonatomic) VSAppDocumentController *appDocumentController;
@property (retain, nonatomic) JSValue *applicationReadyCallback;
@property (nonatomic) _Bool applicationMustSelfValidate;
@property (nonatomic) _Bool allowUI;
@property (retain, nonatomic) VSPreferences *preferences;
@property (weak, nonatomic) id <VSApplicationControllerDelegate> delegate;
@property (retain, nonatomic) NSString *accountProviderAuthenticationToken;
@property (copy, nonatomic) VSAuditToken *auditToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (oneway void)release;
- (void)stop;
- (void)start;
- (void)submitRequest:(id)arg1;
- (id)initWithIdentityProvider:(id)arg1;
- (void)_presentAlert:(id)arg1;
- (id)_bootURL;
- (void)_notifyDidStart;
- (void)_notifyStartDidFailWithError:(id)arg1;
- (void)_notifyDelegateWithBlock:(CDUnknownBlockType)arg1;
- (void)_submitJavascriptRequest:(id)arg1 forApplicationControllerRequest:(id)arg2;
- (void)_completeRequest:(id)arg1 withResult:(id)arg2;
- (void)_makeJavascriptRequestForRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_presentDocument:(id)arg1;
- (void)_beginAuthentication;
- (void)_cancelValidation;
- (void)_applicationReadyWithSuccess:(_Bool)arg1 javascriptErrorValue:(id)arg2;
- (id)_applicationLaunchParams;
- (void)_notifyDidReceiveViewModel:(id)arg1;
- (void)_notifyDidReceiveViewModelError:(id)arg1;
- (id)_applicationControllerAlertForJavascriptAlert:(id)arg1;
- (void)_completeRequest:(id)arg1 withJavascriptResponse:(id)arg2 javascriptErrorValue:(id)arg3;
- (id)_errorForJavascriptErrorValueValue:(id)arg1 withRequest:(id)arg2;
- (void)_notifyRequest:(id)arg1 didCompleteWithResponse:(id)arg2;
- (void)_notifyRequest:(id)arg1 didFailWithError:(id)arg2;
- (id)_javascriptRequestForRequest:(id)arg1 withVerificationData:(id)arg2;
- (id)_makeJavaScriptRequest;
- (void)appDocumentController:(id)arg1 didUpdateViewModel:(id)arg2;
- (void)appDocumentController:(id)arg1 didFailToUpdateViewModelWithError:(id)arg2;
- (void)applicationDidStart:(id)arg1;
- (void)application:(id)arg1 startDidFailWithError:(id)arg2;
- (void)application:(id)arg1 evaluateAppJavascriptInContext:(id)arg2;
- (id)launchParamsForApplication:(id)arg1;
- (id)activeAppDocumentForApplication:(id)arg1;
- (void)transitionToWaitingForBootUrlState;
- (void)transitionToWaitingForBothLaunchCallbacksState;
- (void)transitionToReadyState;
- (void)transitionToNotifyingOfLaunchFailureState;
- (void)transitionToInvalidState;
- (void)showAuthenticationUserInterfaceWithAuthenticationToken:(id)arg1;
- (void)applicationStartSelfValidationWithAuthenticationToken:(id)arg1;

@end
