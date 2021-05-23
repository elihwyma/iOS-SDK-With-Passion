/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface FIUIState : NSObject

{
    NSMutableDictionary *_transitions;
    _Bool _transitional;
    NSString *_label;
    CDUnknownBlockType _entry;
    CDUnknownBlockType _exit;
    FIUIState *_parentState;
    NSMutableSet *_childStates;
    FIUIState *_entryState;
}

@property (readonly) NSString *label;
@property (copy) CDUnknownBlockType entry;
@property (copy) CDUnknownBlockType exit;
@property (getter=isTransitional) _Bool transitional;
@property (weak, nonatomic) FIUIState *parentState;
@property (nonatomic, readonly) NSMutableSet *childStates;
@property (weak, nonatomic) FIUIState *entryState;

+ (id)transitionalStateFromState:(id)arg1 toState:(id)arg2 entryEvent:(long long)arg3 exitEvent:(long long)arg4;
+ (id)stateWithLabel:(id)arg1;

- (id)description;
- (id)initWithLabel:(id)arg1;
- (id)allTransitions;
- (void)registerTransition:(long long)arg1 label:(id)arg2 toState:(id)arg3 handler:(CDUnknownBlockType)arg4 gate:(CDUnknownBlockType)arg5;
- (void)registerTransition:(long long)arg1 label:(id)arg2 toState:(id)arg3;
- (void)enumerateEvents:(CDUnknownBlockType)arg1;
- (id)transitionForEvent:(long long)arg1;
- (void)addChildStates:(id)arg1 withEntryState:(id)arg2;

@end
