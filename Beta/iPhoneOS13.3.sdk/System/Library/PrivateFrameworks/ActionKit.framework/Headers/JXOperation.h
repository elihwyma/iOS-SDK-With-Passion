/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSOperation.h>

@class NSObject;

@protocol OS_dispatch_queue;

@interface JXOperation : NSOperation

{
    _Bool _isExecuting;
    _Bool _isFinished;
    NSObject<OS_dispatch_queue> *_stateQueue;
}

@property _Bool isExecuting;
@property _Bool isFinished;
@property (retain) NSObject<OS_dispatch_queue> *stateQueue;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)start;
- (_Bool)isConcurrent;
- (void)finish;
- (void)willFinish;
- (void)startAndWaitUntilFinished;

@end
