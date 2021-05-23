/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNConstraint.h>

@class SCNNode;

@interface SCNLookAtConstraint : SCNConstraint

{
    SCNNode *_target;
    _Bool _gimbalLockEnabled;
    struct SCNVector3 _targetOffset;
    struct SCNVector3 _upVector;
    struct SCNVector3 _localFront;
}

@property (retain, nonatomic) SCNNode *target;
@property (nonatomic) struct SCNVector3 targetOffset;
@property (nonatomic) struct SCNVector3 localFront;
@property (nonatomic) struct SCNVector3 worldUp;
@property (nonatomic) _Bool gimbalLockEnabled;

+ (_Bool)supportsSecureCoding;
+ (id)lookAtConstraintWithTarget:(id)arg1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1;
- (struct SCNVector3)upVector;
- (void)setUpVector:(struct SCNVector3)arg1;
- (void)_customEncodingOfSCNLookAtConstraint:(id)arg1;
- (void)_customDecodingOfSCNLookAtConstraint:(id)arg1;

@end
