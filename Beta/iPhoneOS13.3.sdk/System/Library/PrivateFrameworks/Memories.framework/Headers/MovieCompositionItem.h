/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/CompositionItem.h>

@class AVAsset, AVURLAsset;

__attribute__((visibility("hidden")))
@interface MovieCompositionItem : CompositionItem

{
    AVAsset *m_asset;
    AVURLAsset *m_audioProxyAsset;
}

@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) AVURLAsset *audioProxyAsset;

- (id)audioAsset;
- (id)speedRangesForSourceRange:(CDStruct_e83c9415)arg1 destinationRange:(CDStruct_e83c9415)arg2;
- (id)segmentWithCharacteristic:(id)arg1 sourceRange:(CDStruct_e83c9415)arg2 destinationRange:(CDStruct_e83c9415)arg3;
- (id)audioTrackSegmentsWithDestinationTime:(CDStruct_1b6d18a9)arg1 paddedFromTime:(CDStruct_1b6d18a9)arg2;
- (id)audioTrackSegmentsLoopedForDestinationTimeRange:(CDStruct_e83c9415)arg1;
- (CDStruct_e83c9415)applySpeed:(CDStruct_e83c9415)arg1;
- (_Bool)hasVideoContent;
- (id)videoTrackSegmentsWithDestinationRange:(CDStruct_e83c9415)arg1;
- (id)audioTrackSegmentsWithDestinationTime:(CDStruct_1b6d18a9)arg1;
- (id)initWithClip:(id)arg1;

@end
