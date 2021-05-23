/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIGestureRecognizer, UIView, _UIClickFeedbackGenerator;

@protocol UIInteractionEffect, _UIClickInteractionDelegate, _UIClickInteractionDriving;

@interface _UIClickInteraction : NSObject <Swift>

{
    _Bool _delaysOtherPanRecognizers;
    _Bool _hapticsEnabled;
    UIView *_view;
    id <UIInteractionEffect> _interactionEffect;
    id <_UIClickInteractionDelegate> _delegate;
    double _allowableMovement;
    id <_UIClickInteractionDriving> _driver;
    _UIClickFeedbackGenerator *_feedbackGenerator;
    Class _overrideDriverClass;
}

@property (retain, nonatomic) id <_UIClickInteractionDriving> driver;
@property (retain, nonatomic) _UIClickFeedbackGenerator *feedbackGenerator;
@property (nonatomic, readonly) double touchDuration;
@property (nonatomic, readonly) UIGestureRecognizer *driverPrimaryGestureRecognizer;
@property (nonatomic, readonly) _Bool hasDriverExceededAllowableMovement;
@property (nonatomic, readonly) _Bool isDriverCurrentlyAcceleratedByForce;
@property (nonatomic, readonly) _Bool driverPrefersCancelsTouchesInView;
@property (nonatomic) _Bool driverCancelsTouchesInView;
@property (nonatomic, setter=_setOverrideDriverClass:) Class overrideDriverClass;
@property (nonatomic) _Bool delaysOtherPanRecognizers;
@property (nonatomic) _Bool hapticsEnabled;
@property (weak, nonatomic) id <_UIClickInteractionDelegate> delegate;
@property (nonatomic) double allowableMovement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) UIView *view;
@property (retain, nonatomic) id <UIInteractionEffect> interactionEffect;

- (id)init;
- (void)willMoveToView:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (void)clickDriver:(id)arg1 didUpdateHighlightProgress:(double)arg2;
- (_Bool)clickDriver:(id)arg1 shouldDelayGestureRecognizer:(id)arg2;
- (void)clickDriver:(id)arg1 didPerformEvent:(unsigned long long)arg2;
- (void)cancelInteraction;
- (void)clickDriver:(id)arg1 shouldBegin:(CDUnknownBlockType)arg2;
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;
- (void)_viewTraitCollectionDidChange:(id)arg1;
- (void)_beginInteraction;
- (void)_updateDriver;
- (void)_createFeedbackGenerator;
- (Class)_driverClass;
- (void)_endInteraction;

@end
