/*
 Image: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, SOAuthorizationRequestParametersCore, SOClient;

@protocol OS_dispatch_queue, SOAuthorizationCoreDelegate;

@interface SOAuthorizationCore : NSObject

{
    SOClient *_client;
    SOAuthorizationRequestParametersCore *_requestParametersCore;
    id <SOAuthorizationCoreDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateDispatchQueue;
    NSDictionary *_authorizationOptions;
}

@property (retain) SOAuthorizationRequestParametersCore *requestParametersCore;
@property (weak) id <SOAuthorizationCoreDelegate> delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateDispatchQueue;
@property (retain, nonatomic) NSDictionary *authorizationOptions;

+ (_Bool)canPerformAuthorizationWithURL:(id)arg1 responseCode:(long long)arg2;
+ (_Bool)canPerformAuthorizationWithURL:(id)arg1 responseCode:(long long)arg2 useInternalExtensions:(_Bool)arg3;
+ (void)isExtensionProcessWithAuditToken:(CDStruct_6ad76789)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)_canPerformAuthorizationWithURL:(id)arg1 responseCode:(long long)arg2 callerBundleIdentifier:(id)arg3 useInternalExtensions:(_Bool)arg4;
+ (_Bool)_doAKshouldProcessURL:(id)arg1;

- (id)init;
- (id)debugDescription;
- (void)cancelAuthorization;
- (void)beginAuthorizationWithURL:(id)arg1 httpHeaders:(id)arg2 httpBody:(id)arg3;
- (void)beginAuthorizationWithParameters:(id)arg1;
- (void)beginAuthorizationWithOperation:(id)arg1 url:(id)arg2 httpHeaders:(id)arg3 httpBody:(id)arg4;
- (void)beginAuthorizationWithRequestParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)realms;
- (void)debugHintsWithCompletion:(CDUnknownBlockType)arg1;
- (void)getAuthorizationHintsWithURL:(id)arg1 responseCode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_finishAuthorizationWithCredential:(id)arg1 error:(id)arg2;
- (void)beginAuthorizationWithParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_cancelAuthorization;
- (void)performBlockOnDelegateQueue:(CDUnknownBlockType)arg1;

@end
