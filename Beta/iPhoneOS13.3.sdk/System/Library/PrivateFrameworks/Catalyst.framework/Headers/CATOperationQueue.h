/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSOperationQueue.h>

@protocol CATOperationQueueDelegate;

@interface CATOperationQueue : NSOperationQueue

{
    id <CATOperationQueueDelegate> _delegate;
}

@property (weak, nonatomic) id <CATOperationQueueDelegate> delegate;

+ (id)currentQueue;
+ (id)mainQueue;
+ (id)backgroundQueue;

- (id)description;
- (void)addOperation:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addOperations:(id)arg1 waitUntilFinished:(_Bool)arg2;
- (void)setUnderlyingQueue:(id)arg1;
- (void)startObserving:(id)arg1;
- (void)stopObserving:(id)arg1;
- (void)delegateWillAddOperation:(id)arg1;
- (void)delegateOperationDidFinish:(id)arg1;

@end
