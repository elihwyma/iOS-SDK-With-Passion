/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface BWInferenceProviderStorage : NSObject

{
    NSArray *_requirementsNeedingPixelBuffers;
    NSMutableDictionary *_pixelBufferByRequirement;
    NSArray *_requirementsNeedingPixelBufferPools;
    NSMutableDictionary *_pixelBufferPoolByRequirement;
    NSDictionary *_inferenceResults;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) BWInferenceProviderStorage *inferenceStorage;
@property (copy, nonatomic, readonly) NSArray *requirementsNeedingPixelBufferPools;
@property (copy, nonatomic, readonly) NSArray *requirementsNeedingPixelBuffers;
@property (retain, nonatomic) NSDictionary *inferenceResults;

+ (void)initialize;

- (void)dealloc;
- (void)clear;
- (id)initWithRequirementsNeedingPixelBuffers:(id)arg1 requirementsNeedingPixelBufferPools:(id)arg2;
- (struct __CVBuffer *)pixelBufferForRequirement:(id)arg1;
- (id)newMetadataDictionarySatisfyingRequirement:(id)arg1;
- (struct opaqueCMSampleBuffer *)newSampleBufferSatisfyingRequirement:(id)arg1 withPropagationSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (struct opaqueCMSampleBuffer *)newSampleBufferSatisfyingCloneRequirement:(id)arg1;
- (id)pixelBufferPoolForRequirement:(id)arg1;
- (void)setPixelBuffer:(struct __CVBuffer *)arg1 forRequirement:(id)arg2;
- (void)setPixelBufferPool:(id)arg1 forRequirement:(id)arg2;

@end
