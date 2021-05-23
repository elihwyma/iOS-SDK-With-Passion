/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString, SXViewport, UIDynamicAnimator;

@interface SXComponentBehaviorController : NSObject

{
    SXViewport *_viewport;
    UIDynamicAnimator *_animator;
    NSMutableSet *_behaviorHandlers;
}

@property (retain, nonatomic) SXViewport *viewport;
@property (nonatomic, readonly) NSMutableSet *behaviorHandlers;
@property (nonatomic, readonly) UIDynamicAnimator *animator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)reset;
- (void)update;
- (id)initWithViewport:(id)arg1 andAnimator:(id)arg2;
- (void)updateComponentView:(id)arg1;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect)arg2;
- (void)viewport:(id)arg1 boundsDidChangeFromBounds:(struct CGRect)arg2;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)unregisterComponentView:(id)arg1;
- (void)registerComponentView:(id)arg1 behavior:(id)arg2;
- (id)existingHandlerForComponentView:(id)arg1 behavior:(id)arg2;
- (void)updateHandler:(id)arg1;

@end
