/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVTrackReaderInspector.h>

__attribute__((visibility("hidden")))
@interface AVCompositionTrackReaderInspector : AVTrackReaderInspector

{
    struct OpaqueFigMutableComposition *_figMutableComposition;
}

@property (nonatomic, readonly, getter=_mutableComposition) struct OpaqueFigMutableComposition *mutableComposition;

- (void)dealloc;
- (id)segments;
- (_Bool)isPlayable;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;
- (_Bool)isDecodable;
- (int)playabilityValidationResult;
- (id)segmentForTrackTime:(CDStruct_1b6d18a9)arg1;
- (int)decodabilityValidationResult;

@end
