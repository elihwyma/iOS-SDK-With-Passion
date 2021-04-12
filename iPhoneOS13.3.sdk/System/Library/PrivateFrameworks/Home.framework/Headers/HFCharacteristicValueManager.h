//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFCharacteristicValueSource-Protocol.h>

@class HFCharacteristicReadLogger, HFCharacteristicValueTransaction, NACancelationToken, NAFuture, NSMutableArray, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSSet;
@protocol HFCharacteristicOperationContextProviding, HFCharacteristicValueReader, HFCharacteristicValueWriter;

@interface HFCharacteristicValueManager : NSObject <HFCharacteristicValueSource>
{
    id <HFCharacteristicValueReader> _valueReader;
    id <HFCharacteristicValueWriter> _valueWriter;
    long long __debug_totalNumberOfIssuedBatchReadRequests;
    HFCharacteristicValueTransaction *_openTransaction;
    NSMutableArray *_runningTransactions;
    NSMutableArray *_readTransactionsToExecuteOnNextRunLoop;
    NSMutableArray *_completionHandlersForReadTransactionsToExecuteOnNextRunLoop;
    NSRecursiveLock *_transactionLock;
    NSMutableSet *_mutableAllReadCharacteristics;
    NSMutableSet *_characteristicsWithCachedValues;
    NSMutableDictionary *_cachedReadErrorsKeyedByCharacteristicIdentifier;
    NSMutableDictionary *_cachedWriteErrorsKeyedByCharacteristicIdentifier;
    NSMutableDictionary *_cachedExecutionErrorsKeyedByActionSetIdentifier;
    NACancelationToken *_inFlightReadCancelationToken;
    HFCharacteristicReadLogger *_readsCompleteLogger;
    NAFuture *_firstReadCompleteFuture;
}

+ (id)na_identity;
+ (BOOL)_shouldTrackReadsCompleteForPerformanceTesting;
@property(readonly, nonatomic) NAFuture *firstReadCompleteFuture; // @synthesize firstReadCompleteFuture=_firstReadCompleteFuture;
@property(retain, nonatomic) HFCharacteristicReadLogger *readsCompleteLogger; // @synthesize readsCompleteLogger=_readsCompleteLogger;
@property(retain, nonatomic) NACancelationToken *inFlightReadCancelationToken; // @synthesize inFlightReadCancelationToken=_inFlightReadCancelationToken;
@property(retain, nonatomic) NSMutableDictionary *cachedExecutionErrorsKeyedByActionSetIdentifier; // @synthesize cachedExecutionErrorsKeyedByActionSetIdentifier=_cachedExecutionErrorsKeyedByActionSetIdentifier;
@property(retain, nonatomic) NSMutableDictionary *cachedWriteErrorsKeyedByCharacteristicIdentifier; // @synthesize cachedWriteErrorsKeyedByCharacteristicIdentifier=_cachedWriteErrorsKeyedByCharacteristicIdentifier;
@property(retain, nonatomic) NSMutableDictionary *cachedReadErrorsKeyedByCharacteristicIdentifier; // @synthesize cachedReadErrorsKeyedByCharacteristicIdentifier=_cachedReadErrorsKeyedByCharacteristicIdentifier;
@property(retain, nonatomic) NSMutableSet *characteristicsWithCachedValues; // @synthesize characteristicsWithCachedValues=_characteristicsWithCachedValues;
@property(retain, nonatomic) NSMutableSet *mutableAllReadCharacteristics; // @synthesize mutableAllReadCharacteristics=_mutableAllReadCharacteristics;
@property(retain, nonatomic) NSRecursiveLock *transactionLock; // @synthesize transactionLock=_transactionLock;
@property(retain, nonatomic) NSMutableArray *completionHandlersForReadTransactionsToExecuteOnNextRunLoop; // @synthesize completionHandlersForReadTransactionsToExecuteOnNextRunLoop=_completionHandlersForReadTransactionsToExecuteOnNextRunLoop;
@property(retain, nonatomic) NSMutableArray *readTransactionsToExecuteOnNextRunLoop; // @synthesize readTransactionsToExecuteOnNextRunLoop=_readTransactionsToExecuteOnNextRunLoop;
@property(retain, nonatomic) NSMutableArray *runningTransactions; // @synthesize runningTransactions=_runningTransactions;
@property(retain, nonatomic) HFCharacteristicValueTransaction *openTransaction; // @synthesize openTransaction=_openTransaction;
@property(nonatomic) long long _debug_totalNumberOfIssuedBatchReadRequests; // @synthesize _debug_totalNumberOfIssuedBatchReadRequests=__debug_totalNumberOfIssuedBatchReadRequests;
@property(retain, nonatomic) id <HFCharacteristicValueWriter> valueWriter; // @synthesize valueWriter=_valueWriter;
@property(retain, nonatomic) id <HFCharacteristicValueReader> valueReader; // @synthesize valueReader=_valueReader;
// - (void).cxx_destruct;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) id <HFCharacteristicOperationContextProviding> contextProvider;
- (id)writeValuesForCharacteristics:(id)arg1;
- (id)readValuesForCharacteristicsPassingTest:(id /* CDUnknownBlockType */)arg1 inServices:(id)arg2;
- (id)readValuesForCharacteristicTypes:(id)arg1 inServices:(id)arg2;
- (id)readValuesForCharacteristics:(id)arg1;
- (void)_endReadsCompleteTrackingForCharacteristic:(id)arg1 withLogger:(id)arg2 didRead:(BOOL)arg3;
- (void)_beginReadsCompleteTrackingForCharacteristics:(id)arg1 withLogger:(id)arg2;
- (void)cancelInFlightReadRequests;
- (void)invalidateAllCachedErrors;
- (void)invalidateCachedErrorForExecutionOfActionSet:(id)arg1;
- (id)cachedErrorForExecutionOfActionSet:(id)arg1;
- (id)cachedErrorForWriteToCharacteristic:(id)arg1;
- (void)invalidateCachedValuesForAccessory:(id)arg1;
- (void)invalidateCachedValueForCharacteristic:(id)arg1;
- (BOOL)hasCachedReadErrorForAccessory:(id)arg1 passingTest:(id /* CDUnknownBlockType */)arg2;
- (id)cachedReadErrorForCharacteristic:(id)arg1;
- (id)cachedValueForCharacteristic:(id)arg1;
- (void)_transactionLock_executeActionsTransaction:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_transactionLock_executeActionSetTransaction:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_transactionLock_executeReadTransaction:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_transactionLock_executeWriteTransaction:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)_openTransactionCompletionFuture;
- (void)commitTransactionWithReason:(id)arg1;
- (id)executeActions:(id)arg1;
- (id)executeActionSet:(id)arg1;
- (void)executeActionSet:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)writeValue:(id)arg1 forCharacteristic:(id)arg2;
- (id)readValueForCharacteristic:(id)arg1;
- (void)beginTransactionWithReason:(id)arg1 readPolicy:(id)arg2 logger:(id)arg3;
- (void)beginTransactionWithReason:(id)arg1;
- (id)_transactionLock_characteristicsWithPendingWritesInTransacton:(id)arg1 includeDirectWrites:(BOOL)arg2 includeActionSets:(BOOL)arg3 includeActions:(BOOL)arg4;
- (NSUInteger)loadingStateForCharacteristics:(id)arg1 actionSets:(id)arg2;
@property(readonly, copy, nonatomic) NSSet *characteristicsWithPendingWrites;
@property(readonly, copy, nonatomic) NSSet *characteristicsWithPendingReads;
@property(readonly, copy, nonatomic) NSSet *allReadCharacteristics;
- (id)initWithValueReader:(id)arg1 valueWriter:(id)arg2;

@end

