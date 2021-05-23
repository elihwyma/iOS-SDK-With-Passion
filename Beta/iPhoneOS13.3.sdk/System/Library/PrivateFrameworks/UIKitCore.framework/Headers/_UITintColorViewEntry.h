/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIVisualEffectViewEntry.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UITintColorViewEntry : _UIVisualEffectViewEntry

{
    UIColor *_tintColor;
}

@property (copy, nonatomic) UIColor *tintColor;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)applyRequestedEffectToView:(id)arg1;
- (void)applyIdentityEffectToView:(id)arg1;
- (void)removeEffectFromView:(id)arg1;
- (_Bool)canTransitionToEffect:(id)arg1;

@end
