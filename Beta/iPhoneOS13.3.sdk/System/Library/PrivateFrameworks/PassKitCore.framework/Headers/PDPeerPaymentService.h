/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PDXPCService.h>

@class NSString, PDDatabaseManager, PDPeerPaymentWebServiceCoordinator, PDRemoteInterfacePresenter, PKEntitlementWhitelist;

@interface PDPeerPaymentService : PDXPCService

{
    PKEntitlementWhitelist *_whitelist;
    PDPeerPaymentWebServiceCoordinator *_peerPaymentWebServiceCoordinator;
    PDRemoteInterfacePresenter *_remoteInterfacePresenter;
    PDDatabaseManager *_databaseManager;
}

@property (retain, nonatomic) PDPeerPaymentWebServiceCoordinator *peerPaymentWebServiceCoordinator;
@property (retain, nonatomic) PDRemoteInterfacePresenter *remoteInterfacePresenter;
@property (retain, nonatomic) PDDatabaseManager *databaseManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithConnection:(id)arg1;
- (void)sharedPeerPaymentWebServiceContextWithHandler:(CDUnknownBlockType)arg1;
- (void)setSharedPeerPaymentWebServiceContext:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)accountWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)registerDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)registerDeviceWithForceReregister:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unregisterDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)registrationStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentIdentityVerificationFlowWithResponseData:(id)arg1 orientation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentRegistrationFlowWithAccount:(id)arg1 amount:(id)arg2 state:(unsigned long long)arg3 senderAddress:(id)arg4 orientation:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)presentPeerPaymentTermsAndConditionsWithTermsURL:(id)arg1 termsIdentifier:(id)arg2 passUniqueID:(id)arg3 orientation:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)noteAccountDeletedWithCompletion:(CDUnknownBlockType)arg1;
- (void)receivedPeerPaymentMessageData:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)updateMessageReceivedDate:(id)arg1 forTransactionWithIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)balanceForPass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setLastUsedAlternateFundingSourcePassUniqueIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)lastUsedAlternateFundingSourcePassUniqueIdentifier:(CDUnknownBlockType)arg1;
- (void)downloadPassIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateMockAccountBalanceByAddingAmount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cloudStoreStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)initalizeCloudStoreIfNecessaryWithHandler:(CDUnknownBlockType)arg1;
- (void)checkTLKsMissingWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetApplePayManateeViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;

@end
