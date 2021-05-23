/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/Swift-Protocol.h>

@class BWInferenceProviderStorage, NSArray, NSDictionary;

@protocol BWInferenceStorage <Swift>

@property (nonatomic, readonly) BWInferenceProviderStorage *inferenceStorage;
@property (copy, nonatomic, readonly) NSArray *requirementsNeedingPixelBufferPools;
@property (copy, nonatomic, readonly) NSArray *requirementsNeedingPixelBuffers;
@property (retain, nonatomic) NSDictionary *inferenceResults;

- (unsigned short)clear;
- (unsigned short)pixelBufferForRequirement: /* Error: Ran out of types for this method. */;
- (unsigned short)pixelBufferPoolForRequirement: /* Error: Ran out of types for this method. */;
- (unsigned short)setPixelBuffer:forRequirement: /* Error: Ran out of types for this method. */;
- (unsigned short)setPixelBufferPool:forRequirement: /* Error: Ran out of types for this method. */;

@end
