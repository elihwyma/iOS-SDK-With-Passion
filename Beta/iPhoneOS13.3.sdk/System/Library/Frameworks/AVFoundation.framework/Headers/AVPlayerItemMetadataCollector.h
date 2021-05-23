/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVPlayerItemMediaDataCollector.h>

@class AVPlayerItemMetadataCollectorInternal, NSObject;

@protocol AVPlayerItemMetadataCollectorPushDelegate, OS_dispatch_queue;

@interface AVPlayerItemMetadataCollector : AVPlayerItemMediaDataCollector

{
    AVPlayerItemMetadataCollectorInternal *_metadataCollectorInternal;
}

@property (weak, nonatomic, readonly) id <AVPlayerItemMetadataCollectorPushDelegate> delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;

- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (_Bool)_attachToPlayerItem:(id)arg1;
- (void)_detatchFromPlayerItem;
- (void)_updateTaggedRangeMetadataArray:(id)arg1;
- (id)initWithIdentifiers:(id)arg1 classifyingLabels:(id)arg2;
- (id)_getFilteredMetadataGroups:(id)arg1 fromIdentifiers:(id)arg2 andClassifyingLabels:(id)arg3 modifiedIndexesOut:(id *)arg4 newIndexesOut:(id *)arg5;
- (_Bool)_isAttachedToPlayerItem;

@end
