/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@interface PKPaymentSetupAssistantRegistrationUtilities : NSObject

+ (_Bool)setupAssistantNeedsToRun:(unsigned long long)arg1 returningRequirements:(unsigned long long *)arg2;
+ (_Bool)_phoneNeedsToRun:(unsigned long long *)arg1;
+ (_Bool)_bridgeNeedsToRun:(unsigned long long *)arg1;
+ (_Bool)_macNeedsToRun:(unsigned long long *)arg1;
+ (_Bool)_shouldCheckMacNeedsToRun;
+ (_Bool)_macNeedsToRun:(unsigned long long *)arg1 secureElementOwnershipState:(unsigned long long)arg2;
+ (void)_phonePreflight:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)_bridgePreflight:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)_macPreflight:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (id)_peerPaymentCredentialFromPeerPaymentWebService:(id)arg1;
+ (void)_handlePreflightFinishedWithSuccess:(_Bool)arg1 paymentCredentials:(id)arg2 provisioningController:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)_bridgeContextDefaultLocalCredential;
+ (void)preflightPaymentSetupProvisioningController:(id)arg1 forSetupAssistant:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;

@end
