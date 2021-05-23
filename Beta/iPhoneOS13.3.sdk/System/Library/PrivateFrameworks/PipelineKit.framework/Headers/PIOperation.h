/*
 Image: /System/Library/PrivateFrameworks/PipelineKit.framework/PipelineKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSError, NSMutableArray, NSString, PIGroup, PIPipeline;

@protocol OS_dispatch_group, OS_dispatch_source;

@interface PIOperation : NSObject

{
    NSObject<OS_dispatch_group> *_operationGroup;
    double _executionRateLimit;
    PIGroup *_group;
    NSString *_identifier;
    id _key;
    NSString *_information;
    id _context;
    long long _priority;
    long long _qualityOfService;
    long long _concurrencyLimit;
    unsigned long long _state;
    _Bool _cancelled;
    NSError *_error;
    float _progress;
    unsigned long long _waitingTimeout;
    unsigned long long _executionTimeout;
    unsigned long long _wallTimeout;
    NSObject<OS_dispatch_source> *_waitingTimeoutTimer;
    NSObject<OS_dispatch_source> *_executionTimeoutTimer;
    NSObject<OS_dispatch_source> *_wallTimeoutTimer;
    CDUnknownBlockType _executionBlock;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _cancellationBlock;
    CDUnknownBlockType _completionBlock;
    NSMutableArray *_dependencies;
    NSMutableArray *_subOperations;
    PIOperation *_mainOperation;
    PIPipeline *_subPipeline;
    double _timestampStart;
    double _timestampReady;
    double _timestampCancelling;
    double _timestampExecuting;
    double _timestampFinish;
    _Bool _needsToRetry;
    unsigned long long _retryCount;
}

@property unsigned long long state;
@property (getter=isCancelled) _Bool cancelled;
@property (weak, nonatomic) PIGroup *group;
@property (copy, nonatomic) NSString *information;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic) id key;
@property (retain, nonatomic) id context;
@property long long priority;
@property long long qualityOfService;
@property long long concurrencyLimit;
@property double executionRateLimit;
@property (copy, nonatomic) CDUnknownBlockType executionBlock;
@property (copy, nonatomic) CDUnknownBlockType progressBlock;
@property (copy, nonatomic) CDUnknownBlockType cancellationBlock;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (readonly, getter=isFinished) _Bool finished;
@property (retain) NSError *error;
@property float progress;
@property unsigned long long waitingTimeout;
@property unsigned long long executionTimeout;
@property unsigned long long wallTimeout;
@property _Bool needsToRetry;
@property (readonly) unsigned long long retryCount;
@property (copy, readonly) NSArray *dependencies;

+ (id)operation;
+ (id)_stringForState:(unsigned long long)arg1;
+ (id)_stringForQualityOfService:(long long)arg1;
+ (id)_stringForPriority:(long long)arg1;
+ (id)operationWithExecutionBlock:(CDUnknownBlockType)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (_Bool)isActive;
- (_Bool)shouldContinue;
- (id)performSynchronously;
- (void)_cleanup;
- (void)_cancel;
- (void)_prepare;
- (double)executionTime;
- (void)updateProgress;
- (void)_didFinish;
- (_Bool)hasSucceeded;
- (void)cancel:(CDUnknownBlockType)arg1;
- (id)subOperations;
- (id)mainOperation;
- (double)cancellationTime;
- (void)waitUntilFinishedUsingBlock:(CDUnknownBlockType)arg1;
- (id)performSynchronously:(_Bool)arg1 error:(id *)arg2;
- (id)performSubOperationSynchronously:(id)arg1 error:(id *)arg2;
- (double)wallTime;
- (long long)executionQualityOfService;
- (id)executingQueue;
- (id)subPipeline;
- (void)addDependencies:(id)arg1;
- (void)removeDependencies:(id)arg1;
- (double)waitingTime;
- (void)_willExecute;
- (void)_willRetry;
- (void)_willFinish;
- (void)_finishSynchronousOperation:(id)arg1;
- (void)_performOperationSynchronously;
- (void)performSubOperationsAsynchronously:(id)arg1 waitUntilFinishedUsingBlock:(CDUnknownBlockType)arg2;

@end
