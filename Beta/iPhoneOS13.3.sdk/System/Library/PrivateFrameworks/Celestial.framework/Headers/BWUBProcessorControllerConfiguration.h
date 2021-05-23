/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWStillImageProcessorConfiguration.h>

@class BWVideoFormat, FigStillImageSharedProcessingResources;

@interface BWUBProcessorControllerConfiguration : BWStillImageProcessorConfiguration

{
    BWVideoFormat *_outputFormat;
    _Bool _fusionEnabled;
    _Bool _lowLightFusionEnabled;
    _Bool _deepFusionEnabled;
    _Bool _depthDataDeliveryEnabled;
    _Bool _alwaysAllowModifyingInputBuffers;
    unsigned int _figThreadPriority;
    _Bool _semanticRenderingEnabled;
    FigStillImageSharedProcessingResources *_sharedResources;
}

@property (retain, nonatomic) BWVideoFormat *outputFormat;
@property (nonatomic) _Bool fusionEnabled;
@property (nonatomic) _Bool lowLightFusionEnabled;
@property (nonatomic) _Bool deepFusionEnabled;
@property (nonatomic) _Bool depthDataDeliveryEnabled;
@property (nonatomic) _Bool alwaysAllowModifyingInputBuffers;
@property (nonatomic) unsigned int figThreadPriority;
@property (nonatomic) _Bool semanticRenderingEnabled;
@property (retain, nonatomic) FigStillImageSharedProcessingResources *sharedResources;

- (void)dealloc;

@end
