/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIActivityViewController.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSArray, NSOrderedSet, NSString, PLProgressView, PUActivityItemSourceController, PUActivityProgressController, PUActivitySharingController, PUActivitySharingViewModel, PUSharingHeaderController, UIView;

@protocol PUActivityViewControllerDelegate, PXDisplayAsset, UIActivityItemLinkPresentationSource;

@interface PUActivityViewController : UIActivityViewController <Swift>

{
    struct __CFString *_aggregateKey;
    PLProgressView *_remakerProgressView;
    UIView *_topBorderView;
    PUActivityItemSourceController *_itemSourceController;
    id <UIActivityItemLinkPresentationSource> _linkPresentation;
    long long _numberOfAssetsToPrepare;
    long long _numberOfAssetPreparationsCompleted;
    double _currentAssetPreparationProgress;
    _Bool _isDismissed;
    _Bool _shouldUpdateVisibleItemsWhenReady;
    _Bool _isPreparingAssets;
    _Bool _preparedAsCloudLink;
    PUSharingHeaderController *_sharingHeaderController;
    struct CGRect _lastSelectedActivityFrame;
    _Bool _readyForInteraction;
    _Bool _shouldAutomaticallyUseCMMInMessagesIfThresholdMet;
    _Bool _shareAsCMM;
    _Bool _excludeLiveness;
    _Bool _excludeLocation;
    _Bool _sendAsOriginals;
    PUActivitySharingViewModel *_sharingViewModel;
    NSArray *_photosActivities;
    id <PUActivityViewControllerDelegate> _delegate;
    CDUnknownBlockType _readyToInteractHandler;
    CDUnknownBlockType _ppt_readyToInteractHandler;
    PUActivitySharingController *_activitySharingController;
    PUActivityProgressController *_progressController;
}

@property (retain, nonatomic) PUActivitySharingController *activitySharingController;
@property (retain, nonatomic) PUActivityProgressController *progressController;
@property (nonatomic) _Bool shouldAutomaticallyUseCMMInMessagesIfThresholdMet;
@property (nonatomic) _Bool shareAsCMM;
@property (nonatomic) _Bool excludeLiveness;
@property (nonatomic) _Bool excludeLocation;
@property (nonatomic) _Bool sendAsOriginals;
@property (nonatomic, readonly) PUActivitySharingViewModel *sharingViewModel;
@property (nonatomic, readonly) NSArray *photosActivities;
@property (weak, nonatomic) id <PUActivityViewControllerDelegate> delegate;
@property (nonatomic, getter=isReadyForInteraction) _Bool readyForInteraction;
@property (nonatomic) const struct __CFString *aggregateKey;
@property (copy, nonatomic, readonly) NSOrderedSet *assets;
@property (copy, nonatomic) CDUnknownBlockType readyToInteractHandler;
@property (copy, nonatomic) CDUnknownBlockType ppt_readyToInteractHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) unsigned long long sourceOrigin;
@property (copy, nonatomic, readonly) id <PXDisplayAsset> keyAsset;
@property (copy, nonatomic, readonly) NSOrderedSet *orderedSelectedAssets;
@property (nonatomic, readonly) struct PXAssetMediaTypeCount assetTypeCount;
@property (nonatomic, readonly) _Bool isActionSheet;

+ (id)new;
+ (_Bool)cmmThresholdIsMetForAssetItems:(id)arg1;
+ (_Bool)needsConfidentialityCheckForActivityType:(id)arg1;
+ (id)preparationErrorFromErrors:(id)arg1;
+ (id)defaultActivityTypeOrder;
+ (id)photosApplicationActivities;
+ (_Bool)isOutboundShareActivity:(id)arg1;
+ (id)actionSheetPhotosApplicationActivities;
+ (_Bool)cmmAssetCountThresholdIsMetForAssetItems:(id)arg1;
+ (_Bool)cmmFileSizeThresholdIsMetForAssetItems:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)_cancel;
- (void)setCompletionWithItemsHandler:(CDUnknownBlockType)arg1;
- (id)_titleForActivity:(id)arg1;
- (void)setPhotosCarouselViewController:(id)arg1;
- (_Bool)_customizationAvailableForActivityViewController:(id)arg1;
- (void)_performActivity:(id)arg1;
- (id)_customizationGroupsForActivityViewController:(id)arg1;
- (void)_prepareActivity:(id)arg1;
- (_Bool)_shouldShowSystemActivityType:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (_Bool)prepareForDismissingForced:(_Bool)arg1;
- (void)updateVisibleShareActionsIfNeeded;
- (void)setAssetItems:(id)arg1;
- (void)addAssetItem:(id)arg1;
- (void)removeAssetItem:(id)arg1;
- (void)activityItemSourceController:(id)arg1 willBeginPreparationWithActivityType:(id)arg2 preparationType:(unsigned long long)arg3;
- (void)activityItemSourceController:(id)arg1 didFinishPreparationForActivityType:(id)arg2 preparationType:(unsigned long long)arg3 withItems:(id)arg4 didCancel:(_Bool)arg5 errors:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (id)initWithAssetItems:(id)arg1 photosApplicationActivities:(id)arg2 linkPresentation:(id)arg3;
- (id)initWithAssetItems:(id)arg1 photosApplicationActivities:(id)arg2 linkPresentation:(id)arg3 assetIdentifiers:(id)arg4 sharingViewModel:(id)arg5;
- (_Bool)_shouldUseModernDesign;
- (void)_handleShareSheetReadyToInteractCompletion;
- (void)_updateTopBorderView;
- (void)_activity:(id)arg1 category:(long long)arg2 didComplete:(_Bool)arg3;
- (void)_sendCPAnalyticsShareEventWithActivityType:(id)arg1 didComplete:(_Bool)arg2;
- (void)_handleUserCancelWithCompletion:(CDUnknownBlockType)arg1;
- (void)_showRemakerProgressView:(id)arg1 forMail:(_Bool)arg2 withCancelationHandler:(CDUnknownBlockType)arg3;
- (void)_removeRemakerProgressView;
- (void)removeProgressUIAnimated:(_Bool)arg1 withDelay:(_Bool)arg2;
- (void)showProgressUIAnimated:(_Bool)arg1 withDelay:(_Bool)arg2 cancellationHandler:(CDUnknownBlockType)arg3;
- (void)updateProgressUITitle;
- (void)_showSharingWasInterruptedForErrors:(id)arg1 withIndividualAssets:(id)arg2 itemSourcesByAssetUUID:(id)arg3 toActivityType:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_prepareAssetsForActivity:(id)arg1 forcePreparationAsMomentShareLink:(_Bool)arg2;
- (void)_presentConfidentialityWarningIfNeededForActivity:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)mailActivity:(id)arg1 displayVideoRemakerProgressView:(id)arg2;
- (void)_sharingManagerDidBeginPublishing:(id)arg1;
- (void)_cleanUpActivityState;
- (void)replaceAssetItem:(id)arg1 withAssetItem:(id)arg2;
- (void)_handlePostReadyToInteractUpdatesIfNeeded;
- (void)_updateSourceControllerPreferredPreparationBehavior;
- (void)_updateSourceControllerSharingPreferencesInAllItems;
- (_Bool)_canShowSendAsOriginalsSwitchInObjectManipulationHeader;
- (void)_updateSharingHeaderIfNeeded;
- (void)_sharingStyleDidChangeToExpanded:(id)arg1;
- (_Bool)_shouldPresentAirplayAlertForActivity:(id)arg1;
- (void)_presentAlertIfNeededForActivity:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_adjustPreparationOptionsIfNeededForActivity:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_presentCMMSuggestionAlertForActivity:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_shouldSuggestSharingAsCMMForActivity:(id)arg1;
- (_Bool)_shouldAutomaticallySendAsCMMForActivity:(id)arg1;
- (void)ppt_performActivityOfType:(id)arg1;
- (void)ppt_cancelActivity;

@end
