/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CSServerEndpointFeatures : NSObject

{
    long long _wordCount;
    long long _trailingSilenceDuration;
    double _eosLikelihood;
    NSArray *_pauseCounts;
    double _silencePosterior;
    long long _processedAudioDurationInMilliseconds;
    NSString *_taskName;
}

@property (nonatomic) long long wordCount;
@property (nonatomic) long long trailingSilenceDuration;
@property (nonatomic) double eosLikelihood;
@property (copy, nonatomic) NSArray *pauseCounts;
@property (nonatomic) double silencePosterior;
@property (nonatomic) long long processedAudioDurationInMilliseconds;
@property (copy, nonatomic) NSString *taskName;

- (id)description;
- (id)initWithWordCount:(long long)arg1 trailingSilenceDuration:(long long)arg2 eosLikelihood:(double)arg3 pauseCounts:(id)arg4 silencePosterior:(double)arg5 taskName:(id)arg6 processedAudioDurationInMilliseconds:(long long)arg7;
- (id)initWithWordCount:(long long)arg1 trailingSilenceFrames:(long long)arg2 endOfSilenceLikelihood:(double)arg3 pauseCounts:(id)arg4 silencePosterior:(double)arg5 taskName:(id)arg6;

@end
