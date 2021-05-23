/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <CoreDuet/_DKSyncOperation.h>

@class NSMutableArray;

@interface _DKSyncBlockOperation : _DKSyncOperation

{
    struct os_unfair_lock_s _lock;
    _Bool _asynchronous;
    NSMutableArray *_blocks;
}

@property (readonly) NSMutableArray *blocks;
@property (getter=isAsynchronous) _Bool asynchronous;

+ (id)blockOperationWithBlock:(CDUnknownBlockType)arg1;

- (id)init;
- (void)addExecutionBlock:(CDUnknownBlockType)arg1;
- (void)main;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)executionBlocks;

@end
