/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCMMComponentViewController.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSMutableSet, NSSet, NSString, PXAssetReference, PXBasicTileAnimator, PXCMMBannerTileController, PXCMMFooterViewModel, PXCMMProgressBannerView, PXCMMSendBackBannerView, PXCMMSendBackSuggestionSource, PXCMMSpec, PXCMMSpecManager, PXContextualNotification, PXLayoutGenerator, PXMomentShareStatusPresentation, PXOneUpPresentation, PXPhotosGlobalFooterView, PXSectionedLayoutEngine, PXSwipeSelectionManager, PXTilingController, PXUIAssetsScene, PXUIScrollViewController, PXUITapGestureRecognizer, PXUpdater, UILongPressGestureRecognizer;

@protocol PXCMMAssetsViewControllerDelegate;

@interface PXCMMAssetsViewController : PXCMMComponentViewController <Swift>

{
    PXUpdater *_updater;
    PXLayoutGenerator *_layoutGenerator;
    PXSectionedLayoutEngine *_layoutEngine;
    _Bool _layoutAnimationsGloballyDisabled;
    PXUIScrollViewController *_scrollViewController;
    PXBasicTileAnimator *_tileAnimator;
    PXTilingController *_tilingController;
    PXUIAssetsScene *_sceneController;
    PXCMMProgressBannerView *_progressBannerView;
    NSArray *_progressBannerViewConstraints;
    PXUITapGestureRecognizer *_tapSelectionGesture;
    PXSwipeSelectionManager *_swipeSelectionManager;
    PXUITapGestureRecognizer *_layoutTransitionGesture;
    UILongPressGestureRecognizer *_longPressGesture;
    PXAssetReference *_navigatedAssetReference;
    PXCMMSpecManager *_specManager;
    PXCMMSpec *_spec;
    PXMomentShareStatusPresentation *_momentShareStatusPresentationForFooter;
    PXCMMFooterViewModel *_statusFooterViewModel;
    PXPhotosGlobalFooterView *_measuringStatusFooterView;
    PXCMMBannerTileController *_measuringBannerTile;
    PXCMMSendBackBannerView *_measuringSendBackBannerView;
    PXMomentShareStatusPresentation *_momentShareStatusPresentationForPoster;
    NSMutableSet *_inUseTiles;
    struct CGSize _knownReferenceSize;
    _Bool _needsToPerformInitialSelection;
    PXCMMSendBackSuggestionSource *_sendBackSuggestionSource;
    PXContextualNotification *_sendBackNotification;
    _Bool _sendBackNotificationWasDiscarded;
    _Bool _sendBackNotificationWasTapped;
    _Bool _receivingActionButtonWasTapped;
    _Bool _didIncrementNumberOfPresentableSendBacks;
    _Bool _didIncrementNumberOfPresentedSendBacks;
    _Bool _isWaitingForSendBackPresentationConfirmationTimeout;
    unsigned long long _sendBackPresentationConfirmationGeneration;
    struct {
        _Bool shouldShowAddMoreButton;
        _Bool didTapAddMoreButton;
        _Bool oneUpPresentation;
    } _delegateRespondsTo;
    _Bool _actionInProgress;
    _Bool _userSelectionEnabled;
    id <PXCMMAssetsViewControllerDelegate> _delegate;
    long long __layoutType;
    NSSet *__hiddenAssetReferences;
    struct UIEdgeInsets _contentInset;
}

@property (nonatomic) long long _layoutType;
@property (nonatomic, readonly) PXOneUpPresentation *_oneUpPresentation;
@property (retain, nonatomic) NSSet *_hiddenAssetReferences;
@property (nonatomic) _Bool userSelectionEnabled;
@property (nonatomic) struct UIEdgeInsets contentInset;
@property (weak, nonatomic) id <PXCMMAssetsViewControllerDelegate> delegate;
@property (nonatomic, getter=isActionInProgress) _Bool actionInProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithSession:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_updateStyle;
- (void)_handleLongPress:(id)arg1;
- (void)_handleTap:(id)arg1;
- (void)_updatePlaceholder;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (id)oneUpPresentationInitialAssetReference:(id)arg1;
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;
- (void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;
- (id)oneUpPresentationActionManager:(id)arg1;
- (id)oneUpPresentationActionManagerForPreviewing:(id)arg1;
- (long long)oneUpPresentationActionContext:(id)arg1;
- (id)oneUpPresentationImportStatusManager:(id)arg1;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (struct PXSimpleIndexPath)_assetIndexPathAtLocation:(struct CGPoint)arg1 padding:(struct UIEdgeInsets)arg2;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (_Bool)actionPerformer:(id)arg1 presentViewController:(struct NSObject *)arg2;
- (_Bool)actionPerformer:(id)arg1 dismissViewController:(struct NSObject *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)photosGlobalFooterView:(id)arg1 presentViewController:(id)arg2;
- (struct PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathClosestLeadingLocation:(struct CGPoint)arg2;
- (struct PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathClosestAboveLocation:(struct CGPoint)arg2;
- (_Bool)swipeSelectionManager:(id)arg1 shouldSelectItemAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (void)swipeSelectionManagerAutomaticallyTransitionToMultiSelectMode:(id)arg1;
- (_Bool)swipeSelectionManagerIsInMultiSelectMode:(id)arg1;
- (struct PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathAtLocation:(struct CGPoint)arg2;
- (void)_setHiddenAssetReferences:(id)arg1;
- (void)_configureLayout:(id)arg1;
- (id)_createNewLayout;
- (unsigned long long)_additionalTileCount;
- (void)_scheduleLayout;
- (void)_preferredContentSizeChanged:(id)arg1;
- (void)_selectAllAssets;
- (void)_deselectAllAssets;
- (void)engineDrivenLayoutReferenceSizeDidChange:(id)arg1;
- (double)engineDrivenLayout:(id)arg1 aspectRatioForItemAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (struct CGRect)engineDrivenLayout:(id)arg1 contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath)arg2 forAspectRatio:(double)arg3;
- (id)assetsScene:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;
- (id)assetsScene:(id)arg1 layoutForDataSource:(id)arg2;
- (void)_invalidateLayoutGenerator;
- (id)_assetReferenceAtPoint:(struct CGPoint)arg1 padding:(struct UIEdgeInsets)arg2;
- (void)_performTilingChangeWithoutAnimationTransition:(CDUnknownBlockType)arg1;
- (void)progressBannerViewLayoutHeightDidChange:(id)arg1;
- (struct CGRect)contextualNotification:(id)arg1 containingFrameInCoordinateSpace:(id)arg2;
- (id)preferredContainerViewForContextualNotification:(id)arg1;
- (void)contextualNotificationWasTapped:(id)arg1;
- (void)contextualNotificationWasDiscarded:(id)arg1;
- (void)contextualNotificationDidAppear:(id)arg1;
- (void)contextualNotificationDidDisappear:(id)arg1;
- (void)didPerformDeletionActionForFooterViewModel:(id)arg1;
- (void)didTapActionButtonInBannerTileController:(id)arg1;
- (_Bool)engineDrivenLayout:(id)arg1 shouldShowDimmingOverlayAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (_Bool)engineDrivenLayout:(id)arg1 shouldShowStatusBadgeAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (long long)engineDrivenLayout:(id)arg1 assetStatusAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (struct CGSize)_maximumThumbnailSize;
- (void)_updateAssetsScene;
- (void)_updateSelectionEnabled;
- (void)_performInitialSelectionIfNeeded;
- (void)_selectCuratedAssets;
- (void)_selectNonCopiedAssets;
- (_Bool)_areAllNotCopiedAssetsSelected;
- (void)_didFindPresentableSendBack;
- (void)_didPresentSendBack;
- (void)_handleSendBackPresentationConfirmationTimeoutForGeneration:(unsigned long long)arg1;
- (void)_checkSendBackPresentationStatus;
- (void)_invokeSendBackAction;
- (id)_createPosterTileController;
- (id)_createStatusFooter;
- (id)_createSendBackBannerView;
- (id)_createSendBackFooter;
- (id)_createBannerTileController;
- (id)_createAddButton;
- (id)_createSectionHeaderController;
- (id)_createStatusTileView;
- (id)_createOverlayTileView;
- (id)_indexPathsForAssetReferences:(id)arg1 inDataSource:(id)arg2;
- (void)_updateGestures;
- (void)_transitionLayoutGesture:(id)arg1;
- (void)_toggleAssetSelectionAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (struct PXSimpleIndexPath)_assetIndexPathAtLocation:(struct CGPoint)arg1 padding:(struct UIEdgeInsets)arg2 kind:(unsigned long long)arg3;
- (long long)_assetImportStateAtIndexPath:(struct PXSimpleIndexPath)arg1 withDataSource:(id)arg2;
- (_Bool)_isAssetAlreadyImportedAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (_Bool)_isAssetAlreadyImportedAtIndexPath:(struct PXSimpleIndexPath)arg1 withEngineDrivenLayout:(id)arg2;
- (void)addButtonTapped:(id)arg1;
- (void)_selectionModeDidChange;
- (void)_updateSelectionIfNeeded;
- (_Bool)_shouldShowOneUpActions;
- (void)_setLayoutType:(long long)arg1;
- (id)_createNewLayoutGeneratorWithReferenceSize:(struct CGSize)arg1;
- (double)_headerHeightFromReferenceSize:(struct CGSize)arg1 insets:(struct UIEdgeInsets)arg2;
- (double)_bannerHeightFromReferenceSize:(struct CGSize)arg1;
- (double)_statusFooterHeightFromReferenceSize:(struct CGSize)arg1 insets:(struct UIEdgeInsets)arg2;
- (double)_sendBackFooterHeightFromReferenceSize:(struct CGSize)arg1;
- (_Bool)_canShowSendBackSuggestion;
- (_Bool)_isSendBackBannerViewContentsAtAllVisible;
- (_Bool)_isSendBackBannerViewContentsFullyVisible;
- (void)presentSendBackNotification;
- (void)_updateSendBackNotification;
- (void)_updateLayoutEngine;
- (void)_configureBannerTile:(id)arg1;
- (_Bool)_shouldShowProgressBanner;
- (double)_progressBannerViewLayoutHeight;
- (void)_updateProgressBannerViewVisibility;
- (void)_updateProgressBannerViewConstraints;

@end
