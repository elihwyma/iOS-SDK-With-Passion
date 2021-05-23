/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, NSMutableSet;

@interface _SBValueConvergenceAnimatorEngine : NSObject

{
    NSMutableSet *_animators;
    CADisplayLink *_displayLink;
    NSMutableSet *_finishedAnimators;
}

+ (id)sharedEngine;

- (id)init;
- (void)_updateDisplayLink;
- (void)_onDisplayLink:(id)arg1;
- (void)updateAnimator:(id)arg1;
- (void)startAnimator:(id)arg1;
- (void)stopAnimator:(id)arg1;
- (_Bool)isRunningAnimator:(id)arg1;
- (void)_ensureDisplayLink;
- (void)_tearDownDisplayLink;

@end
