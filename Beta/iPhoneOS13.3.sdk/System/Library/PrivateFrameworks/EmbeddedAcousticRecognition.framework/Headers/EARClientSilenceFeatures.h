/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@interface EARClientSilenceFeatures : NSObject

{
    double _silenceFramesCountMs;
    double _silenceProbability;
    double _silenceDurationMs;
    double _silencePosterior;
    double _processedAudioMs;
}

@property (nonatomic) double silenceFramesCountMs;
@property (nonatomic) double silenceProbability;
@property (nonatomic) double silenceDurationMs;
@property (nonatomic) double silencePosterior;
@property (nonatomic) double processedAudioMs;

- (id)initWithSilenceFramesCountMs:(double)arg1 silenceProbability:(double)arg2 silenceDurationMs:(double)arg3 silencePosterior:(double)arg4 processedAudioMs:(double)arg5;

@end
