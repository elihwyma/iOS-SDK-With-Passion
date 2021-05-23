/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/MovieCompositionItem.h>

@class FlexAudioClip;

__attribute__((visibility("hidden")))
@interface FlexAudioCompositionItem : MovieCompositionItem

@property (retain, nonatomic) FlexAudioClip *clip;

- (id)audioTrackSegmentsLoopedForDestinationTimeRange:(CDStruct_e83c9415)arg1;
- (id)initWithClip:(id)arg1;
- (id)trackInfoDict;
- (id)segmentsForFMTrack:(id)arg1 andTimeRange:(CDStruct_e83c9415)arg2;
- (id)audioTrackSegmentsForDestinationTime:(CDStruct_1b6d18a9)arg1;

@end
