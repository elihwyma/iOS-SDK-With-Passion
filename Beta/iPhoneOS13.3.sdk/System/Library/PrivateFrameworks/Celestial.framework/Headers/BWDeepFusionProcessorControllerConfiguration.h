/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWStillImageProcessorConfiguration.h>

@class BWVideoFormat;

@interface BWDeepFusionProcessorControllerConfiguration : BWStillImageProcessorConfiguration

{
    BWVideoFormat *_outputFormat;
    _Bool _semanticRenderingEnabled;
}

@property (retain, nonatomic) BWVideoFormat *outputFormat;
@property (nonatomic) _Bool semanticRenderingEnabled;

- (void)dealloc;

@end
