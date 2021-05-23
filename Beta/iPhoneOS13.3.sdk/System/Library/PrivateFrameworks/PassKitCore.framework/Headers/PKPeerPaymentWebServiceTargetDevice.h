/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSString, PKPeerPaymentService;

@interface PKPeerPaymentWebServiceTargetDevice : NSObject

{
    PKPeerPaymentService *_peerPaymentService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)localTargetDevice;

- (id)init;
- (void)dealloc;
- (id)account;
- (id)deviceRegion;
- (void)updateAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)downloadPassIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)cloudStoreStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)initalizeCloudStoreIfNecessaryWithHandler:(CDUnknownBlockType)arg1;
- (void)checkTLKsMissingWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetApplePayManateeViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)renewAppleAccountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)secureElementIdentifiers;
- (id)appleAccountInformation;
- (id)bridgedClientInfo;
- (void)_handleAccountChangedNotification:(id)arg1;
- (_Bool)userHasDisabledPeerPayment;
- (void)setUserHasDisabledPeerPayment:(_Bool)arg1;
- (void)provisionPeerPaymentPassWithProvisioningController:(id)arg1 credential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)peerPaymentReRegisterWithURL:(id)arg1 pushToken:(id)arg2 peerPaymentWebService:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
