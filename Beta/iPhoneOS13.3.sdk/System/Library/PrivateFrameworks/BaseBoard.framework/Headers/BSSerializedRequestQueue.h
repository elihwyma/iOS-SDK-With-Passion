/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface BSSerializedRequestQueue : NSObject

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    CDUnknownBlockType _conditionBlock;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;

- (void)dealloc;
- (void)_enqueueSerialConditionalRequest:(CDUnknownBlockType)arg1;
- (id)initWithSerialQueue:(id)arg1 workQueue:(id)arg2 executionCondition:(CDUnknownBlockType)arg3;
- (void)enqueueRequest:(CDUnknownBlockType)arg1;
- (void)enqueueAsyncRequest:(CDUnknownBlockType)arg1;

@end
