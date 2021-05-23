/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <CameraEffectsKit/JTCompositionItem.h>

@class AVAsset;

@interface JTMovieCompositionItem : JTCompositionItem

{
    int _audioAssetOverwriteStartOffset;
    AVAsset *_asset;
    AVAsset *_audioAssetOverwrite;
}

@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) AVAsset *audioAssetOverwrite;
@property (nonatomic) int audioAssetOverwriteStartOffset;

- (id)initWithClip:(id)arg1 timeScale:(int)arg2;
- (id)speedRangesForSourceRange:(CDStruct_e83c9415)arg1 destinationRange:(CDStruct_e83c9415)arg2;
- (id)segmentWithCharacteristic:(id)arg1 sourceRange:(CDStruct_e83c9415)arg2 destinationRange:(CDStruct_e83c9415)arg3;
- (id)audioTrackSegmentsWithDestinationTime:(CDStruct_1b6d18a9)arg1 paddedFromTime:(CDStruct_1b6d18a9)arg2;
- (id)audioTrackSegmentsLoopedForDestinationTimeRange:(CDStruct_e83c9415)arg1;
- (CDStruct_e83c9415)applySpeed:(CDStruct_e83c9415)arg1;
- (_Bool)hasVideoContent;
- (_Bool)needAudioLoop;
- (id)videoTrackSegmentsWithDestinationRange:(CDStruct_e83c9415)arg1;
- (id)videoTrackSegmentsLoopedWithDestinationRange:(CDStruct_e83c9415)arg1;
- (id)audioTrackSegmentsWithDestinationTime:(CDStruct_1b6d18a9)arg1;
- (id)audioTrackSegmentsLoopedWithDestinationTime:(CDStruct_1b6d18a9)arg1;

@end
