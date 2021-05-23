/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFAudioPowerUpdater, AFCallSiteInfo, AFSpeechRequestOptions, NSArray, NSMutableData, NSSet, NSString, NSXPCConnection;

@protocol AFDictationDelegate, OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface AFDictationConnection : NSObject

{
    NSXPCConnection *_connection;
    NSString *_lastUsedLanguage;
    NSSet *_knownOfflineInstalledLanguages;
    id <AFDictationDelegate> _delegate;
    AFCallSiteInfo *_initiationCallSiteInfo;
    AFAudioPowerUpdater *_inputAudioPowerUpdater;
    _Bool _isCapturingSpeech;
    _Bool _hasActiveRequest;
    _Bool _isWaitingForAudioFile;
    _Bool _recognizingIncrementally;
    NSObject<OS_dispatch_group> *_speechCallbackGroup;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSObject<OS_dispatch_source> *_bufferTimer;
    _Bool _forceOfflineRecognition;
    AFSpeechRequestOptions *_stopOptions;
    NSMutableData *_buffer;
    double _audioStartTime;
    double _amountDataSent;
    _Bool _narrowband;
    NSString *_requestIdString;
    NSArray *_previouslyRecognizedPhrases;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (weak, nonatomic) id <AFDictationDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)dictationIsEnabled;
+ (_Bool)dictationIsSupportedForLanguageCode:(id)arg1 error:(id *)arg2;
+ (void)fetchSupportedLanguageCodes:(CDUnknownBlockType)arg1;
+ (void)getForcedOfflineDictationSupportedLanguagesWithCompletion:(CDUnknownBlockType)arg1;
+ (_Bool)languageDetectorIsEnabled;

- (id)init;
- (void)dealloc;
- (id)_connection;
- (void)endSession;
- (_Bool)dictationIsAvailableForLanguage:(id)arg1;
- (void)beginAvailabilityMonitoring;
- (void)cancelAvailabilityMonitoring;
- (void)sendSpeechCorrection:(id)arg1 forIdentifier:(id)arg2;
- (float)averagePower;
- (void)startDictationWithSpeechFileAtURL:(id)arg1 options:(id)arg2 forLanguage:(id)arg3;
- (void)startDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3;
- (void)stopSpeechWithOptions:(id)arg1;
- (void)cancelSpeech;
- (void)sendUserSelectedAlternativeDictationLanguageCode:(id)arg1;
- (void)preheat;
- (void)_clearConnection;
- (void)networkAvailability:(id)arg1 isAvailable:(_Bool)arg2;
- (void)_stopInputAudioPowerUpdates;
- (void)_dispatchCallbackGroupBlock:(CDUnknownBlockType)arg1;
- (void)_tellSpeechDelegateRecordingDidFail:(id)arg1;
- (void)_checkAndSetIsCapturingSpeech:(_Bool)arg1;
- (void)updateSpeechOptions:(id)arg1;
- (void)_startInputAudioPowerUpdatesWithXPCWrapper:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidEnd;
- (void)_tellSpeechDelegateRecordingDidCancel;
- (void)_tellSpeechDelegateRecognitionDidFail:(id)arg1;
- (void)stopSpeech;
- (float)peakPower;
- (void)_willFailDictationWithError:(id)arg1;
- (void)_willCompleteDictation;
- (void)_delegateDidRecognizeSpeechTokens:(id)arg1 languageModel:(id)arg2 delegate:(id)arg3;
- (void)_tellSpeechDelegateAudioFileFinished:(id)arg1 error:(id)arg2;
- (void)_cancelTimerClearBuffer;
- (void)_connectionClearedForInterruption:(_Bool)arg1;
- (void)_registerInvalidationHandlerForXPCConnection:(id)arg1;
- (void)_dispatchAsync:(CDUnknownBlockType)arg1;
- (void)addRecordedSpeechSampleData:(id)arg1;
- (void)preheatWithRecordDeviceIdentifier:(id)arg1;
- (void)requestOfflineDictationSupportForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reportIssueForError:(id)arg1 eventType:(long long)arg2 context:(id)arg3;
- (void)_invokeRequestTimeout;
- (void)_cancelRequestTimeout;
- (id)_dictationService;
- (void)_scheduleRequestTimeout;
- (_Bool)forcedOfflineDictationIsAvailableForLanguage:(id)arg1 synchronous:(_Bool)arg2;
- (void)_availabilityChanged;
- (void)_tellSpeechDelegateAvailabilityChanged;
- (void)_setActivationTimeOnOptionsIfNecessary:(id)arg1;
- (void)_willStartDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3 machAbsoluteTime:(unsigned long long)arg4;
- (id)_dictationServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)startRecordedAudioDictationWithOptions:(id)arg1 forLanguage:(id)arg2 narrowband:(_Bool)arg3;
- (void)_sendDataIfNeeded;
- (void)_willCancelDictation;
- (void)_delayedStopSpeechWithOptions:(id)arg1;
- (id)_dequeueAudioWithLength:(unsigned long long)arg1;
- (void)_updateBufferFlushTimerWithDelay:(double)arg1;
- (void)_cancelBufferFlushTimer;
- (void)_tellSpeechDelegateRecordingWillBegin;
- (void)_tellSpeechDelegateRecordingDidBegin;
- (void)_tellSpeechDelegateDidRecognizePackage:(id)arg1;
- (void)_tellSpeechDelegateDidRecognizeSpeechPhrases:(id)arg1 utterances:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4 audioAnalytics:(id)arg5;
- (void)_tellSpeechDelegateDidRecognizePartialResult:(id)arg1;
- (void)_tellSpeechDelegateDidRecognizeSpeechTokens:(id)arg1 languageModel:(id)arg2;
- (void)_tellSpeechDelegateDidProcessAudioDuration:(double)arg1;
- (void)_tellSpeechDelegateDidRecognizeTranscriptionObjects:(id)arg1 languageModel:(id)arg2;
- (void)_tellSpeechDelegateSpeechRecognitionDidSucceed;
- (void)_tellSpeechDelegateSearchResultsReceived:(id)arg1 recognitionText:(id)arg2 stable:(_Bool)arg3 final:(_Bool)arg4;
- (void)_tellSpeechDelegateLanguageDetected:(id)arg1 confidenceScores:(id)arg2 isConfident:(_Bool)arg3;
- (void)_tellSpeechDelegateMultilingualSpeechRecognized:(id)arg1;
- (void)_tellSpeechDelegateLanguageDetectorDidFail:(id)arg1;
- (void)_extendRequestTimeout;
- (_Bool)forcedOfflineDictationIsAvailableForLanguage:(id)arg1;
- (CDUnknownBlockType)startRecordingForPendingDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3;
- (void)startDictationWithLanguageCode:(id)arg1 options:(id)arg2;
- (void)startRecordedAudioDictationWithOptions:(id)arg1 forLanguage:(id)arg2;
- (void)startDictationWithSpeechFileAtURL:(id)arg1 isNarrowBand:(_Bool)arg2 options:(id)arg3 forLanguage:(id)arg4;
- (void)sendEngagementFeedback:(long long)arg1 voiceQueryIdentifier:(id)arg2;

@end
