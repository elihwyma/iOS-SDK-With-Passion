/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class BWLimitedGMErrorLogger, FigVideoDefringingProcessor, NSString;

@interface BWVideoDefringingNode : BWNode

{
    _Bool _isSlomo;
    _Bool _propagateSynchronizedSlaveFrame;
    NSString *_sensorIDString;
    NSString *_portType;
    struct opaqueCMFormatDescription *_outputFormatDescription;
    NSString *_cameraToDefringe;
    FigVideoDefringingProcessor *_videoDefringingProcessor;
    BWLimitedGMErrorLogger *_limitedGMErrorLogger;
}

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (id)_processorOptions;
- (id)initWithSensorIDString:(id)arg1 portType:(id)arg2 propagateSynchronizedSlaveFrame:(_Bool)arg3 isSlomo:(_Bool)arg4;
- (int)_loadAndConfigureVideoDefringingBundle;

@end
