/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <CoreDuet/_DKSyncCompositeOperation.h>

@class NSMutableArray;

@interface _DKSyncBlockCompositeOperation : _DKSyncCompositeOperation

{
    struct os_unfair_lock_s _lock;
    NSMutableArray *_blocks;
}

@property (readonly) NSMutableArray *blocks;

+ (id)blockCompositeOperationWithBlock:(CDUnknownBlockType)arg1;
+ (id)blockCompositeOperationWithParent:(id)arg1 block:(CDUnknownBlockType)arg2;

- (void)addExecutionBlock:(CDUnknownBlockType)arg1;
- (void)main;
- (_Bool)isAsynchronous;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)executionBlocks;
- (id)initWithParent:(id)arg1 block:(CDUnknownBlockType)arg2;

@end
