/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NFStateMachine, NFStateMachineState, NSMutableArray, NSString;

@protocol SVPlaybackTransitionContext;

@interface SVPlaybackTransitionCoordinator : NSObject

{
    NSMutableArray *_transitionAlongsideBlocks;
    NSMutableArray *_completionBlocks;
    id <SVPlaybackTransitionContext> _context;
    NFStateMachine *_stateMachine;
    NFStateMachineState *_transitioningState;
}

@property (nonatomic, readonly) NSMutableArray *transitionAlongsideBlocks;
@property (nonatomic, readonly) NSMutableArray *completionBlocks;
@property (retain, nonatomic) id <SVPlaybackTransitionContext> context;
@property (nonatomic, readonly) NFStateMachine *stateMachine;
@property (nonatomic, readonly) NFStateMachineState *transitioningState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)updateInteractiveTransition:(double)arg1;
- (void)transitionAlongside:(CDUnknownBlockType)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)startInteractiveTransitionWithContext:(id)arg1;

@end
