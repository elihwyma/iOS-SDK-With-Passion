/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/Swift-Protocol.h>

@protocol BWInferenceExecutable, BWInferenceExtractable, BWInferencePropagatable, BWInferenceSubmittable;

@protocol BWInferenceJobProvider <Swift>

@property (nonatomic, readonly) id <BWInferenceExecutable> executable;
@property (nonatomic, readonly) id <BWInferenceSubmittable> submittable;
@property (nonatomic, readonly) id <BWInferenceExtractable> extractable;
@property (nonatomic, readonly) id <BWInferencePropagatable> propagatable;

- (unsigned short)newStorage;

@end
