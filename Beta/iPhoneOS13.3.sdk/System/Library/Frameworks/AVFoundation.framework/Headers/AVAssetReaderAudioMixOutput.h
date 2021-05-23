/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAssetReaderOutput.h>

@class AVAssetReaderAudioMixOutputInternal, AVAudioMix, NSArray, NSDictionary, NSString;

@interface AVAssetReaderAudioMixOutput : AVAssetReaderOutput

{
    AVAssetReaderAudioMixOutputInternal *_audioMixOutputInternal;
}

@property (nonatomic, readonly) NSArray *audioTracks;
@property (nonatomic, readonly) NSDictionary *audioSettings;
@property (copy, nonatomic) AVAudioMix *audioMix;
@property (copy, nonatomic) NSString *audioTimePitchAlgorithm;

+ (id)assetReaderAudioMixOutputWithAudioTracks:(id)arg1 audioSettings:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)mediaType;
- (id)_asset;
- (_Bool)_enableTrackExtractionReturningError:(id *)arg1;
- (id)initWithAudioTracks:(id)arg1 audioSettings:(id)arg2;
- (void)_setAudioVolumeCurve:(id)arg1 forTrack:(id)arg2;
- (void)_setAudioTimePitchAlgorithm:(id)arg1 forTrack:(id)arg2;
- (void)_setAudioTapProcessor:(struct opaqueMTAudioProcessingTap *)arg1 forTrack:(id)arg2;
- (id)_audioVolumeCurveForTrack:(id)arg1;
- (id)_audioTimePitchAlgorithmForTrack:(id)arg1;
- (struct opaqueMTAudioProcessingTap *)_audioTapProcessorForTrack:(id)arg1;

@end
