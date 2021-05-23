/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class FigSDOFRenderingTuningParameters, NSDictionary;

@interface BWStillImagePortraitMetadataNode : BWNode

{
    NSDictionary *_sensorIDDictionary;
    NSDictionary *_cameraInfoByPortType;
    FigSDOFRenderingTuningParameters *_sdofTuningParams;
}

+ (void)initialize;

- (void)dealloc;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (id)initWithSensorIDDictionary:(id)arg1 cameraInfoByPortType:(id)arg2;
- (int)_loadAndConfigureSDOFRenderering;
- (void)_attachPortraitLightingEffectMetadataToDepthMetadata:(id)arg1;

@end
