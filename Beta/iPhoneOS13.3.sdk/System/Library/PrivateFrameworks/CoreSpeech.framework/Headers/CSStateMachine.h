/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol CSStateMachineDelegate;

@interface CSStateMachine : NSObject

{
    id <CSStateMachineDelegate> _delegate;
    long long _currentState;
    long long _initialState;
    NSMutableDictionary *_transitions;
}

@property (nonatomic) long long initialState;
@property (retain, nonatomic) NSMutableDictionary *transitions;
@property (weak, nonatomic) id <CSStateMachineDelegate> delegate;
@property (nonatomic, readonly) long long currentState;

- (void)reset;
- (id)initWithInitialState:(long long)arg1;
- (void)performTransitionForEvent:(long long)arg1;
- (void)addTransitionFrom:(long long)arg1 to:(long long)arg2 for:(long long)arg3;

@end
