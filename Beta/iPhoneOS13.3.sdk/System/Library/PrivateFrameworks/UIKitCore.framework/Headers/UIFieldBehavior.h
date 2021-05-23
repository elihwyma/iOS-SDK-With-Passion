/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIDynamicBehavior.h>

@class NSArray, PKPhysicsField, UIRegion;

@interface UIFieldBehavior : UIDynamicBehavior

{
    PKPhysicsField *_field;
    struct {
        unsigned int fieldIsKindOfNoiseField:1;
    } _fieldFlags;
    UIRegion *_region;
}

@property (nonatomic, readonly) PKPhysicsField *_field;
@property (copy, nonatomic, readonly) NSArray *items;
@property (nonatomic) struct CGPoint position;
@property (retain, nonatomic) UIRegion *region;
@property (nonatomic) double strength;
@property (nonatomic) double falloff;
@property (nonatomic) double minimumRadius;
@property (nonatomic) struct CGVector direction;
@property (nonatomic) double smoothness;
@property (nonatomic) double animationSpeed;

+ (_Bool)_isPrimitiveBehavior;
+ (id)dragField;
+ (id)vortexField;
+ (id)radialGravityFieldWithPosition:(struct CGPoint)arg1;
+ (id)linearGravityFieldWithVector:(struct CGVector)arg1;
+ (id)velocityFieldWithVector:(struct CGVector)arg1;
+ (id)noiseFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2;
+ (id)turbulenceFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2;
+ (id)springField;
+ (id)electricField;
+ (id)magneticField;
+ (id)fieldWithEvaluationBlock:(CDUnknownBlockType)arg1;

- (id)init;
- (void)setEnabled:(_Bool)arg1;
- (void)removeItem:(id)arg1;
- (_Bool)isEnabled;
- (void)addItem:(id)arg1;
- (void)_changedParameter;
- (void)_associate;
- (void)_dissociate;
- (id)_initWithField:(id)arg1;
- (void)_addFieldItem:(id)arg1;

@end
