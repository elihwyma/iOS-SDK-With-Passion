/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNConstraint.h>

@class SCNNode;

@protocol SCNAvoidOccluderConstraintDelegate;

@interface SCNAvoidOccluderConstraint : SCNConstraint

{
    SCNNode *_target;
    unsigned long long _categoryBitMask;
    float _offset;
    id _delegate;
}

@property (nonatomic) id <SCNAvoidOccluderConstraintDelegate> delegate;
@property (retain, nonatomic) SCNNode *target;
@property (nonatomic) unsigned long long occluderCategoryBitMask;
@property (nonatomic) double bias;

+ (_Bool)supportsSecureCoding;
+ (id)avoidOccluderConstraint;
+ (id)avoidOccluderConstraintWithTarget:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_customEncodingOfSCNAvoidOccluderConstraint:(id)arg1;
- (void)_customDecodingOfSCNAvoidOccluderConstraint:(id)arg1;

@end
