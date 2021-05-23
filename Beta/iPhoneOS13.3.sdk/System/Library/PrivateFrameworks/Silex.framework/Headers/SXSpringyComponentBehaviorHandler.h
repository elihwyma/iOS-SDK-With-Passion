/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentBehaviorHandler.h>

@class UIAttachmentBehavior, UIDynamicAnimator;

@interface SXSpringyComponentBehaviorHandler : SXComponentBehaviorHandler

{
    double _lastYOffset;
    UIAttachmentBehavior *_dynamicBehavior;
    UIDynamicAnimator *_dynamicAnimator;
    double _frequency;
    double _damping;
    double _delta;
    struct CGPoint _originalCenter;
}

@property (nonatomic) double lastYOffset;
@property (retain, nonatomic) UIAttachmentBehavior *dynamicBehavior;
@property (retain, nonatomic) UIDynamicAnimator *dynamicAnimator;
@property (nonatomic) struct CGPoint originalCenter;
@property (nonatomic, readonly) double frequency;
@property (nonatomic, readonly) double damping;
@property (nonatomic, readonly) double delta;

- (void)dealloc;
- (id)initWithComponentView:(id)arg1 withBehavior:(id)arg2;
- (void)setupWithBehaviorController:(id)arg1;
- (void)updateWithBehaviorController:(id)arg1;
- (void)destroyWithBehaviorController:(id)arg1;

@end
