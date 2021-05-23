/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface VSInstrumentMetrics : NSObject

{
    _Bool _isWarmStart;
    _Bool _isServerTTS;
    _Bool _isServerStreamTTS;
    _Bool _isServerTimeout;
    _Bool _isServerTTSRacing;
    _Bool _canUseServerTTS;
    _Bool _isSpeechRequest;
    _Bool _isCacheHitFromDisk;
    _Bool _isCacheHitFromMemory;
    NSString *_utterance;
    NSString *_voiceAssetKey;
    NSString *_voiceResourceAssetKey;
    NSString *_audioOutputRoute;
    long long _requestCreatedTimestamp;
    long long _eagerRequestCreatedTimeStampDiffs;
    long long _synthesisBeginTimestamp;
    long long _synthesisEndTimestamp;
    long long _speechBeginTimestamp;
    long long _speechEndTimestamp;
    long long _audioStartTimestampDiffs;
    double _audioDuration;
    long long _promptCount;
    long long _errorCode;
    long long _sourceOfTTS;
    long long _synthesisToSpeechTimeGap;
    long long _waitForSynthesisToFinishTimeDelay;
}

@property (copy) NSString *utterance;
@property (copy) NSString *voiceAssetKey;
@property (copy) NSString *voiceResourceAssetKey;
@property (copy) NSString *audioOutputRoute;
@property long long requestCreatedTimestamp;
@property long long eagerRequestCreatedTimeStampDiffs;
@property long long synthesisBeginTimestamp;
@property long long synthesisEndTimestamp;
@property long long speechBeginTimestamp;
@property long long speechEndTimestamp;
@property long long audioStartTimestampDiffs;
@property double audioDuration;
@property _Bool isWarmStart;
@property _Bool isServerTTS;
@property _Bool isServerStreamTTS;
@property _Bool isServerTimeout;
@property _Bool isServerTTSRacing;
@property _Bool canUseServerTTS;
@property long long promptCount;
@property long long errorCode;
@property long long sourceOfTTS;
@property _Bool isSpeechRequest;
@property long long synthesisToSpeechTimeGap;
@property long long waitForSynthesisToFinishTimeDelay;
@property _Bool isCacheHitFromDisk;
@property _Bool isCacheHitFromMemory;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)timeToSpeakLatency;
- (id)dictionaryMetrics;
- (double)_clockFactor;
- (double)ttsSynthesisLatency;
- (double)audioQueueLatency;
- (double)eagerRequestTimeGap;
- (_Bool)isSynthesisCached;
- (double)synthesisToSpeechTime;
- (double)waitForSynthesisToFinishTime;
- (double)synthesisLatency;
- (double)ttsTotalLatency;

@end
