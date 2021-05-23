/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <NewsToday/NTTodayResultOperation.h>

@class NSDictionary, NTPBTodayResultOperationFetchInfo, NTTodayResults;

@interface NTNoContentTodayResultOperation : NTTodayResultOperation

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

@end
