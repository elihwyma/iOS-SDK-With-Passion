/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWInferenceProviderStorage.h>

@class NSDictionary, NSMapTable, NSMutableSet;

@interface BWEspressoInferenceStorage : BWInferenceProviderStorage

{
    NSDictionary *_bindingNameByRequirement;
    NSMapTable *_tensorByRequirement;
    NSMutableSet *_requirementsUsingTensors;
    NSMutableSet *_requirementsUsingPixelBuffers;
}

+ (void)initialize;

- (void)dealloc;
- (void)clear;
- (id)newMetadataDictionarySatisfyingRequirement:(id)arg1;
- (struct opaqueCMSampleBuffer *)newSampleBufferSatisfyingRequirement:(id)arg1 withPropagationSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (CDStruct_0a65202a *)tensorForRequirement:(id)arg1;
- (id)initWithBindingNameByRequirement:(id)arg1 requirementsNeedingPixelBuffers:(id)arg2 requirementsNeedingPixelBufferPools:(id)arg3 requirementsNeedingTensors:(id)arg4;
- (id)bindingNameForRequirement:(id)arg1;
- (void)addTensorInUseRequirement:(id)arg1;
- (void)addPixelBufferInUseRequirement:(id)arg1;

@end
