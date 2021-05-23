/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CSAudioZeroCounter : NSObject

{
    NSString *_methodToken;
    unsigned int _continuousZeroCounter;
    unsigned int _zeroCounterWinSz;
    unsigned int _numChannels;
    unsigned int _analyzeStep;
    float _sampleRate;
    _Bool _shouldDeinterleaveAudio;
}

- (id)initWithToken:(id)arg1 sampleRate:(float)arg2 numChannels:(unsigned int)arg3;
- (void)resetWithSampleRate:(float)arg1;
- (void)getZeroStatisticsFromBuffer:(id)arg1 entireSamples:(unsigned int)arg2;
- (void)stopReportZeroStatistics;

@end
