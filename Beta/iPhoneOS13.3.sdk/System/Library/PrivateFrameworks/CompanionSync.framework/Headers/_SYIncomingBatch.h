/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class SYBatchSyncChunk;

__attribute__((visibility("hidden")))
@interface _SYIncomingBatch : NSObject

{
    SYBatchSyncChunk *_batch;
    CDUnknownBlockType _completion;
}

@property (retain, nonatomic) SYBatchSyncChunk *batch;
@property (copy, nonatomic) CDUnknownBlockType completion;

@end
