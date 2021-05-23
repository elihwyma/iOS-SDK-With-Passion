/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/Swift-Protocol.h>

@protocol CSEndpointAnalyzer <Swift>

@property (nonatomic) long long endpointStyle;
@property (nonatomic) double delay;
@property (nonatomic) double startWaitTime;
@property (nonatomic) double automaticEndpointingSuspensionEndTime;
@property (nonatomic) double minimumDurationForEndpointer;
@property (nonatomic, readonly) double lastEndOfVoiceActivityTime;
@property (nonatomic, readonly) double lastStartOfVoiceActivityTime;
@property (nonatomic) double bypassSamples;
@property (nonatomic) long long endpointMode;
@property (nonatomic) double interspeechWaitTime;
@property (nonatomic) double endWaitTime;
@property (nonatomic) _Bool saveSamplesSeenInReset;

- (unsigned short)reset;
- (unsigned short)preheat;

@end
