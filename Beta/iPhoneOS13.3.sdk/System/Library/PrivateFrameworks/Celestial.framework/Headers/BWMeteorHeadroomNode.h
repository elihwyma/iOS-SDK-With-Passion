/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class NSDictionary, NSString;

@interface BWMeteorHeadroomNode : BWNode

{
    NSString *_lastCaptureRequestIdentifier;
    float _lastMeteorHeadroom;
    NSDictionary *_meteorHeadroomParametersByPortType;
}

+ (void)initialize;

- (void)dealloc;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)initWithSensorConfigurationsByPortType:(id)arg1;

@end
