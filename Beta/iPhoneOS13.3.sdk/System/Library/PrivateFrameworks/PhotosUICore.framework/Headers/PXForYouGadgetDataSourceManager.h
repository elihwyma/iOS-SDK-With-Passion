/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGadgetDataSourceManager.h>

@class NSArray, NSString, PXCMMInvitationsHorizontalGadgetProvider, PXCMMSuggestionsHorizontalGadgetProvider, PXCloudWelcomeGadgetProvider, PXForYouEditSuggestionsGadgetProvider, PXForYouFooterGadgetProvider, PXForYouGadgetPriorityManager, PXForYouMemoryGadgetProvider, PXForYouRecentInterestSuggestionsGadgetProvider, PXGadgetNavigationHelper, PXHorizontalCollectionGadgetProvider, PXPeopleQuestionsGadgetProvider, PXSampleGadgetProvider, PXSampleSuggestionProvider, PXSharedAlbumActivityHorizontalGadgetProvider, PXTapToRadarGadgetProvider;

@protocol PXGadgetDelegate, PXGadgetTransition;

@interface PXForYouGadgetDataSourceManager : PXGadgetDataSourceManager

{
    NSArray *_gadgetProviders;
    _Bool _isLaunchedToTest;
    PXForYouGadgetPriorityManager *_priorityManager;
    PXCMMInvitationsHorizontalGadgetProvider *_CMMInvitationsHorizontalGadgetProvider;
    PXCMMSuggestionsHorizontalGadgetProvider *_CMMSuggestionsHorizontalGadgetProvider;
    PXCloudWelcomeGadgetProvider *_CMMCloudWelcomeGadgetProvider;
    PXSharedAlbumActivityHorizontalGadgetProvider *_icpsActivityHorizontalGadgetProvider;
    PXHorizontalCollectionGadgetProvider *_editSuggestionsHorizontalGadgetProvider;
    PXForYouEditSuggestionsGadgetProvider *_editSuggestionsGadgetProvider;
    PXHorizontalCollectionGadgetProvider *_recentInterestSuggestionsHorizontalGadgetProvider;
    PXForYouRecentInterestSuggestionsGadgetProvider *_recentInterestsSuggestionsGadgetProvider;
    PXForYouMemoryGadgetProvider *_memoryGadgetProvider;
    PXPeopleQuestionsGadgetProvider *_questionsGadgetProvider;
    PXHorizontalCollectionGadgetProvider *_questionsHorizontalGadgetProvider;
    PXForYouFooterGadgetProvider *_footerGadgetProvider;
    PXSampleSuggestionProvider *_sampleSuggestionGadgetsProvider;
    PXSampleGadgetProvider *_sampleGadgetsProvider;
    PXTapToRadarGadgetProvider *_tapToRadarProvider;
}

@property (retain, nonatomic) PXCMMInvitationsHorizontalGadgetProvider *CMMInvitationsHorizontalGadgetProvider;
@property (retain, nonatomic) PXCMMSuggestionsHorizontalGadgetProvider *CMMSuggestionsHorizontalGadgetProvider;
@property (retain, nonatomic) PXCloudWelcomeGadgetProvider *CMMCloudWelcomeGadgetProvider;
@property (retain, nonatomic) PXSharedAlbumActivityHorizontalGadgetProvider *icpsActivityHorizontalGadgetProvider;
@property (retain, nonatomic) PXHorizontalCollectionGadgetProvider *editSuggestionsHorizontalGadgetProvider;
@property (retain, nonatomic) PXForYouEditSuggestionsGadgetProvider *editSuggestionsGadgetProvider;
@property (retain, nonatomic) PXHorizontalCollectionGadgetProvider *recentInterestSuggestionsHorizontalGadgetProvider;
@property (retain, nonatomic) PXForYouRecentInterestSuggestionsGadgetProvider *recentInterestsSuggestionsGadgetProvider;
@property (retain, nonatomic) PXForYouMemoryGadgetProvider *memoryGadgetProvider;
@property (retain, nonatomic) PXPeopleQuestionsGadgetProvider *questionsGadgetProvider;
@property (retain, nonatomic) PXHorizontalCollectionGadgetProvider *questionsHorizontalGadgetProvider;
@property (retain, nonatomic) PXForYouFooterGadgetProvider *footerGadgetProvider;
@property (retain, nonatomic) PXSampleSuggestionProvider *sampleSuggestionGadgetsProvider;
@property (retain, nonatomic) PXSampleGadgetProvider *sampleGadgetsProvider;
@property (retain, nonatomic) PXTapToRadarGadgetProvider *tapToRadarProvider;
@property (nonatomic, readonly) PXForYouGadgetPriorityManager *priorityManager;
@property (nonatomic, readonly) _Bool isLaunchedToTest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <PXGadgetTransition> gadgetTransition;
@property (nonatomic, readonly) PXGadgetNavigationHelper *rootNavigationHelper;
@property (weak, nonatomic) id <PXGadgetDelegate> nextGadgetResponder;

- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_calendarDayChanged;
- (void)presentationRequestForWelcomeCloudViewController:(id)arg1;
- (void)didUpdateCloudPhotoLibraryEnablement:(id)arg1;
- (void)removeCachedProviders;
- (id)gadgetProviders;
- (CDUnknownBlockType)gadgetSortComparator;
- (id)initWithPriorityManager:(id)arg1 isLaunchedToTest:(_Bool)arg2;
- (void)didLoadDataForPriorities;
- (CDUnknownBlockType)gadgetProviderSortComparator;
- (unsigned long long)_adjustGadgetTypeForRanking:(unsigned long long)arg1;
- (long long)_adjustComparasionForInbox:(long long)arg1 gadgetType1:(unsigned long long)arg2 gadgeType2:(unsigned long long)arg3;
- (long long)_compareRank1:(long long)arg1 rank2:(long long)arg2;
- (id)filteredUndisplayedGadgets:(id)arg1;
- (_Bool)_resetSortingRanksIfNecessary;

@end
