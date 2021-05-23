/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIVisualEffectViewEntry.h>

__attribute__((visibility("hidden")))
@interface _UIVisualEffectAlphaEntry : _UIVisualEffectViewEntry

{
    double _initialAlpha;
    double _finalAlpha;
}

- (id)description;
- (void)applyRequestedEffectToView:(id)arg1;
- (void)applyIdentityEffectToView:(id)arg1;
- (void)removeEffectFromView:(id)arg1;
- (void)addEffectToView:(id)arg1;
- (id)copyForTransitionToEffect:(id)arg1;
- (id)copyForTransitionOut;
- (id)initWithInitialAlpha:(double)arg1 finalAlpha:(double)arg2;

@end
