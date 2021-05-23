/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewAnimationState.h>

__attribute__((visibility("hidden")))
@interface UIViewInProcessAnimationState : UIViewAnimationState

{
    _Bool _retargeted;
    CDUnknownBlockType _animationAndComposerGetter;
    long long _type;
}

@property (copy, nonatomic) CDUnknownBlockType animationAndComposerGetter;
@property (nonatomic) _Bool retargeted;
@property (nonatomic) long long type;

- (id)init;
- (void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned long long)arg4 factory:(id)arg5 parentState:(id)arg6 start:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (void)animatePropertyWithCurrentValue:(id)arg1 targetValue:(id)arg2 preTickShouldRemoveCallback:(CDUnknownBlockType)arg3 newValueCallback:(CDUnknownBlockType)arg4 removedCallback:(CDUnknownBlockType)arg5 animatableProperty:(id)arg6;
- (_Bool)isKeySupported:(id)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;
- (_Bool)shouldAnimatePropertyWithKey:(id)arg1;
- (void)animatePropertyWithKey:(id)arg1 view:(id)arg2 forceNew:(_Bool)arg3 currentValue:(id)arg4 targetValue:(id)arg5 preTickShouldRemoveCallback:(CDUnknownBlockType)arg6 newValueCallback:(CDUnknownBlockType)arg7 removedCallback:(CDUnknownBlockType)arg8;

@end
