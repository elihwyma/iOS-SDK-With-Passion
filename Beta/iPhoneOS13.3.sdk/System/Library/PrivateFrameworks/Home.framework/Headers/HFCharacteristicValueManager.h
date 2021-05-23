/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFCharacteristicReadLogger, HFCharacteristicValueTransaction, NACancelationToken, NAFuture, NSMutableArray, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSSet, NSString;

@protocol HFCharacteristicOperationContextProviding, HFCharacteristicValueReader, HFCharacteristicValueWriter;

@interface HFCharacteristicValueManager : NSObject

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

@property (retain, nonatomic) id <HFCharacteristicValueReader> valueReader;
@property (retain, nonatomic) id <HFCharacteristicValueWriter> valueWriter;
@property (nonatomic) long long _debug_totalNumberOfIssuedBatchReadRequests;
@property (retain, nonatomic) HFCharacteristicValueTransaction *openTransaction;
@property (retain, nonatomic) NSMutableArray *runningTransactions;
@property (retain, nonatomic) NSMutableArray *readTransactionsToExecuteOnNextRunLoop;
@property (retain, nonatomic) NSMutableArray *completionHandlersForReadTransactionsToExecuteOnNextRunLoop;
@property (retain, nonatomic) NSRecursiveLock *transactionLock;
@property (retain, nonatomic) NSMutableSet *mutableAllReadCharacteristics;
@property (retain, nonatomic) NSMutableSet *characteristicsWithCachedValues;
@property (retain, nonatomic) NSMutableDictionary *cachedReadErrorsKeyedByCharacteristicIdentifier;
@property (retain, nonatomic) NSMutableDictionary *cachedWriteErrorsKeyedByCharacteristicIdentifier;
@property (retain, nonatomic) NSMutableDictionary *cachedExecutionErrorsKeyedByActionSetIdentifier;
@property (retain, nonatomic) NACancelationToken *inFlightReadCancelationToken;
@property (retain, nonatomic) HFCharacteristicReadLogger *readsCompleteLogger;
@property (nonatomic, readonly) NAFuture *firstReadCompleteFuture;
@property (copy, nonatomic, readonly) NSSet *allReadCharacteristics;
@property (copy, nonatomic, readonly) NSSet *characteristicsWithPendingReads;
@property (copy, nonatomic, readonly) NSSet *characteristicsWithPendingWrites;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <HFCharacteristicOperationContextProviding> contextProvider;

+ (id)na_identity;
+ (_Bool)_shouldTrackReadsCompleteForPerformanceTesting;

- (_Bool)isEqual:(id)arg1;
- (id)readValueForCharacteristic:(id)arg1;
- (void)executeActionSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)readValuesForCharacteristics:(id)arg1;
- (id)writeValuesForCharacteristics:(id)arg1;
- (void)beginTransactionWithReason:(id)arg1 readPolicy:(id)arg2 logger:(id)arg3;
- (void)commitTransactionWithReason:(id)arg1;
- (id)_transactionLock_characteristicsWithPendingWritesInTransacton:(id)arg1 includeDirectWrites:(_Bool)arg2 includeActionSets:(_Bool)arg3 includeActions:(_Bool)arg4;
- (id)cachedValueForCharacteristic:(id)arg1;
- (id)cachedReadErrorForCharacteristic:(id)arg1;
- (void)beginTransactionWithReason:(id)arg1;
- (id)executeActionSet:(id)arg1;
- (void)_transactionLock_executeWriteTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_transactionLock_executeActionSetTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_transactionLock_executeActionsTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_transactionLock_executeReadTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_beginReadsCompleteTrackingForCharacteristics:(id)arg1 withLogger:(id)arg2;
- (void)_endReadsCompleteTrackingForCharacteristic:(id)arg1 withLogger:(id)arg2 didRead:(_Bool)arg3;
- (id)readValuesForCharacteristicsPassingTest:(CDUnknownBlockType)arg1 inServices:(id)arg2;
- (id)writeValue:(id)arg1 forCharacteristic:(id)arg2;
- (id)readValuesForCharacteristicTypes:(id)arg1 inServices:(id)arg2;
- (id)cachedErrorForExecutionOfActionSet:(id)arg1;
- (id)cachedErrorForWriteToCharacteristic:(id)arg1;
- (id)initWithValueReader:(id)arg1 valueWriter:(id)arg2;
- (unsigned long long)loadingStateForCharacteristics:(id)arg1 actionSets:(id)arg2;
- (id)executeActions:(id)arg1;
- (id)_openTransactionCompletionFuture;
- (_Bool)hasCachedReadErrorForAccessory:(id)arg1 passingTest:(CDUnknownBlockType)arg2;
- (void)invalidateCachedValueForCharacteristic:(id)arg1;
- (void)invalidateCachedValuesForAccessory:(id)arg1;
- (void)invalidateCachedErrorForExecutionOfActionSet:(id)arg1;
- (void)invalidateAllCachedErrors;
- (void)cancelInFlightReadRequests;

@end
