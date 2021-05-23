/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <NewsToday/NTTodayResultOperation.h>

@class NSDate, NSDictionary, NSObject, NTCatchUpOperationForYouFetchInfo, NTPBTodayResultOperationFetchInfo, NTTodayResults;

@interface NTNewsTodayResultOperation : NTTodayResultOperation

{
    _Bool _lastOperationFailedToFinish;
    NSDate *_filterDate;
    NTCatchUpOperationForYouFetchInfo *_forYouFetchInfo;
    NTTodayResults *_resultTodayResults;
    NSDictionary *_resultAssetHandlesByAssetID;
    NSObject *_resultAssetsHoldToken;
    NTPBTodayResultOperationFetchInfo *_resultFetchInfo;
    NSDictionary *_todayConfigOperationHeldRecordsByType;
}

@property (copy, nonatomic) NSDate *filterDate;
@property (nonatomic) _Bool lastOperationFailedToFinish;
@property (copy, nonatomic) NTCatchUpOperationForYouFetchInfo *forYouFetchInfo;
@property (copy, nonatomic) NTTodayResults *resultTodayResults;
@property (copy, nonatomic) NSDictionary *resultAssetHandlesByAssetID;
@property (retain, nonatomic) NSObject *resultAssetsHoldToken;
@property (copy, nonatomic) NTPBTodayResultOperationFetchInfo *resultFetchInfo;
@property (retain, nonatomic) NSDictionary *todayConfigOperationHeldRecordsByType;

+ (void)initialize;

- (id)init;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (void)prepareOperation;
- (_Bool)_useForegroundMinimumUpdateInterval;
- (id)_sectionCTRsWithTodayConfig:(id)arg1 personalizationTreatment:(id)arg2 aggregateStore:(id)arg3;
- (void)_fetchTodayResultsWithFetchHelper:(id)arg1 maximumCachedAgeForForYou:(unsigned long long)arg2 aggregator:(id)arg3 appConfiguration:(id)arg4 feedPersonalizer:(id)arg5 todayData:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_assembleQueueDescriptorsWithConfig:(id)arg1 allowOnlyWatchEligibleSections:(_Bool)arg2 respectsWidgetVisibleSectionsLimit:(_Bool)arg3 personalizationTreatment:(id)arg4 aggregateStore:(id)arg5 appConfiguration:(id)arg6 todayData:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)_registerForYouFetchWithForYouFetchInfo:(id)arg1;
- (void)_finalizeTodayResultsWithSectionDescriptors:(id)arg1 catchUpOperationResultsBySectionDescriptor:(id)arg2 itemIDsOfLeadingCells:(id)arg3 slotAllocationByDynamicSlotItemID:(id)arg4 appConfiguration:(id)arg5 feedPersonalizer:(id)arg6 todayData:(id)arg7 completion:(CDUnknownBlockType)arg8;

@end
