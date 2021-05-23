/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNPhysicsField.h>

__attribute__((visibility("hidden")))
@interface SCNPhysicsNoiseField : SCNPhysicsField

{
    double _smoothness;
    double _animationSpeed;
}

@property (nonatomic) double smoothness;
@property (nonatomic) double animationSpeed;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (struct c3dPhysicsField *)_createField;
- (_Bool)supportsDirection;
- (_Bool)supportsOffset;

@end
