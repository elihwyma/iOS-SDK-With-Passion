/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNPhysicsBehavior.h>

@class NSArray, SCNPhysicsBody, SCNPhysicsWorld;

@interface SCNPhysicsVehicle : SCNPhysicsBehavior

{
    SCNPhysicsBody *_chassisBody;
    NSArray *_wheels;
    SCNPhysicsWorld *_world;
    struct btRaycastVehicle *_vehicle;
    double _speedKmHour;
}

@property (nonatomic, readonly) double speedInKilometersPerHour;
@property (nonatomic, readonly) NSArray *wheels;
@property (nonatomic, readonly) SCNPhysicsBody *chassisBody;

+ (_Bool)supportsSecureCoding;
+ (id)vehicleWithChassisBody:(id)arg1 wheels:(id)arg2;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_update;
- (id)valueForKeyPath:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)physicsWorld;
- (void)_addToPhysicsWorld:(id)arg1;
- (void)_willRemoveFromPhysicsWorld:(id)arg1;
- (void)_handleCreateIfNeeded:(_Bool)arg1;
- (_Bool)hasReferenceToPhysicsBody:(id)arg1;
- (struct btRaycastVehicle *)btVehicle;
- (void)applyEngineForce:(double)arg1 forWheelAtIndex:(long long)arg2;
- (void)setSteeringAngle:(double)arg1 forWheelAtIndex:(long long)arg2;
- (void)applyBrakingForce:(double)arg1 forWheelAtIndex:(long long)arg2;
- (void)_initializeWheelsArray;
- (id)initWithChassisBody:(id)arg1 wheels:(id)arg2;
- (void)_createWheel:(id)arg1;
- (id)wheelAtIndex:(unsigned long long)arg1;
- (void)_customDecodingOfSCNPhysicsVehicle:(id)arg1;

@end
