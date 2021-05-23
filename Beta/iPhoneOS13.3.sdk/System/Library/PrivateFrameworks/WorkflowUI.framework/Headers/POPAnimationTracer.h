/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, POPAnimation;

@interface POPAnimationTracer : NSObject

{
    POPAnimation *_animation;
    struct _POPAnimationState *_animationState;
    NSMutableArray *_events;
    _Bool _animationHasVelocity;
    _Bool _shouldLogAndResetOnCompletion;
}

@property (nonatomic, readonly) NSArray *allEvents;
@property (nonatomic, readonly) NSArray *writeEvents;
@property (nonatomic) _Bool shouldLogAndResetOnCompletion;

- (void)stop;
- (void)start;
- (void)reset;
- (void)didStart;
- (id)initWithAnimation:(id)arg1;
- (void)updateFromValue:(id)arg1;
- (void)updateToValue:(id)arg1;
- (void)readPropertyValue:(id)arg1;
- (void)didReachToValue:(id)arg1;
- (void)updateVelocity:(id)arg1;
- (void)updateSpeed:(float)arg1;
- (void)updateBounciness:(float)arg1;
- (void)updateTension:(float)arg1;
- (void)updateFriction:(float)arg1;
- (void)updateMass:(float)arg1;
- (void)autoreversed;
- (void)writePropertyValue:(id)arg1;
- (void)didStop:(_Bool)arg1;
- (id)eventsWithType:(unsigned long long)arg1;

@end
