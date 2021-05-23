/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class NSObject, PHMomentShare, PXAssetsDataSource, PXCMMContext, PXCMMSendBackSuggestion;

@protocol OS_dispatch_queue;

@interface PXCMMSendBackSuggestionSource : PXObservable

{
    NSObject<OS_dispatch_queue> *_fetchQueue;
    unsigned long long _sourceType;
    _Bool _hasInitiatedFetchRequest;
    _Bool _shouldShowBanner;
    PXAssetsDataSource *_assetsDataSource;
    PHMomentShare *_originatingMomentShare;
    PXCMMSendBackSuggestion *_suggestion;
    PXCMMContext *_sendBackContext;
}

@property (nonatomic, readonly) PXAssetsDataSource *assetsDataSource;
@property (nonatomic, readonly) PHMomentShare *originatingMomentShare;
@property (nonatomic, readonly) PXCMMSendBackSuggestion *suggestion;
@property (nonatomic, readonly) PXCMMContext *sendBackContext;
@property (nonatomic, readonly) _Bool shouldShowBanner;

+ (id)new;
+ (id)sendBackContextTimeLocationMatching:(id)arg1 sourceType:(unsigned long long)arg2;
+ (id)sendBackContextOverlappingTimeFromStartDate:(id)arg1 endDate:(id)arg2 sourceType:(unsigned long long)arg3;
+ (id)_sendBackFetchResultUsingOverlappingTimeFromStartDate:(id)arg1 endDate:(id)arg2;
+ (id)_sendBackFetchResultUsingTimeLocationMatching:(id)arg1;
+ (id)_assetsInDateRanges:(id)arg1;
+ (id)_filterAssets:(id)arg1 byLocations:(id)arg2 maxDistanceMeters:(double)arg3;

- (id)init;
- (void)startLoading;
- (void)setSuggestion:(id)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)mutableChangeObject;
- (id)initWithAssetsDataSource:(id)arg1 sourceType:(unsigned long long)arg2 originatingMomentShare:(id)arg3;
- (_Bool)_existingOverlappingMomentSharesFromOwnerForAssetCollection:(id)arg1;
- (id)_fetchSuggestedParticipantsForAssetCollection:(id)arg1;
- (void)_fetchSuggestedSendBackContext;
- (void)_fetchQueue_fetchSuggestedSendBackContext;
- (void)setSendBackContext:(id)arg1;
- (void)setShouldShowBanner:(_Bool)arg1;
- (id)_allMetadataAssets;
- (id)_createSendBackContext;
- (id)sendBackContextPhotosGraphBasedWithSourceType:(unsigned long long)arg1;
- (id)_sendBackFetchResultUsingPhotosGraph;

@end
