/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class KonaClip;

__attribute__((visibility("hidden")))
@interface CompositionItem : NSObject

{
    _Bool m_isFinalClip;
    _Bool m_isMuted;
    _Bool m_isFreezeFrame;
    CDStruct_e83c9415 m_sourceTimeRange;
    CDStruct_1b6d18a9 m_destinationDuration;
    CDStruct_1b6d18a9 m_leftTransitionExtension;
    CDStruct_1b6d18a9 m_rightTransitionExtension;
    CDStruct_1b6d18a9 m_audioStartOffset;
    CDStruct_1b6d18a9 m_audioEndOffset;
    float m_speed;
    KonaClip *_clip;
}

@property (retain, nonatomic) KonaClip *clip;
@property (nonatomic) _Bool isFinalClip;
@property (nonatomic) CDStruct_e83c9415 sourceTimeRange;
@property (nonatomic) CDStruct_1b6d18a9 destinationDuration;
@property (nonatomic) CDStruct_1b6d18a9 leftTransitionExtension;
@property (nonatomic) CDStruct_1b6d18a9 rightTransitionExtension;
@property (nonatomic) CDStruct_1b6d18a9 audioStartOffset;
@property (nonatomic) CDStruct_1b6d18a9 audioEndOffset;
@property (nonatomic, readonly) _Bool hasVideoContent;
@property (nonatomic, readonly) _Bool isMuted;
@property (nonatomic, readonly) _Bool isFreezeFrame;
@property (nonatomic) float speed;

+ (id)compositionItemWithClip:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)emptyTrackSegmentWithDestinationRange:(CDStruct_e83c9415)arg1;
- (id)audioTrackSegmentsWithDestinationTime:(CDStruct_1b6d18a9)arg1 paddedFromTime:(CDStruct_1b6d18a9)arg2;
- (id)audioTrackSegmentsLoopedForDestinationTimeRange:(CDStruct_e83c9415)arg1;
- (id)emptyTrackSegmentWithDestinationTime:(CDStruct_1b6d18a9)arg1;
- (id)videoTrackSegmentsWithDestinationRange:(CDStruct_e83c9415)arg1;
- (id)audioTrackSegmentsWithDestinationTime:(CDStruct_1b6d18a9)arg1;
- (id)initWithClip:(id)arg1;
- (id)emptyVideoTrackSegmentsWithDestinationRange:(CDStruct_e83c9415)arg1;
- (id)emptyAudioTrackSegmentsWithDestinationTime:(CDStruct_1b6d18a9)arg1;

@end
