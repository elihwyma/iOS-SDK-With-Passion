/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class NSURL;

__attribute__((visibility("hidden")))
@interface RCTrimmedCompositionWaveformDataSource

{
    NSURL *_destinationWaveformURL;
}

@property (nonatomic, readonly) NSURL *destinationWaveformURL;

- (id)initWithSourceComposition:(id)arg1 destinationWaveformURL:(id)arg2;
- (_Bool)preferLoadingFragmentWaveforms;
- (id)generatedWaveformOutputURL;

@end
