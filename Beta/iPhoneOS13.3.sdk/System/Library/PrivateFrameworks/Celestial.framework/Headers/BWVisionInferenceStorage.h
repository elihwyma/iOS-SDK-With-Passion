/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWInferenceProviderStorage.h>

@class NSMutableDictionary;

@interface BWVisionInferenceStorage : BWInferenceProviderStorage

{
    NSMutableDictionary *_requestsByRequirement;
}

+ (void)initialize;

- (void)dealloc;
- (id)initWithRequirementsNeedingPixelBuffers:(id)arg1 requirementsNeedingPixelBufferPools:(id)arg2;
- (id)newMetadataDictionarySatisfyingRequirement:(id)arg1;
- (struct opaqueCMSampleBuffer *)newSampleBufferSatisfyingRequirement:(id)arg1 withPropagationSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)setRequest:(id)arg1 forRequirement:(id)arg2;
- (id)requestForRequirement:(id)arg1;

@end
