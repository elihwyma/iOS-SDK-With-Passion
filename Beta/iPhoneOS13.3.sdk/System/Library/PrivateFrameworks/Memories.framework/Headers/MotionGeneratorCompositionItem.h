/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/MovieCompositionItem.h>

__attribute__((visibility("hidden")))
@interface MotionGeneratorCompositionItem : MovieCompositionItem

- (id)audioTrackSegmentsLoopedForDestinationTimeRange:(CDStruct_e83c9415)arg1;
- (_Bool)hasVideoContent;
- (id)videoTrackSegmentsWithDestinationRange:(CDStruct_e83c9415)arg1;
- (id)audioTrackSegmentsWithDestinationTime:(CDStruct_1b6d18a9)arg1;
- (id)initWithClip:(id)arg1;

@end
