/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSArray, NSString, POPAnimationTracer;

@interface POPAnimation : NSObject <Swift>

{
    struct _POPAnimationState *_state;
    SpringSolver_fe820e75 *_solver;
    id _currentValue;
    NSArray *_progressMarkers;
}

@property (nonatomic) SpringSolver_fe820e75 *solver;
@property (nonatomic, readonly) int type;
@property (copy, nonatomic, readonly) id currentValue;
@property (copy, nonatomic) NSArray *progressMarkers;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) double beginTime;
@property (weak, nonatomic) id delegate;
@property (nonatomic, readonly) POPAnimationTracer *tracer;
@property (copy, nonatomic) CDUnknownBlockType animationDidStartBlock;
@property (copy, nonatomic) CDUnknownBlockType animationDidReachToValueBlock;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (copy, nonatomic) CDUnknownBlockType animationDidApplyBlock;
@property (nonatomic) _Bool removedOnCompletion;
@property (nonatomic, getter=isPaused) _Bool paused;
@property (nonatomic) _Bool autoreverses;
@property (nonatomic) long long repeatCount;
@property (nonatomic) _Bool repeatForever;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_init;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)_initState;
- (void)_appendDescription:(id)arg1 debug:(_Bool)arg2;
- (_Bool)_advance:(id)arg1 currentTime:(double)arg2 elapsedTime:(double)arg3;

@end
