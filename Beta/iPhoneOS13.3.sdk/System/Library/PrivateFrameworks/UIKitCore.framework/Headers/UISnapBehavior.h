/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIDynamicBehavior.h>

@class NSMutableArray, PKPhysicsBody;

@interface UISnapBehavior : UIDynamicBehavior

{
    struct CGPoint _anchorPoint;
    double _damping;
    double _distance;
    double _frequency;
    struct {
        unsigned int attachedToView:1;
        unsigned int dampingSet:1;
        unsigned int frequencySet:1;
        unsigned int lengthSet:1;
    } _stateFlags;
    NSMutableArray *_joints;
    PKPhysicsBody *_anchorBody;
}

@property (nonatomic) struct CGPoint snapPoint;
@property (nonatomic) double damping;

+ (_Bool)_isPrimitiveBehavior;

- (id)init;
- (id)description;
- (void)_associate;
- (void)_dissociate;
- (double)_frequency;
- (id)initWithItem:(id)arg1 snapToPoint:(struct CGPoint)arg2;
- (double)_distance;
- (void)_setDistance:(double)arg1;
- (void)_setFrequency:(double)arg1;

@end
