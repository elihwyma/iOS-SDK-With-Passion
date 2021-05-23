/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSArray, NSCache, NSCalendar, NSDate, NSHashTable, NSMutableDictionary, NSMutableOrderedSet, NSString, PKAccount, PKPaymentDefaultDataProvider, PKPaymentPass;

@protocol OS_dispatch_queue;

@interface PKSpendingSummaryFetcher : NSObject

{
    PKPaymentPass *_paymentPass;
    NSString *_passUniqueID;
    PKAccount *_account;
    NSCache *_weeklySummaryItemsPerStartDate;
    NSCache *_monthlySummaryItemsPerStartDate;
    NSDate *_oldestTransactionDate;
    NSDate *_newestTransactionDate;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    PKPaymentDefaultDataProvider *_paymentDataProvider;
    NSCalendar *_currentCalendar;
    struct os_unfair_lock_s _observersLock;
    NSHashTable *_observers;
    struct os_unfair_lock_s _requestsLock;
    NSMutableOrderedSet *_pendingRequests;
    NSMutableDictionary *_blockPendingRequests;
    _Bool _processingRequest;
    NSArray *_statements;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)previousStartOfWeekFromDate:(id)arg1;
+ (id)nextStartOfWeekFromDate:(id)arg1;
+ (id)previousStartOfMonthFromDate:(id)arg1;
+ (id)summaryWithTransactions:(id)arg1 currency:(id)arg2 type:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 lastSummary:(id)arg6;
+ (id)_sortedTransactions:(id)arg1 ascending:(_Bool)arg2;
+ (id)_spendingCategoriesFromTransactions:(id)arg1 currencyCode:(id)arg2;
+ (id)_spendingMerchantsFromTransaction:(id)arg1 currencyCode:(id)arg2;

- (void)dealloc;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)_timeZoneChanged:(id)arg1;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)_accessObserversWithHandler:(CDUnknownBlockType)arg1;
- (void)statementsChangedForAccountIdentifier:(id)arg1;
- (void)_resetCurrentCalendar;
- (id)_cachedSpendingSummaryStartingWithDate:(id)arg1 type:(unsigned long long)arg2 withLastPeriodChange:(_Bool)arg3;
- (void)_processNextRequest;
- (void)_spendingSummaryStartingWithDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3 withLastPeriodChange:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithPaymentPass:(id)arg1 account:(id)arg2;
- (void)availableSummaries:(CDUnknownBlockType)arg1;
- (id)cachedSpendingSummaryStartingWithDate:(id)arg1 type:(unsigned long long)arg2;
- (void)spendingSummaryStartingWithDate:(id)arg1 type:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;

@end
