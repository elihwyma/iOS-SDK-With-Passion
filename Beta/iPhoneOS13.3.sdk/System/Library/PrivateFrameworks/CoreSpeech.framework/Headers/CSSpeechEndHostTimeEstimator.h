/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@interface CSSpeechEndHostTimeEstimator : NSObject

{
    _Bool _endPointNotified;
    unsigned long long _numAudioSampleForwarded;
    unsigned long long _lastAudioChunkHostTime;
    double _trailingSilenceDurationAtEndpoint;
}

@property (nonatomic) unsigned long long numAudioSampleForwarded;
@property (nonatomic) unsigned long long lastAudioChunkHostTime;
@property (nonatomic) _Bool endPointNotified;
@property (nonatomic) double trailingSilenceDurationAtEndpoint;

- (id)init;
- (void)reset;
- (void)addNumSamples:(unsigned long long)arg1 hostTime:(unsigned long long)arg2;
- (void)notifyTrailingSilenceDurationAtEndpoint:(double)arg1;
- (unsigned long long)estimatedSpeechEndHostTime;

@end
