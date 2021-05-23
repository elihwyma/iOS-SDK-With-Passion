/*
 Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol AFUIStateMachineDelegate;

@interface AFUIStateMachine : NSObject

{
    id <AFUIStateMachineDelegate> _delegate;
    long long _state;
    NSMutableDictionary *_endStatesByEventByStartState;
}

@property (nonatomic, setter=_setState:) long long state;
@property (retain, nonatomic, getter=_endStatesByEventByStartState) NSMutableDictionary *endStatesByEventByStartState;
@property (weak, nonatomic) id <AFUIStateMachineDelegate> delegate;

- (id)_descriptionForEvent:(long long)arg1;
- (id)initWithInitialState:(long long)arg1;
- (void)addTransitionFromState:(long long)arg1 toState:(long long)arg2 forEvent:(long long)arg3;
- (void)performTransitionForEvent:(long long)arg1;
- (id)_endStateNumberFromDictionary:(id)arg1 forEvent:(long long)arg2;
- (void)_setState:(long long)arg1 forEvent:(long long)arg2;

@end
