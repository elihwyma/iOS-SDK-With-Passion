/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <ModelIO/Swift-Protocol.h>

@class MDLAnimatedScalarArray, NSArray;

@protocol MDLMorphDeformerComponent <Swift>

@property (nonatomic, readonly) NSArray *targetShapes;
@property (nonatomic, readonly) NSArray *shapeSetTargetWeights;
@property (nonatomic, readonly) NSArray *shapeSetTargetCounts;
@property (nonatomic, readonly) MDLAnimatedScalarArray *weights;

@end
