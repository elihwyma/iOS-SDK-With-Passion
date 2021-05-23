/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <GameplayKit/GKComponent.h>

@class GKBehavior, MISSING_TYPE;

@protocol GKAgentDelegate;

@interface GKAgent : GKComponent

{
    struct GKSimpleVehicle _vehicle;
    id <GKAgentDelegate> _delegate;
    GKBehavior *_behavior;
}

@property (weak, nonatomic) id <GKAgentDelegate> delegate;
@property (retain, nonatomic) GKBehavior *behavior;
@property (nonatomic) float mass;
@property (nonatomic) float radius;
@property (nonatomic) float speed;
@property (nonatomic) float maxAcceleration;
@property (nonatomic) float maxSpeed;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (struct GKSimpleVehicle *)vehicle;
- (MISSING_TYPE *)position3;
- (MISSING_TYPE *)velocity3;
- (MISSING_TYPE *)steerForSeek: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)steerForFlee: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)steerToAvoidObstacles:(id)arg1 timeBeforeCollisionToAvoid:(double)arg2;
- (MISSING_TYPE *)steerToAvoidAgents:(id)arg1 timeBeforeCollisionToAvoid:(double)arg2;
- (MISSING_TYPE *)steerForSeparation:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3;
- (MISSING_TYPE *)steerForAlignment:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3;
- (MISSING_TYPE *)steerForCohesion:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3;
- (MISSING_TYPE *)steerForTargetSpeed:(float)arg1;
- (MISSING_TYPE *)steerForWander:(double)arg1 speed:(float)arg2;
- (MISSING_TYPE *)steerForIntercept:(id)arg1 maxPredictionTime:(double)arg2;
- (MISSING_TYPE *)steerToFollowPath:(id)arg1 maxPredictionTime:(double)arg2 forward:(_Bool)arg3;
- (MISSING_TYPE *)steerToStayOnPath:(id)arg1 maxPredictionTime:(double)arg2;

@end
