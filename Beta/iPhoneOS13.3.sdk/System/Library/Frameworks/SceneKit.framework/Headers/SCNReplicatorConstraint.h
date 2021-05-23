/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNConstraint.h>

@class SCNNode;

@interface SCNReplicatorConstraint : SCNConstraint

{
    SCNNode *_target;
    _Bool _replicateOrientation;
    _Bool _replicatePosition;
    _Bool _replicateScale;
    struct SCNVector4 _orientationOffset;
    struct SCNVector3 _positionOffset;
    struct SCNVector3 _scaleOffset;
}

@property (retain, nonatomic) SCNNode *target;
@property (nonatomic) _Bool replicatesOrientation;
@property (nonatomic) _Bool replicatesPosition;
@property (nonatomic) _Bool replicatesScale;
@property (nonatomic) struct SCNVector4 orientationOffset;
@property (nonatomic) struct SCNVector3 positionOffset;
@property (nonatomic) struct SCNVector3 scaleOffset;

+ (_Bool)supportsSecureCoding;
+ (id)replicatorConstraint;
+ (id)replicatorConstraintWithTarget:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_customEncodingOfSCNReplicatorConstraint:(id)arg1;
- (void)_customDecodingOfSCNReplicatorConstraint:(id)arg1;

@end
