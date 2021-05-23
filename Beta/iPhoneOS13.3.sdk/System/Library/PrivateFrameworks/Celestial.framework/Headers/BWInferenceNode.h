/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

#import <Celestial/Swift-Protocol.h>

@class BWFigVideoCaptureDevice, BWInferenceEngine, NSString;

@interface BWInferenceNode : BWNode <Swift>

{
    BWInferenceEngine *_inferenceEngine;
    BWFigVideoCaptureDevice *_captureDevice;
}

@property (nonatomic, readonly) BWInferenceEngine *inferenceEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (id)outputVideoFormatForAttachedMediaKey:(id)arg1;
- (id)preparedOutputPixelBufferPoolForAttachedMediaKey:(id)arg1 format:(id)arg2;
- (id)liveOutputPixelBufferPoolForAttachedMediaKey:(id)arg1 format:(id)arg2;
- (id)initWithCaptureDevice:(id)arg1 scheduler:(id)arg2 priority:(unsigned int)arg3;
- (int)addInferenceOfType:(int)arg1 version:(CDStruct_08002bce)arg2 configuration:(id)arg3;
- (void)willEmitSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg1;
- (id)inputVideoFormatForAttachedMediaKey:(id)arg1;
- (id)inputFormatForAttachedMediaKey:(id)arg1;
- (id)inputInferenceVideoFormatForAttachedMediaKey:(id)arg1;
- (id)outputFormatForAttachedMediaKey:(id)arg1;
- (int)addInferenceOfType:(int)arg1 version:(CDStruct_08002bce)arg2;

@end
