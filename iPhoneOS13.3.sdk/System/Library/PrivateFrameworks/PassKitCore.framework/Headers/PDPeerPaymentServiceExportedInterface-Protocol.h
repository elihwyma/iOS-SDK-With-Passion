//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PDXPCServiceExportedInterface-Protocol.h>

@class NSData, NSDate, NSDecimalNumber, NSNumber, NSString, NSURL, PKCurrencyAmount, PKPaymentPass, PKPeerPaymentAccount, PKPeerPaymentWebServiceContext;

@protocol PDPeerPaymentServiceExportedInterface <PDXPCServiceExportedInterface>
- (void)resetApplePayManateeViewWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)checkTLKsMissingWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)initalizeCloudStoreIfNecessaryWithHandler:(void (^)(BOOL, NSError *))arg1;
- (void)cloudStoreStatusWithCompletion:(void (^)(CKAccountInfo *, BOOL, NSError *))arg1;
- (void)updateMockAccountBalanceByAddingAmount:(NSDecimalNumber *)arg1 completion:(void (^)(PKPeerPaymentAccount *))arg2;
- (void)downloadPassIfNecessaryWithCompletion:(void (^)(BOOL))arg1;
- (void)lastUsedAlternateFundingSourcePassUniqueIdentifier:(void (^)(NSString *))arg1;
- (void)setLastUsedAlternateFundingSourcePassUniqueIdentifier:(NSString *)arg1 handler:(void (^)(void))arg2;
- (void)balanceForPass:(PKPaymentPass *)arg1 completion:(void (^)(PKCurrencyAmount *))arg2;
- (void)updateMessageReceivedDate:(NSDate *)arg1 forTransactionWithIdentifier:(NSString *)arg2 handler:(void (^)(void))arg3;
- (void)receivedPeerPaymentMessageData:(NSData *)arg1 handler:(void (^)(void))arg2;
- (void)noteAccountDeletedWithCompletion:(void (^)(void))arg1;
- (void)presentPeerPaymentTermsAndConditionsWithTermsURL:(NSURL *)arg1 termsIdentifier:(NSString *)arg2 passUniqueID:(NSString *)arg3 orientation:(NSNumber *)arg4 completion:(void (^)(BOOL))arg5;
- (void)presentRegistrationFlowWithAccount:(PKPeerPaymentAccount *)arg1 amount:(PKCurrencyAmount *)arg2 state:(NSUInteger)arg3 senderAddress:(NSString *)arg4 orientation:(NSNumber *)arg5 completion:(void (^)(BOOL))arg6;
- (void)presentIdentityVerificationFlowWithResponseData:(NSData *)arg1 orientation:(NSNumber *)arg2 completion:(void (^)(BOOL))arg3;
- (void)registrationStatusWithCompletion:(void (^)(NSUInteger))arg1;
- (void)unregisterDeviceWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)registerDeviceWithForceReregister:(BOOL)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)registerDeviceWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)deleteAccountWithCompletion:(void (^)(void))arg1;
- (void)updateAccountWithCompletion:(void (^)(PKPeerPaymentAccount *))arg1;
- (void)accountWithCompletion:(void (^)(PKPeerPaymentAccount *))arg1;
- (void)setSharedPeerPaymentWebServiceContext:(PKPeerPaymentWebServiceContext *)arg1 handler:(void (^)(void))arg2;
- (void)sharedPeerPaymentWebServiceContextWithHandler:(void (^)(PKPeerPaymentWebServiceContext *))arg1;

@optional
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(void (^)(BOOL))arg1;
@end

