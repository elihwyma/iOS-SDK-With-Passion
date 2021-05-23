/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIVisualEffectSubview.h>

__attribute__((visibility("hidden")))
@interface _UIVisualEffectContentView : _UIVisualEffectSubview

{
    _Bool _disableGroupFiltering;
    _Bool _currentlyDisplayingRequestedEffects;
}

- (id)description;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setFilters:(id)arg1;
- (void)applyRequestedFilterEffects;
- (void)applyIdentityFilterEffects;
- (_Bool)disableGroupFiltering;
- (void)setDisableGroupFiltering:(_Bool)arg1;
- (void)didAddSubview:(id)arg1;
- (void)willRemoveSubview:(id)arg1;

@end
