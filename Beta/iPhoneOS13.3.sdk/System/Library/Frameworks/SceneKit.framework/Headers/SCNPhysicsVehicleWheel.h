/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class SCNNode, SCNPhysicsVehicle;

@interface SCNPhysicsVehicleWheel : NSObject

{
    SCNNode *_node;
    SCNPhysicsVehicle *_vehicle;
    int _wheelIndex;
    double _suspensionStiffness;
    double _suspensionCompression;
    double _suspensionDamping;
    double _maximumSuspensionTravel;
    double _frictionSlip;
    double _maximumSuspensionForce;
    struct SCNVector3 _connectionPosition;
    struct SCNVector3 _steeringAxis;
    struct SCNVector3 _axle;
    double _radius;
    double _suspensionRestLength;
    _Bool _isFront;
}

@property (readonly) SCNNode *node;
@property double suspensionStiffness;
@property double suspensionCompression;
@property double suspensionDamping;
@property double maximumSuspensionTravel;
@property double frictionSlip;
@property double maximumSuspensionForce;
@property struct SCNVector3 connectionPosition;
@property struct SCNVector3 steeringAxis;
@property struct SCNVector3 axle;
@property double radius;
@property double suspensionRestLength;

+ (_Bool)supportsSecureCoding;
+ (id)wheelWithNode:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setNode:(id)arg1;
- (_Bool)isFront;
- (void)setIsFront:(_Bool)arg1;
- (void)_setVehicle:(id)arg1;
- (void)_setWheelIndex:(int)arg1;

@end
