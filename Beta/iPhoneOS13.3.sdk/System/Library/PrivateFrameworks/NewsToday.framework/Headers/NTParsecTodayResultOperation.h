/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <NewsToday/NTTodayResultOperation.h>

@class NSDictionary, NTPBTodayResultOperationFetchInfo, NTTodayResults;

@interface NTParsecTodayResultOperation : NTTodayResultOperation

{
    NTTodayResults *_resultTodayResults;
    NSDictionary *_resultAssetHandlesByAssetID;
    NTPBTodayResultOperationFetchInfo *_resultFetchInfo;
}

@property (copy, nonatomic) NTTodayResults *resultTodayResults;
@property (copy, nonatomic) NSDictionary *resultAssetHandlesByAssetID;
@property (copy, nonatomic) NTPBTodayResultOperationFetchInfo *resultFetchInfo;

- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (void)_updateUseParsecEnabledWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_fetchTodayResultsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
