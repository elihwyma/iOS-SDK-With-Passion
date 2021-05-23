/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIAppearance.h>

@class UITraitCollection;

__attribute__((visibility("hidden")))
@interface _UITraitBasedAppearance : _UIAppearance

{
    UITraitCollection *_traitCollection;
}

+ (_Bool)_hasAnyCustomizations;
+ (void)_setHasAnyCustomizations;
+ (_Bool)_hasCustomizationsForTraitCollection:(id)arg1 class:(Class)arg2 guideClass:(Class)arg3;
+ (id)_appearanceForTraitCollection:(id)arg1 forClass:(Class)arg2 withContainerList:(id)arg3;

- (void)dealloc;
- (id)_traitCollection;
- (_Bool)_isValidAppearanceForCustomizableObject:(id)arg1;
- (void)_invalidateAppearanceInWindow:(id)arg1;

@end
