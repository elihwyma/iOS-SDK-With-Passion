//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PDPaymentServiceExportedInterface-Protocol.h>

@class NSData, NSDate, NSString, PKExpressTransactionState, PKPaymentApplication, PKPaymentBalanceReminder, PKPaymentPass, PKPaymentTransaction, PKTransitAppletHistory, PKValueAddedServiceTransaction, PKVerificationChannel;

@protocol PDPaymentServiceExtendedExportedInterface <PDPaymentServiceExportedInterface>
- (void)startBackgroundVerificationObserverForPass:(PKPaymentPass *)arg1 verificationMethod:(PKVerificationChannel *)arg2;
- (void)passbookUIServiceDidLaunch:(void (^)(void))arg1;
- (void)scheduleAutomaticPresentationAvailableNotificationForPassWithUniqueIdentifier:(NSString *)arg1 handler:(void (^)(BOOL))arg2;
- (void)removeProductsCache;
- (void)unscheduleDeviceCheckIn;
- (void)scheduleDeviceCheckInWithStartTimeOffset:(double)arg1;
- (void)scheduleSetupReminders:(void (^)(void))arg1;
- (void)consistencyCheckWithHandler:(void (^)(void))arg1;
- (void)simulatePaymentPushTopic:(NSString *)arg1 handler:(void (^)(void))arg2;
- (void)outstandingExpressTransactionState:(void (^)(PKExpressTransactionState *))arg1;
- (void)transitStateWithPassUniqueIdentifier:(NSString *)arg1 paymentApplication:(PKPaymentApplication *)arg2 handler:(void (^)(PKTransitAppletState *))arg3;
- (void)simulateDefaultExpressTransitPassIdentifier:(NSString *)arg1 forExpressMode:(NSString *)arg2 handler:(void (^)(void))arg3;
- (void)setDefaultExpressFelicaTransitPassIdentifier:(NSString *)arg1 withCredential:(NSData *)arg2 completion:(void (^)(BOOL, NSString *))arg3;
- (void)processTransitTransactionEventWithHistory:(PKTransitAppletHistory *)arg1 transactionDate:(NSDate *)arg2 forPaymentApplication:(PKPaymentApplication *)arg3 withPassUniqueIdentifier:(NSString *)arg4 expressTransactionState:(PKExpressTransactionState *)arg5;
- (void)setDefaultExpressTransitPassIdentifier:(NSString *)arg1 withCredential:(NSData *)arg2 completion:(void (^)(BOOL, NSString *))arg3;
- (void)sanitizeExpressPasses;
- (void)defaultPaymentPassIngestionSpecificIdentifier:(void (^)(NSString *))arg1;
- (void)defaultPaymentApplicationForPassUniqueIdentifier:(NSString *)arg1 handler:(void (^)(PKPaymentApplication *))arg2;
- (void)setDefaultPaymentApplication:(PKPaymentApplication *)arg1 forPassUniqueIdentifier:(NSString *)arg2 handler:(void (^)(PKPass *))arg3;
- (void)archiveMessageWithIdentifier:(NSString *)arg1 handler:(void (^)(void))arg2;
- (void)deleteAllMessagesForPaymentPassWithUniqueIdentifier:(NSString *)arg1 handler:(void (^)(void))arg2;
- (void)deleteAllTransactionsForPaymentPassWithUniqueIdentifier:(NSString *)arg1 handler:(void (^)(void))arg2;
- (void)deletePaymentTransactionWithIdentifier:(NSString *)arg1 forPassWithUniqueIdentifier:(NSString *)arg2 handler:(void (^)(void))arg3;
- (void)insertOrUpdateValueAddedServiceTransaction:(PKValueAddedServiceTransaction *)arg1 forPassUniqueIdentifier:(NSString *)arg2 paymentTransaction:(PKPaymentTransaction *)arg3 handler:(void (^)(void))arg4;
- (void)valueAddedServiceTransactionWithIdentifier:(NSString *)arg1 handler:(void (^)(PKValueAddedServiceTransaction *))arg2;
- (void)valueAddedServiceTransactionsForPaymentTransaction:(PKPaymentTransaction *)arg1 handler:(void (^)(NSSet *))arg2;
- (void)valueAddedServiceTransactionsForPassWithUniqueIdentifier:(NSString *)arg1 limit:(long long)arg2 handler:(void (^)(NSSet *))arg3;
- (void)setBalanceReminder:(PKPaymentBalanceReminder *)arg1 forBalanceIdentifier:(NSString *)arg2 withPassUniqueIdentifier:(NSString *)arg3 handler:(void (^)(BOOL))arg4;
- (void)balanceReminderThresholdForBalanceIdentifier:(NSString *)arg1 withPassUniqueIdentifier:(NSString *)arg2 handler:(void (^)(PKPaymentBalanceReminder *))arg3;
- (void)balancesForPaymentPassWithUniqueIdentifier:(NSString *)arg1 handler:(void (^)(NSSet *))arg2;
- (void)messagesForPaymentPassWithUniqueIdentifier:(NSString *)arg1 handler:(void (^)(NSSet *))arg2;
- (void)submitVerificationCode:(NSString *)arg1 verificationData:(NSData *)arg2 forDPANIdentifier:(NSString *)arg3 handler:(void (^)(BOOL, NSError *))arg4;
- (void)messagesAppLaunchTokenForPassWithUniqueIdentifier:(NSString *)arg1 handler:(void (^)(NSString *))arg2;
- (void)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(NSString *)arg1 handler:(void (^)(NSString *))arg2;
- (void)paymentDeviceFieldPropertiesWithHandler:(void (^)(PKFieldProperties *))arg1;
@end

