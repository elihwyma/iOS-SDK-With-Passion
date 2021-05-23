/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@protocol _GKStateMachineDelegate;

@interface _GKStateMachine : NSObject

{
    struct os_unfair_lock_s _lock;
    NSString *_currentState;
    NSDictionary *_validTransitions;
    id <_GKStateMachineDelegate> _delegate;
    _Bool _shouldLogStateTransitions;
}

@property (retain) NSString *currentState;
@property (retain) NSDictionary *validTransitions;
@property id <_GKStateMachineDelegate> delegate;
@property (nonatomic) _Bool shouldLogStateTransitions;

- (id)init;
- (void)dealloc;
- (_Bool)applyState:(id)arg1;
- (_Bool)_setCurrentState:(id)arg1;
- (id)missingTransitionFromState:(id)arg1 toState:(id)arg2;
- (id)_validateTransitionFromState:(id)arg1 toState:(id)arg2;
- (void)_performTransitionFromState:(id)arg1 toState:(id)arg2;

@end
