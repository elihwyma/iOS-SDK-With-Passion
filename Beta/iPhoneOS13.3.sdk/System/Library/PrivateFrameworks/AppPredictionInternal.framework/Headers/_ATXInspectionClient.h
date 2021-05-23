/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@interface _ATXInspectionClient : NSObject

{
    NSXPCConnection *_xpcConnection;
}

- (id)init;
- (void)dealloc;
- (void)appHistoryClear:(CDUnknownBlockType)arg1;
- (void)appHistoryClearAppIntent:(CDUnknownBlockType)arg1;
- (void)appHistoryAddLaunch:(id)arg1 launchReason:(id)arg2 date:(id)arg3 timeZone:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)appHistoryUpdateActionPredictionPipelineWithAction:(id)arg1 date:(id)arg2 timeZone:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)appHistoryActionWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)appHistoryAddNSUALaunch:(id)arg1 requiredString:(id)arg2 itemIdentifier:(id)arg3 date:(id)arg4 timeZone:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)appHistoryAddAppIntentLaunch:(id)arg1 intent:(id)arg2 source:(id)arg3 date:(id)arg4 timeZone:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)appIntentHistoryMockIntentLaunch:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)appIntentHistoryDonateINIntent:(id)arg1 intentType:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)appHistoryStartDeltaRecording:(CDUnknownBlockType)arg1;
- (void)appHistoryStopDeltaRecording:(CDUnknownBlockType)arg1;
- (void)appInstallHistoryClear:(CDUnknownBlockType)arg1;
- (void)appInstallHistorySet:(id)arg1 date:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)appInstallHistoryStartDeltaRecording:(CDUnknownBlockType)arg1;
- (void)appInstallHistoryStopDeltaRecording:(CDUnknownBlockType)arg1;
- (void)feedbackClear:(CDUnknownBlockType)arg1;
- (void)feedbackLaunched:(id)arg1 rejected:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)predictItemsAndReturnInputsAndSubscoresForConsumerSubType:(unsigned char)arg1 intent:(id)arg2 candidateBundleIds:(id)arg3 candidateActiontypes:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)predictItemsAndReturnMetaDataAndInputsAndSubScoresWithCandidateBundleIdentifiers:(id)arg1 candidateActiontypes:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)predictItemsAndReturnStageScoresWithCandidateBundleIdentifiers:(id)arg1 candidateActiontypes:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)getParseTreeForConsumerSubType:(unsigned char)arg1 reply:(CDUnknownBlockType)arg2;
- (void)predictAppsAndReturnInputsAndSubscores:(CDUnknownBlockType)arg1;
- (void)getPredictionModelDetailsForConsumerSubType:(unsigned char)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getABGroups:(CDUnknownBlockType)arg1;
- (void)benchmarkAppPredictionForConsumerSubType:(unsigned char)arg1 ntimes:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)benchmarkAppPrediction:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getActionLogs:(CDUnknownBlockType)arg1;
- (void)retrainActionHistograms:(CDUnknownBlockType)arg1;
- (void)retrainActionSlotDatabase:(CDUnknownBlockType)arg1;
- (void)resetActionPredictions:(CDUnknownBlockType)arg1;
- (void)getAppFeedbackData:(CDUnknownBlockType)arg1;
- (void)getNotificationLogs:(CDUnknownBlockType)arg1;
- (void)getNotificationsSuggestionResponses:(CDUnknownBlockType)arg1;
- (void)resetNotificationsSuggestionResponses:(CDUnknownBlockType)arg1;
- (void)resetNotificationsHistory:(CDUnknownBlockType)arg1;
- (void)getNotificationSettings:(CDUnknownBlockType)arg1;
- (void)trainMagicalMomentsAppPredictor:(CDUnknownBlockType)arg1;
- (void)forceMagicalMomentsAppPredictionForBundleId:(id)arg1 expert:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)dumpPredictionTableForMMExpert:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end
