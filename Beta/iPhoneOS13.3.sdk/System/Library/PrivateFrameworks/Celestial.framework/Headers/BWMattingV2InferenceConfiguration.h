/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWInferenceConfiguration.h>

@class NSDictionary;

@protocol MTLCommandQueue;

@interface BWMattingV2InferenceConfiguration : BWInferenceConfiguration

{
    NSDictionary *_sensorConfigurationsByPortType;
    unsigned int _enabledMattes;
    int _tuningConfiguration;
    float _mainImageDownscalingFactor;
    _Bool _depthDataDeliveryEnabled;
    _Bool _submitWithoutSynchronization;
    id <MTLCommandQueue> _metalCommandQueue;
}

@property (retain, nonatomic) NSDictionary *sensorConfigurationsByPortType;
@property (nonatomic) unsigned int enabledMattes;
@property (nonatomic) int tuningConfiguration;
@property (nonatomic) float mainImageDownscalingFactor;
@property (nonatomic) _Bool depthDataDeliveryEnabled;
@property (nonatomic) _Bool submitWithoutSynchronization;
@property (nonatomic) id <MTLCommandQueue> metalCommandQueue;

- (void)dealloc;

@end
