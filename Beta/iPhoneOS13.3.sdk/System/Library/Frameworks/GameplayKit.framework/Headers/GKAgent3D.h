/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <GameplayKit/GKAgent.h>

@class MISSING_TYPE;

@interface GKAgent3D : GKAgent

@property (nonatomic) MISSING_TYPE *position;
@property (nonatomic, readonly) MISSING_TYPE *velocity;
@property (nonatomic) _Bool rightHanded;
@property (nonatomic) CDStruct_d80e62f2 rotation;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithDeltaTime:(double)arg1;
- (void)applySteeringForce:(double)arg1 deltaTime: /* Error: Ran out of types for this method. */;
- (void)applyBrakingForce:(float)arg1 deltaTime:(double)arg2;

@end
