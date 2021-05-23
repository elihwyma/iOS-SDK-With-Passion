/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class AFDictationConnection, AFDictationOptions, NSMutableArray, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue, UIDictationConnectionDelegate, UIDictationConnectionTokenFilterProtocol;

__attribute__((visibility("hidden")))
@interface UIDictationConnection : NSObject

{
    _Bool _receivedMultilingualResultsCommand;
    _Bool _offlineOnly;
    _Bool _lowConfidenceAboutLanguageDetection;
    unsigned int _charBeforeInsertionPointOnDictationStart;
    unsigned int _charAfterInsertionPointOnDictationStart;
    id <UIDictationConnectionDelegate> _delegate;
    id <UIDictationConnectionTokenFilterProtocol> _tokenFilter;
    AFDictationOptions *_dictationOptions;
    AFDictationConnection *_connection;
    NSObject<OS_dispatch_queue> *_analyticsQueue;
    NSString *_lastUsedPrimaryLanguage;
    NSString *_lastUsedDetectedLanguage;
    NSMutableArray *_lastUsedTopLanguages;
    NSMutableDictionary *_lastReceivedPartials;
}

@property (retain, nonatomic) AFDictationOptions *dictationOptions;
@property (retain, nonatomic) AFDictationConnection *connection;
@property (nonatomic) _Bool offlineOnly;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *analyticsQueue;
@property (copy, nonatomic) NSString *lastUsedPrimaryLanguage;
@property (copy, nonatomic) NSString *lastUsedDetectedLanguage;
@property (retain, nonatomic) NSMutableArray *lastUsedTopLanguages;
@property (nonatomic) _Bool lowConfidenceAboutLanguageDetection;
@property (nonatomic) unsigned int charBeforeInsertionPointOnDictationStart;
@property (nonatomic) unsigned int charAfterInsertionPointOnDictationStart;
@property (retain, nonatomic) NSMutableDictionary *lastReceivedPartials;
@property (weak, nonatomic) id <UIDictationConnectionDelegate> delegate;
@property (weak, nonatomic) id <UIDictationConnectionTokenFilterProtocol> tokenFilter;
@property (nonatomic) _Bool receivedMultilingualResultsCommand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)analytics;
+ (_Bool)dictationIsSupportedForLanguageCode:(id)arg1 error:(id *)arg2;
+ (void)_updateFromGlobalOptions:(id)arg1;
+ (id)interpretationFromSpeechTokens:(id)arg1 startIndex:(unsigned long long)arg2 filterBlock:(CDUnknownBlockType)arg3;
+ (_Bool)isDictationAvailable;
+ (void)cacheSupportedDictationLanguages;
+ (_Bool)dictationRestricted;
+ (void)afDelegate:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(_Bool)arg4 final:(_Bool)arg5;

- (void)start;
- (void)endSession;
- (_Bool)dictationIsAvailableForLanguage:(id)arg1;
- (void)beginAvailabilityMonitoring;
- (void)cancelAvailabilityMonitoring;
- (void)restartDictation;
- (void)sendSpeechCorrection:(id)arg1 forIdentifier:(id)arg2;
- (float)averagePower;
- (void)dictationConnection:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(_Bool)arg4 final:(_Bool)arg5;
- (id)languageDetectionUserContext;
- (long long)speechEventTypeForDictationActivationType:(unsigned long long)arg1;
- (id)_createConnectionOptions;
- (id)_initializeWithOptions:(id)arg1;
- (void)_startWithOptions:(id)arg1;
- (id)_dictationOptions:(id)arg1;
- (id)_speechOptions:(id)arg1;
- (void)cancelSpeech;
- (void)preheat;
- (void)dictationConnection:(id)arg1 didRecognizePartialResult:(id)arg2;
- (void)dictationConnnectionDidChangeAvailability:(id)arg1;
- (void)dictationConnectionSpeechRecordingWillBegin:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 didDetectLanguage:(id)arg2 confidenceScores:(id)arg3 isConfident:(_Bool)arg4;
- (void)dictationConnection:(id)arg1 didRecognizeMultilingualSpeech:(id)arg2;
- (void)dictationConnection:(id)arg1 languageDetectorFailedWithError:(id)arg2;
- (void)dictationConnection:(id)arg1 didRecognizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4;
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;
- (void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1;
- (void)startForFileAtURL:(id)arg1 forLanguage:(id)arg2;
- (void)stopSpeech:(id)arg1 activationType:(unsigned long long)arg2 result:(id)arg3 suppressAlert:(_Bool)arg4;
- (void)logDidShowAlternatives:(id)arg1 correctionIdentifier:(id)arg2;
- (void)logDidSelectAlternative:(id)arg1 correctionIdentifier:(id)arg2;
- (void)logDidAcceptDictationResult:(id)arg1 reason:(id)arg2 result:(id)arg3 correctionIdentifier:(id)arg4;
- (void)logDidAcceptReplacement:(id)arg1 replacementLanguageCode:(id)arg2 originalText:(id)arg3 correctionIdentifier:(id)arg4;

@end
