/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXTilingControllerComposition.h>

@class NSArray, NSString, PXScrollViewController, PXTilingController, PXWidgetCompositionSpec;

@protocol PXWidgetCompositionDelegate;

@interface PXWidgetComposition : PXTilingControllerComposition

{
    struct {
        _Bool respondsToHasContentAbove;
        _Bool respondsToShouldUseEdgeToEdgeLayoutForWidget;
        _Bool respondsToLoadingPriorityForWidget;
        _Bool respondsToWidgetTransitionToViewControllerWithTransitionType;
        _Bool respondsToRequestViewControllerDismissalAnimated;
        _Bool respondsToDidUpdateCompositionWithDefaultAnimationOptions;
    } _delegateFlags;
    _Bool _isPerformingWidgetLoadingChange;
    struct {
        _Bool elementsToLoad;
    } _needsUpdateFlags;
    _Bool _shouldLoadVisibleWidgets;
    _Bool _shouldLoadAllWidgets;
    _Bool _shouldUnloadAllWidgets;
    _Bool __didLayoutWidgets;
    NSArray *__elements;
    PXScrollViewController *_scrollViewController;
    id <PXWidgetCompositionDelegate> _delegate;
    NSArray *_widgets;
    PXWidgetCompositionSpec *_spec;
    long long _minimumWidgetLoadingPriority;
    PXTilingController *__focusedTilingController;
    struct CGPoint __lastContentAdjustmentOffset;
}

@property (copy, nonatomic, setter=_setElements:) NSArray *_elements;
@property (retain, nonatomic, setter=_setFocusedTilingController:) PXTilingController *_focusedTilingController;
@property (nonatomic, setter=_setDidLayoutWidgets:) _Bool _didLayoutWidgets;
@property (nonatomic, setter=_setLastContentAdjustmentOffset:) struct CGPoint _lastContentAdjustmentOffset;
@property (weak, nonatomic, readonly) PXScrollViewController *scrollViewController;
@property (weak, nonatomic) id <PXWidgetCompositionDelegate> delegate;
@property (copy, nonatomic) NSArray *widgets;
@property (retain, nonatomic) PXWidgetCompositionSpec *spec;
@property (nonatomic) long long minimumWidgetLoadingPriority;
@property (nonatomic) _Bool shouldLoadVisibleWidgets;
@property (nonatomic) _Bool shouldLoadAllWidgets;
@property (nonatomic) _Bool shouldUnloadAllWidgets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (id)initWithScrollViewController:(id)arg1;
- (void)updateComposition;
- (id)tilingControllers;
- (_Bool)element:(id)arg1 transitionToViewController:(struct NSObject *)arg2 withTransitionType:(long long)arg3;
- (_Bool)element:(id)arg1 requestViewControllerDismissalAnimated:(_Bool)arg2;
- (struct NSObject *)elementViewController:(id)arg1;
- (void)elementNeedsLayout:(id)arg1 preferredAnimationOptions:(id)arg2 originatingTilingController:(id)arg3;
- (void)elementHasLoadedContentDataDidChange:(id)arg1;
- (void)_invalidateElements;
- (void)_updateElements;
- (void)_invalidateElementsSpec;
- (void)_updateElementsSpec;
- (void)_invalidateFocusedTilingController;
- (void)_updateFocusedTilingController;
- (_Bool)_shouldFocusOnTilingController:(id)arg1;
- (_Bool)_shouldUseEdgeToEdgeLayoutForWidget:(id)arg1;
- (long long)_loadingPriorityForElement:(id)arg1;
- (void)performWidgetLoadingChange:(CDUnknownBlockType)arg1;
- (void)_updateWidgetLoadingIfNeeded;
- (void)_setNeedsUpdateWidgetLoading;
- (void)_invalidateElementsToLoad;
- (void)_updateElementsToLoadIfNeeded;
- (id)widgetAtLocation:(struct CGPoint)arg1;
- (struct CGRect)frameForWidget:(id)arg1;
- (id)headerTilingControllerForWidget:(id)arg1;
- (id)footerTilingControllerForWidget:(id)arg1;

@end
