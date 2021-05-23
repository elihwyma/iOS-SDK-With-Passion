/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWInferenceNode.h>

@class BWInferenceResultRingBuffers;

@interface BWInferenceBufferingNode : BWInferenceNode

{
    BWInferenceResultRingBuffers *_ringBuffers;
}

@property (retain, nonatomic, readonly) BWInferenceResultRingBuffers *ringBuffers;

- (void)dealloc;
- (id)initWithCaptureDevice:(id)arg1 scheduler:(id)arg2 priority:(unsigned int)arg3;
- (int)addInferenceOfType:(int)arg1 version:(CDStruct_08002bce)arg2 configuration:(id)arg3 ringBufferCapacity:(int)arg4;
- (void)willEmitSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg1;

@end
