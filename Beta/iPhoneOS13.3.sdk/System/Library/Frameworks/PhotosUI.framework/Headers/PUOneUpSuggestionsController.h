/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, PUAssetReference, PUBrowsingViewModel, PUOneUpSuggestionsProvider;

@protocol PUOneUpSuggestionsControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUOneUpSuggestionsController : NSObject

{
    _Bool _willPerformUpdates;
    _Bool _isPerformingUpdates;
    struct {
        _Bool focusedAssetReference;
        _Bool focusedLongEnough;
        _Bool activeSuggestionsWindow;
    } _needsUpdateFlags;
    struct {
        _Bool frameForAssetReferenceInCoordinateSpace;
        _Bool viewController;
        _Bool didSelectSuggestionForAssetReference;
        _Bool canShowSuggestion;
    } _delegateRespondsTo;
    _Bool _viewVisible;
    _Bool _inFocus;
    _Bool _focusedLongEnough;
    PUOneUpSuggestionsProvider *_suggestionsProvider;
    PUBrowsingViewModel *_browsingViewModel;
    id <PUOneUpSuggestionsControllerDelegate> _delegate;
    PUAssetReference *_focusedAssetReference;
    double _lastFocusedAssetReferenceChangeTime;
    NSMutableDictionary *_suggestionInfos;
}

@property (nonatomic, getter=isInFocus) _Bool inFocus;
@property (retain, nonatomic) PUAssetReference *focusedAssetReference;
@property (nonatomic) double lastFocusedAssetReferenceChangeTime;
@property (nonatomic, getter=isFocusedLongEnough) _Bool focusedLongEnough;
@property (nonatomic, readonly) NSMutableDictionary *suggestionInfos;
@property (nonatomic, readonly) PUOneUpSuggestionsProvider *suggestionsProvider;
@property (nonatomic, readonly) PUBrowsingViewModel *browsingViewModel;
@property (weak, nonatomic) id <PUOneUpSuggestionsControllerDelegate> delegate;
@property (nonatomic, getter=isViewVisible) _Bool viewVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)invalidateLayout;
- (_Bool)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (struct CGRect)contextualNotification:(id)arg1 containingFrameInCoordinateSpace:(id)arg2;
- (id)preferredContainerViewForContextualNotification:(id)arg1;
- (long long)preferredAnimationForContextualNotification:(id)arg1;
- (_Bool)contextualNotification:(id)arg1 shouldPassthroughPoint:(struct CGPoint)arg2 inCoordinateSpace:(id)arg3;
- (void)contextualNotificationWasTapped:(id)arg1;
- (void)contextualNotificationWasDiscarded:(id)arg1;
- (void)contextualNotificationDidDisappear:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (id)initWithSuggestionsProvider:(id)arg1 browsingViewModel:(id)arg2;
- (void)invalidateSuggestions;
- (void)_updateSuggestions;
- (void)invalidateLayoutForAssetReference:(id)arg1;
- (void)hideSuggestionForAssetReference:(id)arg1;
- (void)markSuggestionAsSeenForAssetReference:(id)arg1;
- (id)_suggestionInfoForAssetReference:(id)arg1 createIfNeeded:(_Bool)arg2;
- (void)_removeSuggestionInfoForAssetReference:(id)arg1;
- (void)_handleDataSourceChange:(id)arg1;
- (_Bool)_canBeginDisplayingSuggestionsForAssetReference:(id)arg1;
- (_Bool)_canKeepDisplayingSuggestionsForAssetReference:(id)arg1;
- (void)_requestSuggestionForAssetReference:(id)arg1;
- (void)_handleSuggestion:(id)arg1 error:(id)arg2 forAssetReference:(id)arg3;
- (id)_assetReferenceForContextualNotification:(id)arg1;
- (void)_invalidateFocusedAssetReference;
- (void)_updateFocusedAssetReferenceIfNeeded;
- (void)_invalidateFocusedLongEnough;
- (void)_updateFocusedLongEnoughIfNeeded;
- (void)_invalidateActiveSuggestionsWindow;
- (void)_updateActiveSuggestionsWindowIfNeeded;
- (void)_invalidateInFocus;
- (void)_updateInFocus;
- (void)_invalidateSuggestionsVisibility;
- (void)_dismissSuggestionInfo:(id)arg1;

@end
