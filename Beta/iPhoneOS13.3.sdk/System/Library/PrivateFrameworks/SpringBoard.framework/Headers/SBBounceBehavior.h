/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIDynamicBehavior.h>

@class NSString, UIAttachmentBehavior, UICollisionBehavior, UIDynamicItemBehavior, UIGravityBehavior, _UIEdgeFeedbackGenerator;

@protocol UIDynamicItem;

@interface SBBounceBehavior : UIDynamicBehavior

{
    double _midwayPosition;
    double _completionThreshold;
    double _previousLinearVelocity;
    double _previousPreviousLinearVelocity;
    struct CGRect _targetFrame;
    id <UIDynamicItem> _item;
    UIDynamicItemBehavior *_bodyBehavior;
    UICollisionBehavior *_collisionBehavior;
    UIGravityBehavior *_gravityBehavior;
    UIDynamicItemBehavior *_pushBehavior;
    UIAttachmentBehavior *_draggingBehavior;
    double _gravity;
    double _velocity;
    double _elasticity;
    double _friction;
    double _resistance;
    double _minVelocityToAssist;
    double _maxVelocityToAssist;
    double _maxVelocityAssistance;
    _UIEdgeFeedbackGenerator *_hapticGenerator;
    struct UIEdgeInsets _boundaryInsets;
}

@property (nonatomic) double gravity;
@property (nonatomic) double velocity;
@property (nonatomic) double elasticity;
@property (nonatomic) double friction;
@property (nonatomic) double resistance;
@property (nonatomic) double minVelocityToAssist;
@property (nonatomic) double maxVelocityToAssist;
@property (nonatomic) double maxVelocityAssistance;
@property (retain, nonatomic) _UIEdgeFeedbackGenerator *hapticGenerator;
@property (nonatomic) struct UIEdgeInsets boundaryInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isActive;
- (id)initWithItem:(id)arg1;
- (void)bounce;
- (void)collisionBehavior:(id)arg1 beganContactForItem:(id)arg2 withBoundaryIdentifier:(id)arg3 atPoint:(struct CGPoint)arg4;
- (_Bool)allowsAnimatorToStop;
- (void)_beginInteraction;
- (double)_percentComplete;
- (double)_minVelocityToAssist;
- (double)_maxVelocityToAssist;
- (_Bool)_itemCompleted;
- (void)_setupCollisionBoundaries;
- (id)initWithItem:(id)arg1 targetFrame:(struct CGRect)arg2 feedbackGenerator:(id)arg3;
- (_Bool)_itemStopped;
- (void)_frameCollisionBoundaryPoints:(struct CGPoint *)arg1;
- (_Bool)_isGravityDown;
- (void)_removeDraggingBehavior;
- (_Bool)_itemPastMidway;
- (double)_adjustedVelocity:(double)arg1;
- (void)finishInteractionWithVelocity:(struct CGPoint)arg1 removingGravityAtMidway:(_Bool)arg2;
- (void)finishInteractionWithVelocity:(struct CGPoint)arg1;
- (double)_itemOriginY;
- (_Bool)_shouldAssistWithVelocity:(double)arg1;
- (double)_velocityAssistance;
- (double)_percentRemaining;
- (void)initiateInteractionFromPoint:(struct CGPoint)arg1;
- (void)updateInteractionWithPoint:(struct CGPoint)arg1;
- (void)finishInteraction;

@end
