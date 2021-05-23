/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIService.framework/AccessibilityUIService
 */

#import <NSObject.h>

@class AXAssertion, AXDispatchTimer, UIAttachmentBehavior, UICollisionBehavior, UIDynamicAnimator, UIDynamicItemBehavior, UIGravityBehavior, UIPanGestureRecognizer, UISnapBehavior, UIView;

@protocol AXUINubbitDelegate;

@interface AXUINubbitContext : NSObject

{
    UIView *_nubbit;
    id <AXUINubbitDelegate> _delegate;
    AXAssertion *_disableSystemGesturesAssertion;
    AXAssertion *_disableDashBoardSystemGesturesAssertion;
    UIPanGestureRecognizer *_moveNubbitGestureRecognizer;
    AXDispatchTimer *_fadeTimer;
    UIDynamicAnimator *_dynamicAnimator;
    UIGravityBehavior *_gravityBehavior;
    UIAttachmentBehavior *_followPanBehavior;
    UISnapBehavior *_snapToBoundaryBehavior;
    UICollisionBehavior *_collisionBehavior;
    UIDynamicItemBehavior *_dynamicItemBehavior;
    double _originalAlpha;
}

@property (retain, nonatomic) UIView *nubbit;
@property (weak, nonatomic) id <AXUINubbitDelegate> delegate;
@property (retain, nonatomic) AXAssertion *disableSystemGesturesAssertion;
@property (retain, nonatomic) AXAssertion *disableDashBoardSystemGesturesAssertion;
@property (retain, nonatomic) UIPanGestureRecognizer *moveNubbitGestureRecognizer;
@property (retain, nonatomic) AXDispatchTimer *fadeTimer;
@property (retain, nonatomic) UIDynamicAnimator *dynamicAnimator;
@property (retain, nonatomic) UIGravityBehavior *gravityBehavior;
@property (retain, nonatomic) UIAttachmentBehavior *followPanBehavior;
@property (retain, nonatomic) UISnapBehavior *snapToBoundaryBehavior;
@property (retain, nonatomic) UICollisionBehavior *collisionBehavior;
@property (retain, nonatomic) UIDynamicItemBehavior *dynamicItemBehavior;
@property (nonatomic) double originalAlpha;

@end
