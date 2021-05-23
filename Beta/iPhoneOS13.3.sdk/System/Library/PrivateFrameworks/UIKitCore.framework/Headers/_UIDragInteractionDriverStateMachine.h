/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStateMachine.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIDragInteractionDriverStateMachine : _UIStateMachine

{
    NSMutableArray *_eventQueue;
}

@property (nonatomic, readonly) unsigned long long state;

+ (void)debugStateTransitionFromState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2 toState:(unsigned long long)arg3;
+ (void)debugAttemptedInvalidStateTransitionFromState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2;

- (void)handleEvent:(unsigned long long)arg1;
- (id)initWithDriver:(id)arg1;

@end
