/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString, PKPaymentService;

@protocol OS_dispatch_queue;

@interface NPKPeerPaymentMessagesTransactionsManager : NSObject

{
    NSObject<OS_dispatch_queue> *_transactionsQueue;
    NSObject<OS_dispatch_queue> *_peerPaymentPassQueue;
    NSString *_peerPaymentPassUniqueID;
    PKPaymentService *_paymentService;
    NSMutableDictionary *_transactionDetails;
    NSMutableSet *_currentLookupIdentifiers;
}

@property (nonatomic, readonly) PKPaymentService *paymentService;
@property (nonatomic, readonly) NSMutableDictionary *transactionDetails;
@property (nonatomic, readonly) NSMutableSet *currentLookupIdentifiers;
@property (copy) NSString *peerPaymentPassUniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (id)_sharedPeerPaymentWebService;
- (id)initWithPeerPaymentPassUniqueID:(id)arg1;
- (id)initWithPeerPaymentPassUniqueID:(id)arg1 paymentService:(id)arg2;
- (void)_fetchAllPeerPaymentTransactionsWithPeerPaymentPassID:(id)arg1;
- (void)_passLibraryChanged:(id)arg1;
- (unsigned long long)_transactionQueue_statusOfPaymentTransactionWithServiceIdentifier:(id)arg1;
- (void)_transactionsQueue_setStatus:(unsigned long long)arg1 forPaymentTransactionWithServiceIdentifier:(id)arg2 notifyUpdate:(_Bool)arg3;
- (id)_transactionsQueue_transactionDetailsCreatedIfNecessaryForServiceIdentifier:(id)arg1;
- (void)_transactionsQueue_notifyStatusUpdateOfTransactionWithServiceIdentifier:(id)arg1;
- (unsigned long long)statusOfPaymentTransactionWithServiceIdentifier:(id)arg1;
- (id)availableActionsForPaymentTransactionWithServiceIdentifier:(id)arg1;
- (void)setStatus:(unsigned long long)arg1 forPaymentTransactionWithServiceIdentifier:(id)arg2;
- (id)peerPaymentTransactionWithServiceIdentifier:(id)arg1;
- (void)lookupTransactionActionsIfNeededWithServiceIdentifier:(id)arg1;

@end
