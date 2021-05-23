/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

#import <ModelIO/Swift-Protocol.h>

@class MDLAnimatedScalarArray, NSArray, NSData, NSString;

@interface MDLMorphDeformer : NSObject <Swift>

{
    NSArray *_targetShapes;
    MDLAnimatedScalarArray *_weights;
    NSData *_targetWeights;
    NSData *_targetCounts;
}

@property (retain, nonatomic) MDLAnimatedScalarArray *weights;
@property (retain, nonatomic) NSData *targetWeights;
@property (retain, nonatomic) NSData *targetCounts;
@property (nonatomic, readonly) NSArray *targetShapes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *shapeSetTargetWeights;
@property (nonatomic, readonly) NSArray *shapeSetTargetCounts;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOther:(id)arg1;
- (id)initWithTargetShapes:(id)arg1 shapeSetTargetWeights:(id)arg2 shapeSetTargetCounts:(id)arg3;
- (id)initWithTargetShapes:(id)arg1 shapeSetTargetWeights:(const float *)arg2 count:(unsigned long long)arg3 shapeSetTargetCounts:(const unsigned int *)arg4 count:(unsigned long long)arg5;
- (unsigned long long)copyShapeSetTargetWeightsInto:(float *)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)copyShapeSetTargetCountsInto:(unsigned int *)arg1 maxCount:(unsigned long long)arg2;

@end
