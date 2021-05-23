/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSettings.h>

@class NSString, PXCMMWorkflowCoordinator;

@interface PXCompleteMyMomentSettings : PXSettings

{
    _Bool _cmmFeatureEnabled;
    _Bool _showCMMSettingsAtTopLevel;
    _Bool _alwaysSortAfterAddMore;
    _Bool _preventNilTitles;
    _Bool _enableLightCuration;
    _Bool _showTitle;
    _Bool _showSubtitle;
    _Bool _showOtherTitle;
    _Bool _showMessage;
    _Bool _showSenderField;
    _Bool _showPeopleSuggestions;
    _Bool _showMergeCandidateSuggestionsAfterBootstrapNaming;
    _Bool _allowOneUpGesture;
    _Bool _allowSwipeSelection;
    _Bool _simulateImport;
    _Bool _simulateImportFailure;
    _Bool _allowLayoutTransitionGesture;
    _Bool _shouldShowInlineAddButton;
    _Bool _showAttachedHeaderView;
    _Bool _showFloatingBanner;
    _Bool _showSendBackFooterView;
    _Bool _showFakeSendBackFooterView;
    _Bool _showSectionHeaders;
    _Bool _sectionHeadersShouldFloat;
    _Bool _showStatusFooter;
    _Bool _showProgressInGrid;
    _Bool _showProgressBannerView;
    _Bool _showProgressBannerViewPaused;
    _Bool _directSendMessages;
    _Bool _fakeMomentShareURL;
    _Bool _autoAcceptBubbles;
    _Bool _simulateDelays;
    _Bool _showURLInBubble;
    _Bool _showDebugStatus;
    _Bool _alwaysTapToRetry;
    _Bool _useDebugColors;
    _Bool _showMessageTextEntryGadget;
    _Bool _insertNewRecipientsAtTheEnd;
    _Bool _graphSuggestionEnabled;
    _Bool _showCMMSuggestionGadgets;
    _Bool _showCMMInvitationGadgets;
    _Bool _showSampleGadgets;
    _Bool _shouldBakeInIfLivePhotoPlaybackDisabled;
    _Bool _shouldBakeInIfLivePhotoMuted;
    _Bool _shouldBakeInIfAdjustedByThirdParty;
    _Bool _shouldBakeInIfCropped;
    _Bool _shouldBakeInIfTimelineTrimmed;
    _Bool _shouldBakeInIfPortraitDepthEffectEnabled;
    _Bool _shouldBakeInIfContainsPenultimateResources;
    _Bool _shouldIncludeSpatialOvercaptureResources;
    long long _cmmShareSheetBehavior;
    long long _shareSheetLinkAssetCountThreshold;
    unsigned long long _shareSheetLinkTotalFileSizeThresholdMB;
    long long _invitationsDataSourceType;
    long long _suggestionsDataSourceType;
    unsigned long long _suggestionsMatchingStrategy;
    long long _suggestionsScrollDirection;
    long long _publishTransport;
    long long _peopleSuggestionsDataSourceType;
    long long _sendBackDataSourceType;
    long long _initialLayoutType;
    long long _reviewFlow;
    long long _reviewFlowDataSourceType;
    long long _overrideNumberOfColumnsInPortrait;
    long long _overrideNumberOfColumnsInLandscape;
    long long _sharingLinkType;
    double _peopleSuggestionsTimeout;
    long long _sidebarType;
}

@property (retain, nonatomic) PXCMMWorkflowCoordinator *workflowCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool cmmFeatureEnabled;
@property (nonatomic) _Bool showCMMSettingsAtTopLevel;
@property (nonatomic) long long cmmShareSheetBehavior;
@property (nonatomic) long long shareSheetLinkAssetCountThreshold;
@property (nonatomic) unsigned long long shareSheetLinkTotalFileSizeThresholdMB;
@property (nonatomic) _Bool alwaysSortAfterAddMore;
@property (nonatomic) long long invitationsDataSourceType;
@property (nonatomic) _Bool preventNilTitles;
@property (nonatomic) long long suggestionsDataSourceType;
@property (nonatomic) unsigned long long suggestionsMatchingStrategy;
@property (nonatomic) long long suggestionsScrollDirection;
@property (nonatomic) _Bool enableLightCuration;
@property (nonatomic) _Bool showTitle;
@property (nonatomic) _Bool showSubtitle;
@property (nonatomic) _Bool showOtherTitle;
@property (nonatomic) _Bool showMessage;
@property (nonatomic) _Bool showSenderField;
@property (nonatomic) _Bool showPeopleSuggestions;
@property (nonatomic) _Bool showMergeCandidateSuggestionsAfterBootstrapNaming;
@property (nonatomic) long long publishTransport;
@property (nonatomic) long long peopleSuggestionsDataSourceType;
@property (nonatomic) long long sendBackDataSourceType;
@property (nonatomic) long long initialLayoutType;
@property (nonatomic) _Bool allowOneUpGesture;
@property (nonatomic) _Bool allowSwipeSelection;
@property (nonatomic) _Bool simulateImport;
@property (nonatomic) _Bool simulateImportFailure;
@property (nonatomic) long long reviewFlow;
@property (nonatomic) long long reviewFlowDataSourceType;
@property (nonatomic) _Bool allowLayoutTransitionGesture;
@property (nonatomic) _Bool shouldShowInlineAddButton;
@property (nonatomic) _Bool showAttachedHeaderView;
@property (nonatomic) _Bool showFloatingBanner;
@property (nonatomic) _Bool showSendBackFooterView;
@property (nonatomic) _Bool showFakeSendBackFooterView;
@property (nonatomic) _Bool showSectionHeaders;
@property (nonatomic) _Bool sectionHeadersShouldFloat;
@property (nonatomic) _Bool showStatusFooter;
@property (nonatomic) _Bool showProgressInGrid;
@property (nonatomic) _Bool showProgressBannerView;
@property (nonatomic) _Bool showProgressBannerViewPaused;
@property (nonatomic) _Bool directSendMessages;
@property (nonatomic) _Bool fakeMomentShareURL;
@property (nonatomic) _Bool autoAcceptBubbles;
@property (nonatomic) _Bool simulateDelays;
@property (nonatomic) _Bool showURLInBubble;
@property (nonatomic) _Bool showDebugStatus;
@property (nonatomic) _Bool alwaysTapToRetry;
@property (nonatomic) long long overrideNumberOfColumnsInPortrait;
@property (nonatomic) long long overrideNumberOfColumnsInLandscape;
@property (nonatomic) _Bool useDebugColors;
@property (nonatomic) _Bool showMessageTextEntryGadget;
@property (nonatomic) _Bool insertNewRecipientsAtTheEnd;
@property (nonatomic) long long sharingLinkType;
@property (nonatomic) _Bool graphSuggestionEnabled;
@property (nonatomic) double peopleSuggestionsTimeout;
@property (nonatomic) long long sidebarType;
@property (nonatomic) _Bool showCMMSuggestionGadgets;
@property (nonatomic) _Bool showCMMInvitationGadgets;
@property (nonatomic) _Bool showSampleGadgets;
@property (nonatomic) _Bool shouldBakeInIfLivePhotoPlaybackDisabled;
@property (nonatomic) _Bool shouldBakeInIfLivePhotoMuted;
@property (nonatomic) _Bool shouldBakeInIfAdjustedByThirdParty;
@property (nonatomic) _Bool shouldBakeInIfCropped;
@property (nonatomic) _Bool shouldBakeInIfTimelineTrimmed;
@property (nonatomic) _Bool shouldBakeInIfPortraitDepthEffectEnabled;
@property (nonatomic) _Bool shouldBakeInIfContainsPenultimateResources;
@property (nonatomic) _Bool shouldIncludeSpatialOvercaptureResources;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (id)transientProperties;

- (void)setDefaultValues;
- (id)parentSettings;
- (void)workflowCoordinator:(id)arg1 workflowViewController:(id)arg2 didFinishSession:(id)arg3 withActivityState:(unsigned long long)arg4;

@end
