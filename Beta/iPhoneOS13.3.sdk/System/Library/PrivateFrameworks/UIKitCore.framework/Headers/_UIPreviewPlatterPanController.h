/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, UIBezierPath, UIPanGestureRecognizer, UIView, UIViewSpringAnimationBehavior, _UIVelocityIntegrator;

@protocol _UIPreviewPlatterPanControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIPreviewPlatterPanController : NSObject <Swift>

{
    unsigned long long _currentDetentIndex;
    double _initialYTranslation;
    UIBezierPath *_actionScrubPath;
    double _currentDistanceToActionScrubPath;
    struct CGPoint _initialLocationInsidePreview;
    _Bool _actionsViewIsVisible;
    _Bool _touchEverEnteredMenu;
    _Bool _enabled;
    UIViewSpringAnimationBehavior *_animationBehavior;
    id <_UIPreviewPlatterPanControllerDelegate> _delegate;
    UIPanGestureRecognizer *_panGestureRecognizer;
    NSArray *_detents;
    unsigned long long _initialDetentIndex;
    unsigned long long _rubberbandingEdges;
    NSArray *_accessoryViews;
    UIView *_containerView;
    UIView *_platterView;
    UIView *_actionsView;
    _UIVelocityIntegrator *_velocityIntegrator;
    struct CGPoint _originalPlatterCenter;
    struct CGPoint _originalActionsCenter;
    CDStruct_6f807b77 _menuAnchor;
}

@property (weak, nonatomic) UIView *containerView;
@property (weak, nonatomic) UIView *platterView;
@property (weak, nonatomic) UIView *actionsView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) _UIVelocityIntegrator *velocityIntegrator;
@property (nonatomic, readonly) UIViewSpringAnimationBehavior *animationBehavior;
@property (weak, nonatomic) id <_UIPreviewPlatterPanControllerDelegate> delegate;
@property (nonatomic) _Bool enabled;
@property (retain, nonatomic) NSArray *detents;
@property (nonatomic) unsigned long long initialDetentIndex;
@property (nonatomic) struct CGPoint originalPlatterCenter;
@property (nonatomic) struct CGPoint originalActionsCenter;
@property (nonatomic) CDStruct_6f807b77 menuAnchor;
@property (nonatomic) unsigned long long rubberbandingEdges;
@property (retain, nonatomic) NSArray *accessoryViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)_handlePanGesture:(id)arg1;
- (_Bool)_canSwipeDownToDismiss;
- (struct CGVector)_currentPlatterVelocity;
- (int)_nearestDetentWithTranslation:(struct CGPoint)arg1;
- (void)_updateViewPositionsWithTranslation:(struct CGPoint)arg1 location:(struct CGPoint)arg2 ended:(_Bool)arg3 withVelocity:(_Bool)arg4;
- (void)_updateActionScrubPathWithLocationIfNecessary:(struct CGPoint)arg1;
- (_Bool)_canBeginDraggingWithTranslation:(struct CGPoint)arg1 location:(struct CGPoint)arg2;
- (void)_updatePlatterGestureDebugUIWithGesture:(id)arg1 invalidate:(_Bool)arg2;
- (double)_dragTearOffThreshold;
- (double)_tearOffSpeedMultiplier;
- (void)_animationsForPreviewPlusActionsStyleWithTranslation:(struct CGPoint)arg1 location:(struct CGPoint)arg2;
- (void)_animationsForActionsStyleWithLocation:(struct CGPoint)arg1 ended:(_Bool)arg2;
- (void)_animationsForAnyAttachedAccessoryViews;
- (struct CGPoint)_rubberBandedTranslationForGestureTranslation:(struct CGPoint)arg1;
- (_Bool)_initialPointInPlatterIsValid;
- (double)_rangeOfMotion;
- (id)initWithContainerView:(id)arg1 platterView:(id)arg2 actionsView:(id)arg3;

@end
