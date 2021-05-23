/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class NSDictionary;

@interface BWAudioConverterNode : BWNode

{
    NSDictionary *_settings;
    struct OpaqueFigSampleBufferProcessor *_audioCompressionSBP;
}

@property (nonatomic, readonly) NSDictionary *gaplessPlaybackInfo;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)settings;
- (void)setSettings:(id)arg1;
- (id)nodeType;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)_teardownAudioCompressionSBP;
- (int)_setupAudioCompressionSBPForInputFormat:(id)arg1;
- (void)_handleUpdatedRecordingSettings:(id)arg1;
- (void)acquireHardware;
- (void)relinquishHardware;

@end
