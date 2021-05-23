/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFDictationConnection, NSString;

@interface AFDictationConnectionServiceDelegate : NSObject

{
    AFDictationConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDictationConnection:(id)arg1;
- (oneway void)speechRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)arg1;
- (oneway void)speechRecordingDidBegin;
- (oneway void)speechRecordingDidEnd;
- (oneway void)speechRecordingDidCancel;
- (oneway void)speechRecordingDidFail:(id)arg1;
- (oneway void)speechDidRecognizePhrases:(id)arg1 utterances:(id)arg2 usingSpeechModel:(id)arg3 correctionContext:(id)arg4 audioAnalytics:(id)arg5;
- (oneway void)speechDidRecognizePartialResult:(id)arg1;
- (oneway void)speechDidRecognizeTokens:(id)arg1 usingSpeechModel:(id)arg2;
- (oneway void)speechDidProcessAudioDuration:(double)arg1;
- (oneway void)speechDidRecognizeTranscriptionObjects:(id)arg1 usingSpeechModel:(id)arg2;
- (oneway void)speechRecognitionDidFinishWithError:(id)arg1;
- (oneway void)speechDidFinishWritingAudioFile:(id)arg1 error:(id)arg2;
- (oneway void)speechDidReceiveSearchResults:(id)arg1 recognitionText:(id)arg2 stable:(_Bool)arg3 final:(_Bool)arg4;
- (oneway void)speechDidRecognizePackage:(id)arg1;
- (oneway void)speechDidDetectLanguage:(id)arg1 confidenceScores:(id)arg2 isConfident:(_Bool)arg3;
- (oneway void)speechDidRecognizeMultilingualSpeech:(id)arg1;
- (oneway void)languageDetectorFailedWithError:(id)arg1;

@end
