/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@interface BWDepthRotatorNode : BWNode

{
    struct opaqueCMFormatDescription *_outputDepthFormatDescription;
    struct opaqueCMFormatDescription *_outputDYFormatDescription;
    unsigned int _inputDepthFormat;
    CDStruct_79c71658 _inputDepthDimensions;
    int _rotationDegrees;
    long long _bufferSerialNumber;
    _Bool _separateDepthComponentsEnabled;
    _Bool _depthProvidedAsAttachedMedia;
}

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (void)_setupDepthMediaConfigurationForOutput:(id)arg1 attachedMediaKey:(id)arg2;
- (void)_updateDepthOutputFormatRequirementsForInputFormat:(id)arg1 pixelFormat:(unsigned int)arg2 attachedMediaKey:(id)arg3;
- (id)initWithRotationDegrees:(int)arg1 separateDepthComponentsEnabled:(_Bool)arg2 depthProvidedAsAttachedMedia:(_Bool)arg3;

@end
