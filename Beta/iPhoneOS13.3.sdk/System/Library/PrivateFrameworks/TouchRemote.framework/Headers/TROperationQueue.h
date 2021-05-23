/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <Foundation/NSOperationQueue.h>

@class NSObject;

@protocol OS_dispatch_queue;

@interface TROperationQueue : NSOperationQueue

{
    _Bool _cancelled;
    NSObject<OS_dispatch_queue> *_cancellationQ;
}

@property (getter=isCancelled) _Bool cancelled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cancellationQ;

- (id)init;
- (void)invalidate;
- (void)addOperation:(id)arg1;
- (void)addOperationWithBlock:(CDUnknownBlockType)arg1;
- (void)addOperations:(id)arg1 waitUntilFinished:(_Bool)arg2;

@end
