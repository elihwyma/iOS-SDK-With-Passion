/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIVisualEffectViewEntry.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIWallpaperEffectEntry : _UIVisualEffectViewEntry

{
    UIColor *_backgroundColor;
}

@property (retain) UIColor *backgroundColor;

- (void)applyRequestedEffectToView:(id)arg1;
- (void)applyIdentityEffectToView:(id)arg1;
- (_Bool)canTransitionToEffect:(id)arg1;
- (void)addEffectToView:(id)arg1;
- (_Bool)isSameTypeOfEffect:(id)arg1;

@end
