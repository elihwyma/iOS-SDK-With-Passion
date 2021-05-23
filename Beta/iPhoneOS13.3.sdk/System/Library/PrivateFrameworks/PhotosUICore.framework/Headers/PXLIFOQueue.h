/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue;

@interface PXLIFOQueue : NSObject

{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableArray *_internalQueue_pendingBlocks;
    NSObject<OS_dispatch_queue> *_targetQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *targetQueue;

- (void)dispatchAsync:(CDUnknownBlockType)arg1;
- (id)initWithTargetQueue:(id)arg1;
- (void)_executeNextPendingBlock;

@end
