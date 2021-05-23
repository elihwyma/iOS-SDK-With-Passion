/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWStillImageProcessorConfiguration.h>

@class BWInferenceScheduler, BWVideoFormat;

@interface BWUBInferenceControllerConfiguration : BWStillImageProcessorConfiguration

{
    BWVideoFormat *_inputFormat;
    unsigned int _figThreadPriority;
    _Bool _semanticRenderingEnabled;
    _Bool _redEyeReductionEnabled;
    BWInferenceScheduler *_inferenceScheduler;
}

@property (retain, nonatomic) BWVideoFormat *inputFormat;
@property (nonatomic) unsigned int figThreadPriority;
@property (nonatomic) _Bool semanticRenderingEnabled;
@property (nonatomic) _Bool redEyeReductionEnabled;
@property (retain, nonatomic) BWInferenceScheduler *inferenceScheduler;

- (void)dealloc;

@end
