/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWStillImageProcessorConfiguration.h>

@class BWVideoFormat, FigWiredMemory, NSDictionary;

@protocol MTLBuffer;

@interface BWStillImageOverCaptureProcessorControllerConfiguration : BWStillImageProcessorConfiguration

{
    BWVideoFormat *_inputFormat;
    BWVideoFormat *_outputFormat;
    float _overCapturePercentage;
    CDStruct_79c71658 _overCaptureOutputDimensions;
    unsigned int _figThreadPriority;
    id <MTLBuffer> _overCaptureMetalBuffer;
    FigWiredMemory *_regwarpBuffer;
    float _overCaptureMultiplier;
    NSDictionary *_baseZoomFactorByPortType;
}

@property (nonatomic, readonly) float overCaptureMultiplier;
@property (nonatomic, readonly) NSDictionary *baseZoomFactorByPortType;
@property (retain, nonatomic) BWVideoFormat *inputFormat;
@property (retain, nonatomic) BWVideoFormat *outputFormat;
@property (nonatomic) float overCapturePercentage;
@property (nonatomic) unsigned int figThreadPriority;
@property (retain, nonatomic) id <MTLBuffer> overCaptureMetalBuffer;
@property (retain, nonatomic) FigWiredMemory *regwarpBuffer;

- (void)dealloc;
- (void)setSensorConfigurations:(id)arg1;

@end
