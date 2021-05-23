/*
 Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSUserDefaults;

@protocol OS_dispatch_queue, OS_dispatch_source, SFFeedbackListener;

@interface PRSAnonymousPipelineManager : NSObject

{
    _Bool _isInternalDevice;
    _Bool _submissionEnabled;
    NSUserDefaults *_userDefaults;
    NSString *_lastTopHitQueryString;
    NSArray *_lastTopHitQueryItems;
    NSObject<OS_dispatch_source> *_topHitDataCollectionTimer;
    NSObject<OS_dispatch_queue> *_queue;
    id <SFFeedbackListener> _delegate;
}

@property (retain) NSUserDefaults *userDefaults;
@property _Bool isInternalDevice;
@property (retain, nonatomic) NSString *lastTopHitQueryString;
@property (retain, nonatomic) NSArray *lastTopHitQueryItems;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *topHitDataCollectionTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) _Bool submissionEnabled;
@property (retain, nonatomic) id <SFFeedbackListener> delegate;

+ (id)sharedManager;
+ (id)dateFormatter;
+ (id)submitttedSpotlightReportsError:(id *)arg1;
+ (id)whitelistedBundles;
+ (id)submittedLogsURL;
+ (id)candidateLogsURLForBundle:(id)arg1;
+ (id)submittedLogsURLForUser:(id)arg1;
+ (id)candidateLogsBasePath;
+ (id)relativePositionKey;
+ (id)engagementCountKeyForBundle:(id)arg1;
+ (id)logURLForCurrentTimeAndBundle:(id)arg1;
+ (id)dateFromFileURL:(id)arg1;
+ (_Bool)_dataCollectionAllowedForBundle:(id)arg1;

- (id)init;
- (void)cleanUp;
- (void)sendCustomFeedback:(id)arg1;
- (void)setFeedbackDelegate:(id)arg1;
- (void)registerXPCActivity;
- (id)retrieveFeedbackURLToSendInDirectory:(id)arg1;
- (void)sendMLFeedbackActivity:(id)arg1;
- (void)_increaseUserDefaultsEngagementCountForBundle:(id)arg1;
- (_Bool)_shouldDataCollectWithEngagedBundle:(id)arg1 withQueryId:(id)arg2 forClientBundle:(id)arg3;
- (void)_extractTrainingSamplesForQuery:(id)arg1 withIndexOfEngagedItem:(unsigned long long)arg2 withItems:(id)arg3 withCEPData:(id)arg4 forClientBundle:(id)arg5 debugInfoEnabled:(_Bool)arg6 keyboardPrimaryLanguage:(id)arg7;
- (void)_updateUserDefaultsWithEngagedBundle:(id)arg1 andQueryID:(id)arg2 forClientBundle:(id)arg3;
- (void)extractTrainingDataWithItemAtIndex:(unsigned long long)arg1 withItems:(id)arg2 forQuery:(id)arg3 dataCollectAllowed:(_Bool)arg4 queryID:(id)arg5 withCEPData:(id)arg6 forClientBundle:(id)arg7 debugInfoEnabled:(_Bool)arg8 keyboardPrimaryLanguage:(id)arg9;
- (id)_abandonedItemsFromItems:(id)arg1 withIndexOfEngagedItem:(unsigned long long)arg2;
- (void)_writeResult:(struct json_writer *)arg1 item:(id)arg2;
- (id)_relativePositionForItem:(id)arg1 inItems:(id)arg2 withIndexOfEngagedItem:(long long)arg3;
- (void)_addQueryInfoToJSONWriter:(struct json_writer *)arg1 withQuery:(id)arg2 cepData:(id)arg3 forClient:(id)arg4 debugInfoAllowed:(_Bool)arg5 keyboardPrimaryLanguage:(id)arg6;
- (_Bool)dateIsExpired:(id)arg1;
- (void)deleteCandidateLogs;
- (void)deleteExpiredSubmittedLogs;
- (void)extractTrainingDataWithItemAtIndex:(unsigned long long)arg1 withItems:(id)arg2 forQuery:(id)arg3 dataCollectAllowed:(_Bool)arg4 forClientBundle:(id)arg5 keyboardPrimaryLanguage:(id)arg6;
- (void)_addRelativePositionToFeatureDict:(id)arg1 relativePosition:(id)arg2 forItem:(id)arg3 debugInfoEnabled:(_Bool)arg4;
- (void)queryWillFinishWithItems:(id)arg1 forClient:(id)arg2 forQuery:(id)arg3 anonymousDataCollectionAllowed:(_Bool)arg4;
- (void)userEngagedItemWithIdentifier:(id)arg1 forBundle:(id)arg2 forQuery:(id)arg3;

@end
