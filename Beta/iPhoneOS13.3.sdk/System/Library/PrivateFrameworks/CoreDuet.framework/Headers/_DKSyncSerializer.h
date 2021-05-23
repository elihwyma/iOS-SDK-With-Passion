/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSOperation, NSOperationQueue;

@protocol OS_dispatch_queue;

@interface _DKSyncSerializer : NSObject

{
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_underlyingQueue;
    NSOperation *_previousOperation;
}

@property (readonly) NSOperationQueue *operationQueue;
@property (readonly) NSObject<OS_dispatch_queue> *underlyingQueue;
@property (weak) NSOperation *previousOperation;

+ (id)sharedInstance;
+ (void)addOperation:(id)arg1;
+ (id)operationQueue;
+ (void)addOperationWithBlock:(CDUnknownBlockType)arg1;
+ (void)addOperations:(id)arg1 waitUntilFinished:(_Bool)arg2;
+ (id)underlyingQueue;
+ (void)performAsyncBlock:(CDUnknownBlockType)arg1;
+ (void)performSyncBlock:(CDUnknownBlockType)arg1;
+ (void)performAfter:(double)arg1 block:(CDUnknownBlockType)arg2;
+ (void)addDependentOperation:(id)arg1;
+ (void)addDependentOperationWithBlock:(CDUnknownBlockType)arg1;

- (id)init;
- (id)description;
- (id)debugDescription;
- (void)addOperation:(id)arg1;
- (void)addOperationWithBlock:(CDUnknownBlockType)arg1;
- (void)addOperations:(id)arg1 waitUntilFinished:(_Bool)arg2;
- (void)performAsyncBlock:(CDUnknownBlockType)arg1;
- (void)performSyncBlock:(CDUnknownBlockType)arg1;
- (void)performAfter:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)addDependentOperation:(id)arg1;
- (void)addDependentOperationWithBlock:(CDUnknownBlockType)arg1;

@end
