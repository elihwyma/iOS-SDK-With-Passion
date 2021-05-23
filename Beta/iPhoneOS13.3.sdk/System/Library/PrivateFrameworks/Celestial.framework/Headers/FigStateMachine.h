/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSString;

@interface FigStateMachine : NSObject

{
    id _owner;
    struct os_unfair_lock_s _lock;
    _Bool _performsAtomicStateTransitions;
    unsigned int _currentState;
    struct FigStateMachineStateConfiguration *_stateConfigurations;
    BOOL _stateCount;
    NSString *_label;
}

@property (nonatomic) _Bool performsAtomicStateTransitions;
@property (readonly) unsigned int currentState;
@property (readonly) NSString *label;
@property (readonly) NSString *currentStateLabel;

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (_Bool)transitionToState:(unsigned int)arg1;
- (id)initWithLabel:(id)arg1 stateCount:(BOOL)arg2 initialState:(unsigned int)arg3 owner:(id)arg4;
- (void)setLabel:(id)arg1 forState:(unsigned int)arg2;
- (void)whenTransitioningFromState:(unsigned int)arg1 toState:(unsigned int)arg2 callHandler:(CDUnknownBlockType)arg3;
- (void)whenTransitioningToState:(unsigned int)arg1 callHandler:(CDUnknownBlockType)arg2;
- (_Bool)transitionToState:(unsigned int)arg1 fromState:(unsigned int)arg2;
- (_Bool)transitionToState:(unsigned int)arg1 errorStatus:(int)arg2;
- (void)whenTransitioningToStates:(unsigned int)arg1 callHandler:(CDUnknownBlockType)arg2;
- (id)labelForState:(unsigned int)arg1;
- (void)whenTransitioningToStateFails:(unsigned int)arg1 callHandler:(CDUnknownBlockType)arg2;
- (_Bool)_transitionToState:(unsigned int)arg1 fromStates:(unsigned int)arg2 errorStatus:(int)arg3;
- (void)markStateAsTerminal:(unsigned int)arg1;
- (void)whenTransitioningToStatesFail:(unsigned int)arg1 callHandler:(CDUnknownBlockType)arg2;
- (_Bool)transitionToState:(unsigned int)arg1 fromStates:(unsigned int)arg2;

@end
