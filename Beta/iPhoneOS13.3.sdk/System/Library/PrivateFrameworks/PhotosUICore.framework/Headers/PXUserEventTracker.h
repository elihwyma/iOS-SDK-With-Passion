/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXUserEventTrackerCommon.h>

@class NSHashTable;

@interface PXUserEventTracker : PXUserEventTrackerCommon

{
    double _timeLoggedOnDetailViewWillAppear;
    double _timeLoggedOnMemoriesFeedWillAppear;
    unsigned long long _totalNumberOfRelatedJumps;
    unsigned long long _MaxDepthOfRelatedJumps;
    NSHashTable *__relatedLookupTable;
}

@property (retain, nonatomic, setter=_setRelatedLookupTable:) NSHashTable *_relatedLookupTable;

+ (id)sharedInstance;
+ (_Bool)_isMemoryTriggered:(id)arg1;

- (id)init;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)willViewDetailsWithCurrentContext:(id)arg1;
- (void)didFinishViewingDetailsWithCurrentContext:(id)arg1;
- (void)willViewMemoriesFeedView;
- (void)didFinishViewingMemoriesFeedView;
- (void)didViewDetailsForAssetCollection:(id)arg1;
- (void)didPlayMiroMovieForAssetCollection:(id)arg1;
- (void)didConfirmDeleteOfMemory;
- (void)didFavoriteMemory;
- (void)didCreateMemoryViaAddToMemories;
- (void)_resetDetailViewTraversalStatistics;
- (void)logInterestingMemoryNotificationSeenCount;
- (void)logInterestingMemoryNotificationRespondedCount;
- (void)didPresentOneUpFromOrigin:(long long)arg1;
- (void)didNavigateInOneUpFromOrigin:(long long)arg1;
- (_Bool)isEventSourceSenderAppearingForTheFirstTime:(id)arg1;
- (void)logViewCountForLogState:(unsigned long long)arg1;
- (void)logViewCountForLogSubState:(unsigned long long)arg1;
- (void)logViewCountForLogSubSubState:(unsigned long long)arg1;
- (void)logCounterValuesForLogState:(unsigned long long)arg1 duration:(double)arg2;
- (void)logCounterValuesForLogSubState:(unsigned long long)arg1 duration:(double)arg2;
- (void)logCounterValuesForLogSubSubState:(unsigned long long)arg1 duration:(double)arg2;
- (void)logImpressionCountForEventSource:(unsigned long long)arg1;
- (void)_logAggdAddValueForScalarKey:(struct __CFString *)arg1 value:(long long)arg2;
- (void)_logAggdDurationCounterForLogState:(unsigned long long)arg1 duration:(double)arg2;
- (void)_logAggdDurationCounterForLogSubState:(unsigned long long)arg1 duration:(double)arg2;
- (void)_logAggdDurationCounterForLogSubSubState:(unsigned long long)arg1 duration:(double)arg2;
- (void)_logAggdRelatedJumpStatistics:(unsigned long long)arg1 totalJumpCount:(unsigned long long)arg2;
- (void)logPeopleHomeCount;
- (void)logPeopleDetailCount;
- (void)logPeopleMeSuggestionConfirmed:(_Bool)arg1;
- (void)logMergeCandidateInlineControlWithSignature:(unsigned long long)arg1;
- (void)logBootstrapMergeCandidatesVerifiedConfirmed:(unsigned long long)arg1 verifiedRejected:(unsigned long long)arg2 unverifiedConfirmed:(unsigned long long)arg3 unverifiedRejected:(unsigned long long)arg4;
- (void)logBootstrapMergeCandidateFaceCountVerifiedConfirmed:(unsigned long long)arg1 verifiedRejected:(unsigned long long)arg2 unverifiedConfirmed:(unsigned long long)arg3 unverifiedRejected:(unsigned long long)arg4;
- (void)logPeopleConfirmAdditionalViewCount;
- (void)logConfirmAdditionalSuggestionsConfirmed:(unsigned long long)arg1 rejected:(unsigned long long)arg2;
- (void)logConfirmAdditionalVisionFaceCountConfirmed:(unsigned long long)arg1 rejected:(unsigned long long)arg2;
- (void)logConfirmAdditionalMergeCandidateFaceCountVerifiedConfirmed:(unsigned long long)arg1 verifiedRejected:(unsigned long long)arg2 unverifiedConfirmed:(unsigned long long)arg3 unverifiedRejected:(unsigned long long)arg4;
- (void)logConfirmAdditionalMergeCandidatesVerifiedConfirmed:(unsigned long long)arg1 verifiedRejected:(unsigned long long)arg2 unverifiedConfirmed:(unsigned long long)arg3 unverifiedRejected:(unsigned long long)arg4;
- (void)logNamingTypeSelection:(unsigned long long)arg1;
- (void)logPeopleHomeFavoritePersonCount:(unsigned long long)arg1 totalPersonCount:(unsigned long long)arg2;
- (void)logPeopleHomeNumberOfPeopleWithContactName:(unsigned long long)arg1 numberOfPeopleWithStringName:(unsigned long long)arg2;
- (void)logPeopleAddToPeopleHome;
- (void)logPeopleRemoveFromPeopleHome;
- (void)logPeopleDetailKeyPhotoChanged;
- (void)logPeopleDetailNotThisPerson;
- (void)logPeopleDetailShowFaces;
- (void)logUserDidSelectGadgetAccessoryButtonWithKey:(struct __CFString *)arg1;
- (void)logForYouMemoriesFeedCount;
- (void)logForYouMemoriesDetailsCount;
- (void)logForYouContextualMemoriesDetailsCount;
- (void)logForYouSharedAlbumInvitationAcceptedCount;
- (void)logForYouSharedAlbumInvitationDeclinedCount;
- (void)logForYouSharedAlbumInvitationReportedAsJunkCount;
- (void)logForYouNavigatedToSharedAlbumActivityViewFromCollageView;
- (void)logForYouNavigatedToSharedAlbumActivityViewFromRecentActivityEntry;
- (void)logForYouSuggestionViewedCount;
- (void)logForYouSuggestionViewed1UpCount;
- (void)logForYouSuggestionSharedCount;
- (void)logForYouSuggestionSavedCount;
- (void)logForYouInboxViewedCount;
- (void)logForYouInboxItemSelectedWithType:(long long)arg1;
- (void)logSearchResultType:(unsigned long long)arg1;
- (void)logTappedZKItemType:(long long)arg1;
- (void)logZKSectionVisible:(_Bool)arg1 forSectionType:(long long)arg2;
- (void)logSearchWordEmbeddingsPresented;
- (void)logSearchWordEmbeddingSelected;
- (void)logSearchWordCompletionTapped;
- (void)logSearchNextTokenSuggestionTapped;
- (void)logSearchZeroKeywordSearch;
- (void)logSearchTapSearch;
- (void)logSearchSiriFoundResults:(_Bool)arg1;
- (void)logSearchSuccessfulResult:(_Bool)arg1;
- (void)logSearchPerSessionNextTokenSuggestionTapped:(_Bool)arg1 wordCompletionTapped:(_Bool)arg2;
- (void)logSearchNumberOfTermsInSearchFieldOnSuccessfulSearch:(unsigned long long)arg1;
- (void)logNavigationListViewTapWithKey:(struct __CFString *)arg1;
- (void)livePhotoEffectOptionsAppeared;
- (void)livePhotoEffectRenderingFailed;
- (void)livePhotoEffectPreviewFinishedRendering:(double)arg1;
- (void)livePhotoEffectSelected:(long long)arg1;
- (void)livePhotoEffectSavingFailed;
- (void)livePhotoEffectSavingFinished:(double)arg1;
- (void)livePhotoEffectReverted;
- (void)livePhotoEffectSuggested:(long long)arg1;
- (void)livePhotoEffectSuggestionApplied;
- (void)livePhotoEffectShared;
- (void)logFirstTimeExpericeReadiness:(_Bool)arg1 forLibrarySize:(long long)arg2;
- (struct __CFString *)_aggdKeyForFirstTimeExperienceIsReady:(_Bool)arg1 librarySize:(long long)arg2;
- (void)_aggdDurationLoggingDryrunForSubState:(unsigned long long)arg1 duration:(double)arg2;
- (void)_aggdDurationLoggingDryrun:(unsigned long long)arg1 duration:(double)arg2;
- (void)_aggdJumpCountLoggingDryrun:(unsigned long long)arg1 totalJumpCount:(unsigned long long)arg2;

@end
