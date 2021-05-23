/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/Swift-Protocol.h>

@class NSArray, NSSet;

@protocol BWInferenceProvider <Swift>

@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) int executionTarget;
@property (copy, nonatomic, readonly) NSSet *preventionReasons;
@property (nonatomic, readonly) NSArray *inputVideoRequirements;
@property (nonatomic, readonly) NSArray *outputVideoRequirements;
@property (nonatomic, readonly) NSArray *cloneVideoRequirements;
@property (nonatomic, readonly) NSArray *inputMetadataRequirements;
@property (nonatomic, readonly) NSArray *outputMetadataRequirements;

- (unsigned short)newStorage;
- (unsigned short)propagateInferenceResultsToInferenceDictionary:usingStorage:propagationSampleBuffer: /* Error: Ran out of types for this method. */;
- (unsigned short)prewarmUsingLimitedMemory: /* Error: Ran out of types for this method. */;

@end
