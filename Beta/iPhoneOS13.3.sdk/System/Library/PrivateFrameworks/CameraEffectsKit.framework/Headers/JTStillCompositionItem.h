/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <CameraEffectsKit/JTMovieCompositionItem.h>

@interface JTStillCompositionItem : JTMovieCompositionItem

- (id)initWithClip:(id)arg1 timeScale:(int)arg2;
- (id)audioTrackSegmentsWithDestinationTime:(CDStruct_1b6d18a9)arg1 paddedFromTime:(CDStruct_1b6d18a9)arg2;
- (id)audioTrackSegmentsLoopedForDestinationTimeRange:(CDStruct_e83c9415)arg1;
- (_Bool)hasVideoContent;
- (id)videoTrackSegmentsWithDestinationRange:(CDStruct_e83c9415)arg1;
- (id)audioTrackSegmentsWithDestinationTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)needSilenceAtEnd;

@end
