/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class JTClip;

@interface JTCompositionItem : NSObject

{
    _Bool _isFinalClip;
    _Bool _isMuted;
    _Bool _isFreezeFrame;
    _Bool _isWaitingForResource;
    float _speed;
    int _timeScale;
    JTClip *_clip;
    CDStruct_1b6d18a9 _destinationDuration;
    CDStruct_1b6d18a9 _audioStartOffset;
    CDStruct_1b6d18a9 _audioEndOffset;
    CDStruct_e83c9415 _sourceTimeRange;
}

@property (retain, nonatomic) JTClip *clip;
@property (nonatomic) _Bool isFinalClip;
@property (nonatomic) CDStruct_e83c9415 sourceTimeRange;
@property (nonatomic) CDStruct_1b6d18a9 destinationDuration;
@property (nonatomic) CDStruct_1b6d18a9 audioStartOffset;
@property (nonatomic) CDStruct_1b6d18a9 audioEndOffset;
@property (nonatomic, readonly) _Bool hasVideoContent;
@property (nonatomic, readonly) _Bool isMuted;
@property (nonatomic, readonly) _Bool isFreezeFrame;
@property (nonatomic) float speed;
@property (nonatomic, readonly) _Bool isWaitingForResource;
@property (nonatomic, readonly) _Bool needSilenceAtEnd;
@property (nonatomic, readonly) _Bool needAudioLoop;
@property (nonatomic) int timeScale;

+ (id)compositionItemWithClip:(id)arg1 timeScale:(int)arg2;
+ (id)silenceAsset;
+ (void)mediaserverdCrashed;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)initWithClip:(id)arg1 timeScale:(int)arg2;
- (id)emptyTrackSegmentWithDestinationRange:(CDStruct_e83c9415)arg1;
- (id)audioTrackSegmentsWithDestinationTime:(CDStruct_1b6d18a9)arg1 paddedFromTime:(CDStruct_1b6d18a9)arg2;
- (id)audioTrackSegmentsLoopedForDestinationTimeRange:(CDStruct_e83c9415)arg1;
- (id)emptyTrackSegmentWithDestinationTime:(CDStruct_1b6d18a9)arg1;
- (id)videoTrackSegmentsWithDestinationRange:(CDStruct_e83c9415)arg1;
- (id)videoTrackSegmentsLoopedWithDestinationRange:(CDStruct_e83c9415)arg1;
- (id)audioTrackSegmentsWithDestinationTime:(CDStruct_1b6d18a9)arg1;
- (id)audioTrackSegmentsLoopedWithDestinationTime:(CDStruct_1b6d18a9)arg1;
- (id)emptyVideoTrackSegmentsWithDestinationRange:(CDStruct_e83c9415)arg1;
- (id)emptyAudioTrackSegmentsWithDestinationTime:(CDStruct_1b6d18a9)arg1;

@end
