/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@class NSArray;

@interface _EAREndpointFeatures : NSObject

{
    float _silencePosteriorNF;
    float _serverFeaturesLatency;
    long long _wordCount;
    long long _trailingSilenceDuration;
    double _endOfSentenceLikelihood;
    NSArray *_pauseCounts;
    double _silencePosterior;
    double _clientSilenceFramesCountMs;
    double _clientSilenceProbability;
    long long _eagerResultEndTime;
}

@property (nonatomic) long long wordCount;
@property (nonatomic) long long trailingSilenceDuration;
@property (nonatomic) double endOfSentenceLikelihood;
@property (copy, nonatomic) NSArray *pauseCounts;
@property (nonatomic) double silencePosterior;
@property (nonatomic) double clientSilenceFramesCountMs;
@property (nonatomic) double clientSilenceProbability;
@property (nonatomic) float silencePosteriorNF;
@property (nonatomic) float serverFeaturesLatency;
@property (nonatomic) long long eagerResultEndTime;

- (id)description;
- (id)initWithWordCount:(long long)arg1 trailingSilenceDuration:(long long)arg2 endOfSentenceLikelihood:(double)arg3 pauseCounts:(id)arg4 silencePosterior:(double)arg5 clientSilenceFramesCountMs:(double)arg6 clientSilenceProbability:(double)arg7 silencePosteriorNF:(float)arg8 serverFeaturesLatency:(float)arg9 eagerResultEndTime:(long long)arg10;
- (id)initWithWordCount:(long long)arg1 trailingSilenceDuration:(long long)arg2 endOfSentenceLikelihood:(double)arg3 pauseCounts:(id)arg4 silencePosterior:(double)arg5 clientSilenceFramesCountMs:(double)arg6 clientSilenceProbability:(double)arg7 silencePosteriorNF:(float)arg8 serverFeaturesLatency:(float)arg9;

@end
