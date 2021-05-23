/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/Swift-Protocol.h>

@protocol AFClientService <Swift>

- (unsigned short)endSession;
- (unsigned short)setConfiguration: /* Error: Ran out of types for this method. */;
- (unsigned short)stopSpeechWithOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelRequestForReason: /* Error: Ran out of types for this method. */;
- (unsigned short)requestStateUpdateWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)reportIssueForError:type:context: /* Error: Ran out of types for this method. */;
- (unsigned short)recordAWDSuccessMetrics;
- (unsigned short)preheatWithStyle:forOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)boostedPreheatWithStyle:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)forceAudioSessionActiveWithOptions:reason:speechRequestOptions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)forceAudioSessionInactiveWithOptions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)resumeInterruptedAudioPlaybackIfNeeded;
- (unsigned short)willPresentUIWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)didDismissUI;
- (unsigned short)setLockState:showingLockScreen: /* Error: Ran out of types for this method. */;
- (unsigned short)startRequestWithInfo:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)startRecordingForPendingSpeechRequestWithOptions:requestId:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)continuePendingSpeechRequestWithId:fromTimestamp: /* Error: Ran out of types for this method. */;
- (unsigned short)startSpeechPronunciationRequestWithOptions:context:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)startAcousticIDRequestWithOptions:context:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateSpeechOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)rollbackClearContext;
- (unsigned short)rollbackRequest;
- (unsigned short)performGenericAceCommand:interruptOutstandingRequest:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)getDeferredObjectsWithIdentifiers:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getSerializedCachedObjectsWithIdentifiers:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getRemoteClockTimerSnapshotWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)clearContext;
- (unsigned short)willSetApplicationContextWithRefId: /* Error: Ran out of types for this method. */;
- (unsigned short)setApplicationContext: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchAppicationContextForApplicationInfo:supplementalContext:refID: /* Error: Ran out of types for this method. */;
- (unsigned short)setOverriddenApplicationContext:withContext: /* Error: Ran out of types for this method. */;
- (unsigned short)setAlertContextDirty;
- (unsigned short)prepareForPhoneCall;
- (unsigned short)telephonyRequestCompleted;
- (unsigned short)startAudioPlaybackRequest:options:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)stopAudioPlaybackRequest:immediately: /* Error: Ran out of types for this method. */;
- (unsigned short)stopAllAudioPlaybackRequests: /* Error: Ran out of types for this method. */;
- (unsigned short)beginUpdateOutputAudioPowerWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)endUpdateOutputAudioPower;
- (unsigned short)updateSpeechSynthesisRecord: /* Error: Ran out of types for this method. */;
- (unsigned short)adviseSessionArbiterToContinueWithPreviousWinner: /* Error: Ran out of types for this method. */;
- (unsigned short)setCarDNDActive: /* Error: Ran out of types for this method. */;
- (unsigned short)recordUIMetrics: /* Error: Ran out of types for this method. */;
- (unsigned short)setApplicationContextForApplicationInfos:withRefId: /* Error: Ran out of types for this method. */;
- (unsigned short)_startSpeechWithURL:isNarrowBand: /* Error: Ran out of types for this method. */;
- (unsigned short)_requestBarrierWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)_sendFeedbackToAppPreferencesPredictorForMetricsContext:selectedBundleId: /* Error: Ran out of types for this method. */;
- (unsigned short)_broadcastCommandDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)_barrierWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)_clearAssistantInfoForAccountIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)recordFailureMetricsForError: /* Error: Ran out of types for this method. */;
- (unsigned short)recordCancellationMetrics;
- (unsigned short)_listInstalledServicesWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)_pingServiceForIdentifier:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)_sendLargeData:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)_performCommandDictionary:forBundleIdentifier:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)_performTaskCommandDictionary:forBundleIdentifier:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)_fetchAppContextForApplicationInfo:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)_refreshAssistantValidation;

@end
