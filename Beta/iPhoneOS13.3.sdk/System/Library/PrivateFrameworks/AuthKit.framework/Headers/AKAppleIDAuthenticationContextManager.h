/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

@class AKAppleIDAuthenticationController, NSMutableDictionary, NSString;

@protocol AKAppleIDAuthenticationDelegate, OS_dispatch_queue;

@interface AKAppleIDAuthenticationContextManager : NSObject

{
    NSMutableDictionary *_authContextsByUUID;
    AKAppleIDAuthenticationController *_authController;
    NSObject<OS_dispatch_queue> *_authContextsQueue;
    id <AKAppleIDAuthenticationDelegate> _delegate;
}

@property (weak, nonatomic) id <AKAppleIDAuthenticationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithAuthenticationController:(id)arg1;
- (id)registerContext:(id)arg1;
- (void)unregisterContext:(id)arg1;
- (id)_clientSideContextForServerContext:(id)arg1;
- (void)provisionAnisetteForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)syncAnisetteForContext:(id)arg1 withSIMData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)eraseAnisetteForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchAnisetteDataForContext:(id)arg1 provisionIfNecessary:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)legacyAnisetteDataForContext:(id)arg1 DSID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)presentKeepUsingUIForContext:(id)arg1 appleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissKeepUsingUIForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)presentBasicLoginUIForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissBasicLoginUIForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentLoginAlertForContext:(id)arg1 withError:(id)arg2 title:(id)arg3 message:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)presentSecondFactorUIForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissSecondFactorUIForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentSecondFactorAlertForContext:(id)arg1 withError:(id)arg2 title:(id)arg3 message:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)presentServerProvidedUIForContext:(id)arg1 withConfiguration:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissServerProvidedUIForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentNativeRecoveryUIForContext:(id)arg1 recoveryContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissNativeRecoveryUIForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentBiometricOrPasscodeValidationForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)shouldContinueWithAuthenticationResults:(id)arg1 error:(id)arg2 forContextID:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
