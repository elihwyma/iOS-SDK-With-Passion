/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class SSPromise;

@protocol OS_dispatch_queue;

@interface SSUniqueExecutionQueue : NSObject

{
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_callBlockQueue;
    NSObject<OS_dispatch_queue> *_executeBlockQueue;
    SSPromise *_promise;
    NSObject<OS_dispatch_queue> *_promiseAccessQueue;
}

@property (copy, nonatomic) CDUnknownBlockType block;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callBlockQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executeBlockQueue;
@property (retain, nonatomic) SSPromise *promise;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *promiseAccessQueue;

- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;

@end
