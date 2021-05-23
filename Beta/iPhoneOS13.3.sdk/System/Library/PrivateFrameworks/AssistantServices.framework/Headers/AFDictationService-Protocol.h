/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/Swift-Protocol.h>

@protocol AFDictationService <Swift>

- (unsigned short)endSession;
- (unsigned short)startDictationWithLanguageCode:options:speechOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)stopSpeechWithOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelSpeech;
- (unsigned short)sendUserSelectedAlternativeDictationLanguageCode: /* Error: Ran out of types for this method. */;
- (unsigned short)preheat;
- (unsigned short)recordAWDSuccessMetrics;
- (unsigned short)updateSpeechOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)startRequestActivityWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)startRecordingForPendingDictationWithLanguageCode:options:speechOptions:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)startRecordedAudioDictationWithOptions:language:narrowband: /* Error: Ran out of types for this method. */;
- (unsigned short)addRecordedSpeechSampleData: /* Error: Ran out of types for this method. */;
- (unsigned short)sendSpeechCorrectionInfo:forCorrectionContext: /* Error: Ran out of types for this method. */;
- (unsigned short)preheatWithRecordDeviceIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)recordFailureMetricsForError: /* Error: Ran out of types for this method. */;
- (unsigned short)_startDictationWithURL:isNarrowBand:language:options: /* Error: Ran out of types for this method. */;
- (unsigned short)_sendEngagementFeedback:voiceQueryIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)getInstalledOfflineLanguagesWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)requestOfflineDictationSupportForLanguage:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)reportIssueForError:eventType:context: /* Error: Ran out of types for this method. */;

@end
