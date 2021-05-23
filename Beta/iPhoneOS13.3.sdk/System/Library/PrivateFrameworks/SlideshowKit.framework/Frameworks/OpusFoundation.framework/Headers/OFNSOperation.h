/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <NSOperation.h>

@class NSCondition, NSError, NSMutableArray, NSObject, NSString;

@protocol OFNSOperationDelegate, OS_dispatch_source;

@interface OFNSOperation : NSOperation

{
    _Bool _canBeCancelled;
    _Bool _isExecuting;
    _Bool _isFinishing;
    _Bool _isFinished;
    float _progress;
    id _userData;
    NSError *_error;
    NSString *_identifier;
    void *_context;
    double _startTime;
    CDUnknownBlockType _executionBlock;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _finishBlock;
    id <OFNSOperationDelegate> _finishDelegate;
    NSCondition *_finishingCondition;
    _Bool _isFinishingCondition;
    NSMutableArray *_subOperations;
    OFNSOperation *_mainOperation;
    NSObject<OS_dispatch_source> *_cancelTimer;
    _Bool _needsToRetry;
    unsigned long long _retryCount;
}

@property _Bool isExecuting;
@property _Bool isFinishing;
@property _Bool isFinished;
@property (copy) CDUnknownBlockType executionBlock;
@property (retain) NSMutableArray *subOperations;
@property OFNSOperation *mainOperation;
@property _Bool canBeCancelled;
@property float progress;
@property (retain) id userData;
@property (copy) NSError *error;
@property (copy) NSString *identifier;
@property (nonatomic) void *context;
@property (nonatomic) id <OFNSOperationDelegate> finishDelegate;
@property (copy) CDUnknownBlockType cancelBlock;
@property (copy) CDUnknownBlockType finishBlock;
@property (copy) CDUnknownBlockType progressBlock;
@property _Bool needsToRetry;
@property (readonly) unsigned long long retryCount;

+ (id)blockOperationWithExecutionBlock:(CDUnknownBlockType)arg1 finishBlock:(CDUnknownBlockType)arg2 andFinishDelegate:(id)arg3;
+ (id)operationWithFinishBlock:(CDUnknownBlockType)arg1 andFinishDelegate:(id)arg2;
+ (id)blockOperationWithExecutionBlock:(CDUnknownBlockType)arg1;
+ (id)nullOperationWithFinishBlock:(CDUnknownBlockType)arg1 andFinishDelegate:(id)arg2;
+ (id)operationWithBlock:(CDUnknownBlockType)arg1 progressBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (_Bool)shouldContinue;
- (void)start;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)isConcurrent;
- (void)finish;
- (id)operationDescription;
- (_Bool)performSynchronously;
- (void)cancelOperation;
- (double)elapsedTime;
- (_Bool)_finish:(_Bool)arg1;
- (_Bool)hasSucceeded;
- (void)performAsynchronously:(id)arg1;
- (unsigned long long)launchOperation;
- (void)_launchOperation;
- (void)finishOperation;
- (void)cleanupOperation;
- (void)_updateProgressBlock;
- (_Bool)performSynchronously:(CDUnknownBlockType)arg1 timeout:(unsigned long long)arg2;
- (void)performAsynchronously:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 timeout:(unsigned long long)arg3;
- (_Bool)performSubOperationSynchronously:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 timeout:(unsigned long long)arg3;
- (_Bool)performSynchronously:(CDUnknownBlockType)arg1;
- (void)performAsynchronously:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;

@end
