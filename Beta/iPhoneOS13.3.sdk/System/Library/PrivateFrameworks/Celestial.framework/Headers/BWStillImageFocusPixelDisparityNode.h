/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class BWStillImageNodeConfiguration, FigFocusPixelDisparityGenerator, NSDictionary;

@interface BWStillImageFocusPixelDisparityNode : BWNode

{
    NSDictionary *_sensorIDDictionary;
    NSDictionary *_cameraInfoByPortType;
    BWStillImageNodeConfiguration *_nodeConfiguration;
    FigFocusPixelDisparityGenerator *_focusPixelDisparityGenerator;
    struct opaqueCMFormatDescription *_disparityFormatDescription;
    CDStruct_14d5dc5e _identityExtrinsicMatrix;
    _Bool _requiresRGBBasedPersonSegmentation;
    _Bool _depthIsAlwaysHighQuality;
}

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)processorOptionsDictionary;
- (id)initWithNodeConfiguration:(id)arg1 sensorIDDictionary:(id)arg2 cameraInfoByPortType:(id)arg3 disparityMapWidth:(unsigned long long)arg4 disparityMapHeight:(unsigned long long)arg5 depthIsAlwaysHighQuality:(_Bool)arg6;
- (int)_loadAndConfigureDisparityGenerator;
- (void)_processDisparityForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_removeConsumedAttachedMediaFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_attachDepthMetadataToSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;

@end
