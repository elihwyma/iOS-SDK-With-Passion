/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIDynamicBehavior.h>

@class NSArray;

@interface UIGravityBehavior : UIDynamicBehavior

{
    struct CGPoint _gravity;
}

@property (copy, nonatomic, readonly) NSArray *items;
@property (nonatomic) struct CGVector gravityDirection;
@property (nonatomic) double angle;
@property (nonatomic) double magnitude;

+ (_Bool)_isPrimitiveBehavior;

- (id)init;
- (id)description;
- (struct CGPoint)gravity;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
- (id)initWithItems:(id)arg1;
- (void)_associate;
- (void)_dissociate;
- (void)_addGravityItem:(id)arg1;
- (void)setXComponent:(double)arg1 yComponent:(double)arg2;
- (void)setAngle:(double)arg1 magnitude:(double)arg2;
- (double)yComponent;
- (void)setGravity:(struct CGPoint)arg1;
- (double)xComponent;
- (struct CGPoint)denormalizedGravity;
- (void)setXComponent:(double)arg1;
- (void)setYComponent:(double)arg1;
- (void)_setAngle:(double)arg1 magnitude:(double)arg2;

@end
