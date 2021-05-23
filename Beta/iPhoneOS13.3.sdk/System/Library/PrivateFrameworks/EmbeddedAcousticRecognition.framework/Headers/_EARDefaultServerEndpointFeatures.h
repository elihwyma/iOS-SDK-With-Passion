/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@interface _EARDefaultServerEndpointFeatures : NSObject

{
    float _endOfSentenceLikelihood;
    float _silencePosterior;
    long long _wordCount;
    long long _trailingSilenceDuration;
}

@property (nonatomic) long long wordCount;
@property (nonatomic) long long trailingSilenceDuration;
@property (nonatomic) float endOfSentenceLikelihood;
@property (nonatomic) float silencePosterior;

- (id)initWithWordCount:(long long)arg1 trailingSilenceDuration:(long long)arg2 endOfSentenceLikelihood:(float)arg3 silencePosterior:(float)arg4;

@end
