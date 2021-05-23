/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UIStateMachine : NSObject

{
    unsigned long long _stateCount;
    unsigned long long _eventCount;
    struct {
        unsigned long long _field1;
        unsigned long long _field2;
        _Bool _field3;
        unsigned long long _field4;
        CDUnknownBlockType _field5;
        CDUnknownBlockType _field6;
    } *_transitionTable;
    NSMutableDictionary *_stateChangeObservers;
    unsigned long long _state;
}

@property (nonatomic) unsigned long long state;

+ (void)debugStateTransitionFromState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2 toState:(unsigned long long)arg3;
+ (void)debugAttemptedInvalidStateTransitionFromState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2;

- (void)dealloc;
- (id)initWithStates:(unsigned long long)arg1 events:(unsigned long long)arg2 initialState:(unsigned long long)arg3;
- (void)setTransitionHandlerForState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2 transitionHandler:(CDUnknownBlockType)arg3;
- (void)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (void)setStateChangeObserver:(unsigned long long)arg1 observer:(CDUnknownBlockType)arg2;
- (void)setTransitionHandlerForState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2 transitionHandler:(CDUnknownBlockType)arg3 postTransitionHandler:(CDUnknownBlockType)arg4;
- (unsigned long long)_totalStateCount;
- (void)_iterateTransitionTable:(CDUnknownBlockType)arg1;
- (void)setStaticTransitionFromState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (id)_transitionDescriptions;

@end
