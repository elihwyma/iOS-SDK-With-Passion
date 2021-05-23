/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <GameplayKit/GKAgent.h>

@class MISSING_TYPE;

@interface GKAgent2D : GKAgent

@property (nonatomic) MISSING_TYPE *position;
@property (nonatomic, readonly) MISSING_TYPE *velocity;
@property (nonatomic) float rotation;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithDeltaTime:(double)arg1;
- (void)applySteeringForce:(double)arg1 deltaTime: /* Error: Ran out of types for this method. */;
- (void)setPosition_:(struct float2)arg1;
- (struct float2)position_;
- (struct float2)velocity_;
- (void)applyBrakingForce:(float)arg1 deltaTime:(double)arg2;

@end
