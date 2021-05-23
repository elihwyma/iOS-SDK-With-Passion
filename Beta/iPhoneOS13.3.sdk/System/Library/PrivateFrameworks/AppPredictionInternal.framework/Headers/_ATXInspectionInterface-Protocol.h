/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@protocol _ATXInspectionInterface

- (unsigned short)appHistoryClear: /* Error: Ran out of types for this method. */;
- (unsigned short)appHistoryClearAppIntent: /* Error: Ran out of types for this method. */;
- (unsigned short)appHistoryAddLaunch:launchReason:date:timeZone:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)appHistoryUpdateActionPredictionPipelineWithAction:date:timeZone:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)appHistoryActionWithUUID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)appHistoryAddNSUALaunch:requiredString:itemIdentifier:date:timeZone:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)appHistoryAddAppIntentLaunch:intent:source:date:timeZone:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)appIntentHistoryMockIntentLaunch:source:startDate:endDate:timeZone:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)appIntentHistoryDonateINIntent:intentType:startDate:endDate:timeZone:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)appHistoryStartDeltaRecording: /* Error: Ran out of types for this method. */;
- (unsigned short)appHistoryStopDeltaRecording: /* Error: Ran out of types for this method. */;
- (unsigned short)appInstallHistoryClear: /* Error: Ran out of types for this method. */;
- (unsigned short)appInstallHistorySet:date:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)appInstallHistoryStartDeltaRecording: /* Error: Ran out of types for this method. */;
- (unsigned short)appInstallHistoryStopDeltaRecording: /* Error: Ran out of types for this method. */;
- (unsigned short)feedbackClear: /* Error: Ran out of types for this method. */;
- (unsigned short)feedbackLaunched:rejected:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)predictItemsAndReturnInputsAndSubscoresForConsumerSubType:intent:candidateBundleIds:candidateActiontypes:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)predictItemsAndReturnMetaDataAndInputsAndSubScoresWithCandidateBundleIdentifiers:candidateActiontypes:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)predictItemsAndReturnStageScoresWithCandidateBundleIdentifiers:candidateActiontypes:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)getParseTreeForConsumerSubType:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)predictAppsAndReturnInputsAndSubscores: /* Error: Ran out of types for this method. */;
- (unsigned short)getPredictionModelDetailsForConsumerSubType:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)getABGroups: /* Error: Ran out of types for this method. */;
- (unsigned short)benchmarkAppPredictionForConsumerSubType:ntimes:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)benchmarkAppPrediction:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)getActionLogs: /* Error: Ran out of types for this method. */;
- (unsigned short)retrainActionHistograms: /* Error: Ran out of types for this method. */;
- (unsigned short)retrainActionSlotDatabase: /* Error: Ran out of types for this method. */;
- (unsigned short)resetActionPredictions: /* Error: Ran out of types for this method. */;
- (unsigned short)getAppFeedbackData: /* Error: Ran out of types for this method. */;
- (unsigned short)getNotificationLogs: /* Error: Ran out of types for this method. */;
- (unsigned short)getNotificationsSuggestionResponses: /* Error: Ran out of types for this method. */;
- (unsigned short)resetNotificationsSuggestionResponses: /* Error: Ran out of types for this method. */;
- (unsigned short)resetNotificationsHistory: /* Error: Ran out of types for this method. */;
- (unsigned short)getNotificationSettings: /* Error: Ran out of types for this method. */;
- (unsigned short)trainMagicalMomentsAppPredictor: /* Error: Ran out of types for this method. */;
- (unsigned short)forceMagicalMomentsAppPredictionForBundleId:expert:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)dumpPredictionTableForMMExpert:reply: /* Error: Ran out of types for this method. */;

@end
