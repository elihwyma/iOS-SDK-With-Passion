/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UINavigationControllerPalette.h>

@class UISearchBar, UIView;

__attribute__((visibility("hidden")))
@interface _UINavigationControllerManagedSearchPalette : _UINavigationControllerPalette

{
    _Bool _ignoreGeometryChanges;
    CDUnknownBlockType _resetAfterSearchFieldFade;
    UISearchBar *__searchBar;
}

@property (nonatomic, readonly) UIView *viewForAsymmetricFade;
@property (nonatomic) _Bool ignoreGeometryChanges;
@property (copy, nonatomic) CDUnknownBlockType resetAfterSearchFieldFade;
@property (weak, nonatomic, setter=_setSearchBar:) UISearchBar *_searchBar;
@property (nonatomic, setter=_setShadowAlpha:) double _shadowAlpha;

- (void)setBounds:(struct CGRect)arg1;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (_Bool)_supportsSpecialSearchBarTransitions;
- (void)_propagateBackgroundToContents;
- (_Bool)_shouldUpdateBackground;
- (id)_initWithNavigationController:(id)arg1 forEdge:(unsigned long long)arg2;
- (void)_updateLayoutForCurrentConfiguration;
- (void)_pushDisableLayoutFlushingForTransition;
- (void)_popDisableLayoutFlushingForTransition;

@end
