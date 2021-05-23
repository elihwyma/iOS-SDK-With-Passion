/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class MDLAnimatedScalarArray, NSArray;

@protocol MDLMorphDeformerComponent <Swift>

@property (nonatomic, readonly) NSArray *targetShapes;
@property (nonatomic, readonly) NSArray *shapeSetTargetWeights;
@property (nonatomic, readonly) NSArray *shapeSetTargetCounts;
@property (nonatomic, readonly) MDLAnimatedScalarArray *weights;

@end
