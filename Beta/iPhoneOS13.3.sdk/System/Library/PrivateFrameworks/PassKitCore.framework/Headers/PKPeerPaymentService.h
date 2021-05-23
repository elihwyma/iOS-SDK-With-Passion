/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class PKPeerPaymentAccount, PKPeerPaymentWebServiceContext, PKXPCService;

@protocol OS_dispatch_queue;

@interface PKPeerPaymentService : NSObject

{
    PKXPCService *_remoteService;
    PKPeerPaymentAccount *_account;
    NSObject<OS_dispatch_queue> *_accountQueue;
    long long _accountChangedNotificationSuspensionCount;
}

@property (retain, nonatomic) PKPeerPaymentWebServiceContext *sharedPeerPaymentWebServiceContext;
@property (nonatomic, readonly) PKPeerPaymentAccount *account;

- (id)init;
- (void)dealloc;
- (void)accountWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)registerDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)registerDeviceWithForceReregister:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unregisterDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)registrationStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentRegistrationFlowWithAccount:(id)arg1 amount:(id)arg2 state:(unsigned long long)arg3 senderAddress:(id)arg4 orientation:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)balanceForPass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadPassIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateMockAccountBalanceByAddingAmount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cloudStoreStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)initalizeCloudStoreIfNecessaryWithHandler:(CDUnknownBlockType)arg1;
- (void)checkTLKsMissingWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetApplePayManateeViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)suspendAccountChangedNotifications;
- (void)receivedPeerPaymentMessageData:(id)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)lastUsedAlternateFundingSourcePassUniqueIdentifier;
- (void)noteAccountDeleted;
- (void)sharedPeerPaymentWebServiceContextWithCompletion:(CDUnknownBlockType)arg1;
- (void)setLastUsedAlternateFundingSourcePassUniqueIdentifier:(id)arg1;
- (void)presentIdentityVerificationFlowWithResponse:(id)arg1 orientation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentPeerPaymentTermsAndConditionsWithAccount:(id)arg1 orientation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_accountChanged:(id)arg1;
- (id)_synchronousRemoteObjectProxyForSelector:(SEL)arg1;
- (void)resumeAccountChangedNotifications;
- (void)presentRegistrationFlowWithAccount:(id)arg1 orientation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateMessageReceivedDate:(id)arg1 forTransactionWithIdentifier:(id)arg2;
- (void)_sharedPeerPaymentWebServiceContextWithCompletion:(CDUnknownBlockType)arg1;

@end
