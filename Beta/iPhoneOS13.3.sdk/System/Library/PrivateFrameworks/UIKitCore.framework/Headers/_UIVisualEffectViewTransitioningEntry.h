/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIVisualEffectViewEntry.h>

__attribute__((visibility("hidden")))
@interface _UIVisualEffectViewTransitioningEntry : _UIVisualEffectViewEntry

{
    _UIVisualEffectViewEntry *_sourceEntry;
    _UIVisualEffectViewEntry *_destinationEntry;
}

- (id)description;
- (void)applyRequestedEffectToView:(id)arg1;
- (void)applyIdentityEffectToView:(id)arg1;
- (void)removeEffectFromView:(id)arg1;
- (_Bool)canTransitionToEffect:(id)arg1;
- (_Bool)shouldAnimateProperty:(id)arg1;
- (void)addEffectToView:(id)arg1;
- (_Bool)isSameTypeOfEffect:(id)arg1;
- (id)initWithSourceEntry:(id)arg1 destinationEntry:(id)arg2;
- (id)copyForTransitionToEffect:(id)arg1;
- (id)copyForTransitionOut;

@end
