/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue;

@interface PLConcurrentQueue : NSObject

{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableArray *_internalQueue_pendingBlocks;
    long long _internalQueue_usedWidth;
    NSObject<OS_dispatch_queue> *_targetQueue;
    long long _width;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *targetQueue;
@property (nonatomic, readonly) long long width;

- (id)init;
- (void)dispatchAsync:(CDUnknownBlockType)arg1;
- (id)initWithTargetQueue:(id)arg1 width:(long long)arg2;
- (void)_internalQueue_tryDispatchingNextPendingBlock;

@end
