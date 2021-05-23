/*
 Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

#import <PhysicsKit/PKPhysicsField.h>

@interface PKPhysicsFieldNoise : PKPhysicsField

@property (nonatomic) float smoothness;
@property (nonatomic) float animationSpeed;

+ (id)field;

- (id)init;
- (id)initWithField:(shared_ptr_307a0f33)arg1;

@end
