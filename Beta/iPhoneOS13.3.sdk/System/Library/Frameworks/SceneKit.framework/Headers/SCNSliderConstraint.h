/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNConstraint.h>

@interface SCNSliderConstraint : SCNConstraint

{
    unsigned long long _categoryBitMask;
    struct SCNVector3 _offset;
    float _radius;
}

@property (nonatomic) unsigned long long collisionCategoryBitMask;
@property (nonatomic) double radius;
@property (nonatomic) struct SCNVector3 offset;

+ (_Bool)supportsSecureCoding;
+ (id)sliderConstraint;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
