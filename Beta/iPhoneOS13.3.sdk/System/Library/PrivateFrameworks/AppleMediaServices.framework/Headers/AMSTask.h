/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSPromise;

@protocol OS_dispatch_queue;

@interface AMSTask : NSObject

{
    _Bool _cancelled;
    long long _runMode;
    NSObject<OS_dispatch_queue> *_performTaskQueue;
    AMSPromise *_promise;
    NSObject<OS_dispatch_queue> *_promiseAccessQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *performTaskQueue;
@property (retain, nonatomic) AMSPromise *promise;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *promiseAccessQueue;
@property (nonatomic, readonly, getter=isCancelled) _Bool cancelled;
@property (nonatomic, readonly, getter=isFinished) _Bool finished;
@property (nonatomic, readonly, getter=isRunning) _Bool running;
@property (nonatomic) long long runMode;

+ (id)taskCacheAccessQueue;
+ (id)taskCache;

- (id)init;
- (_Bool)cancel;
- (id)performBinaryTaskWithBlock:(CDUnknownBlockType)arg1;
- (id)performTaskWithBlock:(CDUnknownBlockType)arg1;

@end
