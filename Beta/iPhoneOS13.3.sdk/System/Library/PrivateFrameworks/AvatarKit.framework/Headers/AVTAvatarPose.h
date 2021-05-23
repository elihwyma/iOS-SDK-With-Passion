/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, NSMutableDictionary;

@interface AVTAvatarPose : NSObject

{
    _Bool _hasNeckPosition;
    _Bool _hasNeckOrientation;
    double _bakedAnimationBlendFactor;
    NSMutableDictionary *_weights;
    MISSING_TYPE *_neckPosition;
    struct {
        MISSING_TYPE *vector;
    } _neckOrientation;
}

@property (nonatomic) MISSING_TYPE *neckPosition;
@property (nonatomic) struct neckOrientation;
@property (nonatomic) double bakedAnimationBlendFactor;

+ (id)friendlyPose;
+ (id)neutralPose;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)setWeights:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)poseByMergingPose:(id)arg1;
- (void)setWeight:(double)arg1 forBlendShapeNamed:(id)arg2;
- (double)weightForBlendShapeNamed:(id)arg1;
- (id)initWithWeights:(id)arg1 neckPosition:(MISSING_TYPE **)arg2 neckOrientation:(struct *)arg3 bakedAnimationBlendFactor:(double)arg4;
- (_Bool)affectsPhysicsSimulation;

@end
