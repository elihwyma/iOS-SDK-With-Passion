/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSAudioSampleRateConverter, CSAudioZeroCounter, CSBeepCanceller, CSVoiceTriggerAwareZeroFilter, NSString;

@protocol CSAudioPreprocessorDelegate;

@interface CSAudioPreprocessor : NSObject

{
    float _sampleRate;
    id <CSAudioPreprocessorDelegate> _delegate;
    CSAudioSampleRateConverter *_upsampler;
    CSVoiceTriggerAwareZeroFilter *_zeroFilter;
    CSBeepCanceller *_beepCanceller;
    CSAudioZeroCounter *_zeroCounter;
}

@property (nonatomic) float sampleRate;
@property (retain, nonatomic) CSAudioSampleRateConverter *upsampler;
@property (retain, nonatomic) CSVoiceTriggerAwareZeroFilter *zeroFilter;
@property (retain, nonatomic) CSBeepCanceller *beepCanceller;
@property (retain, nonatomic) CSAudioZeroCounter *zeroCounter;
@property (weak, nonatomic) id <CSAudioPreprocessorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)flush;
- (id)initWithSampleRate:(float)arg1;
- (void)resetWithSampleRate:(float)arg1 containsVoiceTrigger:(_Bool)arg2 voiceTriggerInfo:(id)arg3;
- (_Bool)_isNarrowBand:(float)arg1;
- (void)processBuffer:(id)arg1 atTime:(unsigned long long)arg2;
- (void)_reportMetrics;
- (void)willBeep;
- (void)zeroFilter:(id)arg1 zeroFilteredBufferAvailable:(id)arg2 atHostTime:(unsigned long long)arg3;
- (void)beepCancellerDidCancelSamples:(id)arg1 buffer:(id)arg2 timestamp:(unsigned long long)arg3;

@end
