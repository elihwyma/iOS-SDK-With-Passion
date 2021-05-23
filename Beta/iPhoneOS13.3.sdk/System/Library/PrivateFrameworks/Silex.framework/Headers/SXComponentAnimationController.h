/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, NSMutableSet, NSString, SXViewport;

@interface SXComponentAnimationController : NSObject

{
    NSMutableSet *_registeredComponents;
    NSMutableSet *_animatingComponents;
    SXViewport *_viewport;
    CADisplayLink *_displayLink;
    NSMutableSet *_animationHandlersToFinish;
}

@property (retain, nonatomic) NSMutableSet *registeredComponents;
@property (retain, nonatomic) NSMutableSet *animatingComponents;
@property (nonatomic, readonly) SXViewport *viewport;
@property (nonatomic, readonly) CADisplayLink *displayLink;
@property (nonatomic, readonly) NSMutableSet *animationHandlersToFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithViewport:(id)arg1;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect)arg2;
- (void)viewport:(id)arg1 boundsDidChangeFromBounds:(struct CGRect)arg2;
- (void)viewport:(id)arg1 documentSizeDidChangeFromSize:(struct CGSize)arg2;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (id)animatingHandlerForComponent:(id)arg1;
- (void)updateVisibleBoundsIfNeeded;
- (id)registeredHandlerForComponent:(id)arg1;
- (void)stopUpdatingAnimationForComponentView:(id)arg1 finishAnimation:(_Bool)arg2;
- (void)updateVisibleBounds:(struct CGRect)arg1;
- (struct CGRect)convertRectForComponent:(id)arg1;
- (void)finishAnimationHandlerAnimated:(id)arg1;
- (void)startOrStopDisplayLink;
- (void)displayLinkTick:(id)arg1;
- (void)registerComponentView:(id)arg1 animation:(id)arg2;
- (void)unregisterComponentView:(id)arg1;
- (void)startUpdatingAnimationForComponentView:(id)arg1;
- (void)stopUpdatingAnimationForComponentView:(id)arg1;

@end
