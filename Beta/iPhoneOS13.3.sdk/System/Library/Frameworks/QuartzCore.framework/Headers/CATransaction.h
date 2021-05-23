/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@interface CATransaction : NSObject

+ (void)synchronize;
+ (void)setValue:(id)arg1 forKey:(id)arg2;
+ (void)lock;
+ (void)unlock;
+ (id)valueForKey:(id)arg1;
+ (CDUnknownBlockType)completionBlock;
+ (void)setCompletionBlock:(CDUnknownBlockType)arg1;
+ (void)begin;
+ (double)inputTime;
+ (void)setInputTime:(double)arg1;
+ (void)commit;
+ (unsigned int)currentState;
+ (void)flush;
+ (double)beginTime;
+ (void)setBeginTime:(double)arg1;
+ (void)setDisableActions:(_Bool)arg1;
+ (void)activate;
+ (void)addCommitHandler:(CDUnknownBlockType)arg1 forPhase:(int)arg2;
+ (double)animationDuration;
+ (id)animationTimingFunction;
+ (void)setAnimationDuration:(double)arg1;
+ (void)setAnimationTimingFunction:(id)arg1;
+ (CDUnknownBlockType)animator;
+ (void)setLowLatency:(_Bool)arg1;
+ (_Bool)lowLatency;
+ (void)setEarliestAutomaticCommitTime:(double)arg1;
+ (double)commitTime;
+ (void)setCommitTime:(double)arg1;
+ (double)earliestAutomaticCommitTime;
+ (_Bool)disableActions;
+ (int)currentPhase;
+ (unsigned int)generateSeed;
+ (void)activateBackground:(_Bool)arg1;
+ (id)_implicitAnimationForLayer:(id)arg1 keyPath:(id)arg2;
+ (void)pushAnimator:(CDUnknownBlockType)arg1;
+ (void)popAnimator;
+ (void)setCommitHandler:(CDUnknownBlockType)arg1;
+ (void)setPresentationHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;
+ (_Bool)animatesFromModelValues;
+ (void)setAnimatesFromModelValues:(_Bool)arg1;
+ (_Bool)disableRunLoopObserverCommits;
+ (void)setDisableRunLoopObserverCommits:(_Bool)arg1;
+ (void)assertInactive;

@end
