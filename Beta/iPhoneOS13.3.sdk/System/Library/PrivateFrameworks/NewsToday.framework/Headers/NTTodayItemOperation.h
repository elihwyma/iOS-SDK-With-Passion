/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <NewsCore/FCOperation.h>

@class NSArray, NSDictionary, NSObject, NSSet, NTCatchUpOperationForYouFetchInfo;

@protocol FCContentContext, FCFeedPersonalizing, FCNewsAppConfiguration, FCTodayPrivateData, NTTodayResultOperationInfoProviding;

@interface NTTodayItemOperation : FCOperation

{
    NSDictionary *_catchUpOperationResultsBySectionDescriptor;
    id <FCNewsAppConfiguration> _appConfiguration;
    id <FCContentContext> _contentContext;
    NSSet *_itemIDsOfLeadingCells;
    NSDictionary *_slotAllocationByDynamicSlotItemID;
    id <FCFeedPersonalizing> _feedPersonalizer;
    id <FCTodayPrivateData> _todayData;
    id <NTTodayResultOperationInfoProviding> _operationInfo;
    NTCatchUpOperationForYouFetchInfo *_forYouFetchInfo;
    CDUnknownBlockType _todayItemCompletion;
    NSArray *_feedItems;
    NSDictionary *_resultTodayItemsBySectionDescriptor;
    NSDictionary *_resultAssetFileURLsByRemoteURL;
    NSObject *_resultAssetsHoldToken;
}

@property (copy, nonatomic) NSArray *feedItems;
@property (retain, nonatomic) NSDictionary *resultTodayItemsBySectionDescriptor;
@property (retain, nonatomic) NSDictionary *resultAssetFileURLsByRemoteURL;
@property (retain, nonatomic) NSObject *resultAssetsHoldToken;
@property (copy, nonatomic) NSDictionary *catchUpOperationResultsBySectionDescriptor;
@property (copy, nonatomic) id <FCNewsAppConfiguration> appConfiguration;
@property (retain, nonatomic) id <FCContentContext> contentContext;
@property (copy, nonatomic) NSSet *itemIDsOfLeadingCells;
@property (copy, nonatomic) NSDictionary *slotAllocationByDynamicSlotItemID;
@property (retain, nonatomic) id <FCFeedPersonalizing> feedPersonalizer;
@property (retain, nonatomic) id <FCTodayPrivateData> todayData;
@property (copy, nonatomic) id <NTTodayResultOperationInfoProviding> operationInfo;
@property (copy, nonatomic) NTCatchUpOperationForYouFetchInfo *forYouFetchInfo;
@property (copy, nonatomic) CDUnknownBlockType todayItemCompletion;

- (id)init;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (id)_extractFeedItemsFromInputs;
- (void)_fetchProtoitemsWithCompletion:(CDUnknownBlockType)arg1;

@end
