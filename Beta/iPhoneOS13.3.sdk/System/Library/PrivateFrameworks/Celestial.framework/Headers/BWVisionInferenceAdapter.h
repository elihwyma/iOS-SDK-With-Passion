/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class VNProcessingDevice;

@interface BWVisionInferenceAdapter : NSObject

{
    VNProcessingDevice *_applicationProcessingDevice;
    VNProcessingDevice *_graphicsProcessingDevice;
    VNProcessingDevice *_neuralProcessingDevice;
}

@property (nonatomic, readonly) VNProcessingDevice *applicationProcessingDevice;
@property (nonatomic, readonly) VNProcessingDevice *graphicsProcessingDevice;
@property (nonatomic, readonly) VNProcessingDevice *neuralProcessingDevice;
@property (nonatomic, readonly) VNProcessingDevice *espressoBasedRequestProcessingDevice;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)inferenceProviderForType:(int)arg1 version:(CDStruct_08002bce)arg2 configuration:(id)arg3 resourceProvider:(id)arg4 status:(int *)arg5;
- (int)_executionTargetForProcessingDevice:(id)arg1;

@end
