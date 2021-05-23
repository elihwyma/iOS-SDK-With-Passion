/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class NSArray, SCNPhysicsBody;

@protocol SCNPhysicsVehicleJSExport <Swift>

@property (nonatomic, readonly) double speedInKilometersPerHour;
@property (nonatomic, readonly) NSArray *wheels;
@property (nonatomic, readonly) SCNPhysicsBody *chassisBody;

+ (unsigned short)vehicleWithChassisBody:wheels: /* Error: Ran out of types for this method. */;

- (unsigned short)applyEngineForce:forWheelAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setSteeringAngle:forWheelAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)applyBrakingForce:forWheelAtIndex: /* Error: Ran out of types for this method. */;

@end
