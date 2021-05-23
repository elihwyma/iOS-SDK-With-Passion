/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, NSString, _UIVelocityIntegrator;

@protocol UISpringLoadedInteractionBehaviorDelegate, UISpringLoadedInteractionContext;

__attribute__((visibility("hidden")))
@interface _UISpringLoadedHysteresisBehavior : NSObject

{
    id <UISpringLoadedInteractionBehaviorDelegate> delegate;
    double _beginningVelocityThreshold;
    double _cancelingVelocityThreshold;
    CADisplayLink *_displayLink;
    _UIVelocityIntegrator *_velocityIntegrator;
    id <UISpringLoadedInteractionContext> _context;
}

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) _UIVelocityIntegrator *velocityIntegrator;
@property (weak, nonatomic) id <UISpringLoadedInteractionContext> context;
@property (nonatomic) double beginningVelocityThreshold;
@property (nonatomic) double cancelingVelocityThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <UISpringLoadedInteractionBehaviorDelegate> delegate;

- (_Bool)shouldAllowInteraction:(id)arg1 withContext:(id)arg2;
- (void)interactionDidFinish:(id)arg1;
- (void)_tick:(id)arg1;
- (void)setupDisplayLink;

@end
