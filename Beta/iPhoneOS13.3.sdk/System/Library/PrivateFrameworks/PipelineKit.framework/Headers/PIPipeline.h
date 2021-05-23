/*
 Image: /System/Library/PrivateFrameworks/PipelineKit.framework/PipelineKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, PIGroup, PIStatisticsElapsedTime;

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface PIPipeline : NSObject

{
    NSObject<OS_dispatch_queue> *_schedulerQueue;
    NSObject<OS_dispatch_queue> *_asynchronousMethodsQueue;
    PIPipeline *_mainPipeline;
    NSString *_identifier;
    long long _concurrencyLimit;
    long long _qualityOfService;
    unsigned long long _schedulerType;
    _Bool _suspended;
    NSMutableSet *_groups;
    PIGroup *_mainGroup;
    PIGroup *_limitedGroup;
    PIGroup *_serialGroup;
    NSObject<OS_dispatch_queue> *_userInterfaceQueue;
    NSObject<OS_dispatch_queue> *_userInteractiveQueue;
    NSObject<OS_dispatch_queue> *_userInitiatedQueue;
    NSObject<OS_dispatch_queue> *_defaultQueue;
    NSObject<OS_dispatch_queue> *_utilityQueue;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSObject<OS_dispatch_group> *_operationsGroup;
    NSMutableArray *_operations;
    long long _executingConcurrency;
    NSMutableArray *_executingOperations;
    NSMutableDictionary *_operationsByPriority;
    NSMapTable *_operationsByIdentifier;
    NSMapTable *_operationsByKey;
    NSMapTable *_operationsRates;
    double _timestampStart;
    PIStatisticsElapsedTime *_executionTime;
}

@property (weak, nonatomic) PIPipeline *mainPipeline;
@property (copy, nonatomic, readonly) NSString *identifier;
@property long long concurrencyLimit;
@property long long qualityOfService;
@property unsigned long long schedulerType;
@property (getter=isSuspended) _Bool suspended;
@property (copy, readonly) NSArray *operations;
@property (copy, readonly) NSArray *executingOperations;
@property (readonly) unsigned long long operationsCount;
@property (readonly) unsigned long long executingOperationsCount;
@property (readonly) long long executingConcurrency;
@property (readonly) _Bool isExecuting;
@property (copy, readonly) NSSet *groups;

+ (id)pipeline;
+ (id)sharedPipeline;
+ (id)pipelineWithConcurrencyLimit:(long long)arg1 qualityOfService:(long long)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)addOperation:(id)arg1;
- (double)executionTime;
- (void)_removeOperation:(id)arg1;
- (void)_addOperation:(id)arg1;
- (void)addGroup:(id)arg1;
- (void)removeGroup:(id)arg1;
- (id)_queueForOperation:(id)arg1;
- (void)waitUntilFinishedUsingBlock:(CDUnknownBlockType)arg1;
- (double)wallTime;
- (id)operationWithIdentifier:(id)arg1;
- (void)_updateInternalGroups;
- (id)mainGroup;
- (id)limitedGroup;
- (id)serialGroup;
- (void)_rebuildOperationsByPriority;
- (void)_operation:(id)arg1 didChangePriority:(long long)arg2;
- (id)operationsWithKey:(id)arg1;
- (id)operationsWithPriority:(long long)arg1;
- (id)addOperationWithExecutionBlock:(CDUnknownBlockType)arg1;
- (void)reorderOperationsWithComparator:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updateOperationsWithBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)waitUntilFinished:(_Bool)arg1;
- (void)cancelAllOperations:(CDUnknownBlockType)arg1;
- (void)cancelOperations:(id)arg1 waitUntilFinishedBlock:(CDUnknownBlockType)arg2;
- (void)scheduleOperations;
- (void)_finishOperation:(id)arg1 result:(id)arg2;
- (void)_executeOperation:(id)arg1;
- (void)_scheduleOperations;
- (id)_firstValidOperationInArray:(id)arg1;
- (id)_nextValidOperation;

@end
