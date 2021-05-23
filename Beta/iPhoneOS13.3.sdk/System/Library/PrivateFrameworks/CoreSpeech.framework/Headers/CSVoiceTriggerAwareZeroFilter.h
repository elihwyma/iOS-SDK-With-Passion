/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSAudioZeroFilter;

@protocol CSVoiceTriggerAwareZeroFilterDelegate;

@interface CSVoiceTriggerAwareZeroFilter : NSObject

{
    float _sampleRate;
    id <CSVoiceTriggerAwareZeroFilterDelegate> _delegate;
    unsigned long long _vtEndInSampleCount;
    unsigned long long _numSamplesProcessed;
    CSAudioZeroFilter *_zeroFilter;
}

@property (nonatomic) float sampleRate;
@property (nonatomic) unsigned long long vtEndInSampleCount;
@property (nonatomic) unsigned long long numSamplesProcessed;
@property (retain, nonatomic) CSAudioZeroFilter *zeroFilter;
@property (weak, nonatomic) id <CSVoiceTriggerAwareZeroFilterDelegate> delegate;

- (id)init;
- (id)metrics;
- (void)flush;
- (void)resetWithSampleRate:(float)arg1 containsVoiceTrigger:(_Bool)arg2 voiceTriggerInfo:(id)arg3;
- (void)processBuffer:(id)arg1 atTime:(unsigned long long)arg2;

@end
