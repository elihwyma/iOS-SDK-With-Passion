/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIDynamicBehavior.h>

@class NSArray, PKExtendedPhysicsBody, PKPhysicsJoint;

@interface UIAttachmentBehavior : UIDynamicBehavior

{
    struct CGPoint _anchorPoint;
    struct CGPoint _anchorPointA;
    struct CGPoint _anchorPointB;
    PKExtendedPhysicsBody *_anchorBody;
    PKPhysicsJoint *_joint;
    double _damping;
    double _frequency;
    double _length;
    struct CGVector _axis;
    unsigned long long _attachmentType;
    long long _type;
    struct {
        unsigned int dampingSet:1;
        unsigned int frequencySet:1;
        unsigned int lengthSet:1;
        unsigned int rangeSet:1;
        unsigned int frictionTorqueSet:1;
        unsigned int isRevolute:1;
    } _stateFlags;
    long long _attachedBehaviorType;
    double _frictionTorque;
    CDStruct_ef18196a _attachmentRange;
}

@property (copy, nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) long long attachedBehaviorType;
@property (nonatomic) struct CGPoint anchorPoint;
@property (nonatomic) double length;
@property (nonatomic) double damping;
@property (nonatomic) double frequency;
@property (nonatomic) double frictionTorque;
@property (nonatomic) CDStruct_c3b9c2ee attachmentRange;

+ (_Bool)_isPrimitiveBehavior;
+ (id)slidingAttachmentWithItem:(id)arg1 attachedToItem:(id)arg2 attachmentAnchor:(struct CGPoint)arg3 axisOfTranslation:(struct CGVector)arg4;
+ (id)slidingAttachmentWithItem:(id)arg1 attachmentAnchor:(struct CGPoint)arg2 axisOfTranslation:(struct CGVector)arg3;
+ (id)limitAttachmentWithItem:(id)arg1 offsetFromCenter:(struct UIOffset)arg2 attachedToItem:(id)arg3 offsetFromCenter:(struct UIOffset)arg4;
+ (id)fixedAttachmentWithItem:(id)arg1 attachedToItem:(id)arg2 attachmentAnchor:(struct CGPoint)arg3;
+ (id)pinAttachmentWithItem:(id)arg1 attachedToItem:(id)arg2 attachmentAnchor:(struct CGPoint)arg3;

- (id)init;
- (id)description;
- (long long)type;
- (id)initWithItem:(id)arg1 attachedToItem:(id)arg2;
- (id)initWithItem:(id)arg1 attachedToAnchor:(struct CGPoint)arg2;
- (void)_updateJointWithRange:(CDStruct_c3b9c2ee)arg1;
- (void)_changedParameter;
- (id)initWithItem:(id)arg1 offsetFromCenter:(struct UIOffset)arg2 attachedToItem:(id)arg3 offsetFromCenter:(struct UIOffset)arg4;
- (id)initWithItem:(id)arg1 point:(struct CGPoint)arg2 attachedToAnchor:(struct CGPoint)arg3;
- (id)initWithItem:(id)arg1 point:(struct CGPoint)arg2 attachedToItem:(id)arg3 point:(struct CGPoint)arg4;
- (id)initWithItem:(id)arg1 offsetFromCenter:(struct UIOffset)arg2 attachedToAnchor:(struct CGPoint)arg3;
- (void)_reevaluateJoint;
- (void)_associate;
- (void)_dissociate;

@end
