/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUModalTransition.h>

@class NSString, PUTilingViewTransitionHelper;

__attribute__((visibility("hidden")))
@interface PUTilingViewModalTransition : PUModalTransition

{
    PUTilingViewTransitionHelper *__tilingViewTransitionHelper;
}

@property (nonatomic, readonly) PUTilingViewTransitionHelper *_tilingViewTransitionHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isTransitionPaused) _Bool transitionPaused;
@property (nonatomic, readonly) _Bool hasStarted;

- (id)init;
- (_Bool)isInteractive;
- (void)animatePresentTransition;
- (void)animateDismissTransition;
- (void)pauseTransition;
- (void)updatePausedTransitionWithProgress:(double)arg1 interactionProgress:(double)arg2;
- (void)resumeTransition:(_Bool)arg1;
- (void)pauseTransitionWithOptions:(unsigned long long)arg1;
- (void)_animateTransitionWithOperation:(long long)arg1;

@end
