/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLCommandQueueDescriptor.h>

@class NSObject;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MTLCommandQueueDescriptorInternal : MTLCommandQueueDescriptor

{
    unsigned long long _maxCommandBufferCount;
    unsigned long long _qosLevel;
    NSObject<OS_dispatch_queue> *_commitQueue;
    _Bool _commitSynchronously;
    NSObject<OS_dispatch_queue> *_completionQueue;
    _Bool _disableCrossQueueHazardTracking;
    _Bool _openGLQueue;
}

@property _Bool isOpenGLQueue;

- (id)init;
- (id)description;
- (void)setCompletionQueue:(id)arg1;
- (id)completionQueue;
- (unsigned long long)maxCommandBufferCount;
- (unsigned long long)qosLevel;
- (id)commitQueue;
- (_Bool)commitSynchronously;
- (_Bool)disableCrossQueueHazardTracking;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)setMaxCommandBufferCount:(unsigned long long)arg1;
- (void)setQosLevel:(unsigned long long)arg1;
- (void)setCommitQueue:(id)arg1;
- (void)setCommitSynchronously:(_Bool)arg1;
- (void)setDisableCrossQueueHazardTracking:(_Bool)arg1;

@end
