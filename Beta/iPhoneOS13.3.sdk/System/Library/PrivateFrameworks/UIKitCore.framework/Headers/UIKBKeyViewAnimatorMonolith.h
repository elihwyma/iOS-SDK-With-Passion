/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKBKeyViewAnimator.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface UIKBKeyViewAnimatorMonolith : UIKBKeyViewAnimator

{
    NSMutableDictionary *_selectedKeyTimestamps;
    NSMutableDictionary *_transitionCompletions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)reset;
- (void)floatingContentView:(id)arg1 didFinishTransitioningToState:(unsigned long long)arg2;
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (Class)keyViewClassForKey:(id)arg1 traits:(id)arg2;
- (_Bool)shouldPurgeKeyViews;
- (_Bool)shouldAssertCurrentKeyState:(id)arg1;
- (_Bool)shouldTransitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3;
- (void)transitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)transitionOutKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (unsigned long long)controlStateForKeyState:(int)arg1;
- (void)addTransitionCompletion:(CDUnknownBlockType)arg1 forKeyName:(id)arg2;
- (void)transitionFloatingKeyView:(id)arg1 toState:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)animateFloatingKeyView:(id)arg1 toControlState:(unsigned long long)arg2;
- (long long)_transitionFromState:(int)arg1 toState:(int)arg2;

@end
