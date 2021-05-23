/*
 Image: /System/Library/Frameworks/Speech.framework/Speech
 */

#import <Speech/SFSpeechRecognitionTask.h>

@class SFSpeechRecognitionResult;

@protocol _SFSpeechRecognitionTaskDelegatePrivate;

@interface _SFSpeechRecognitionDelegateTask : SFSpeechRecognitionTask

{
    id <_SFSpeechRecognitionTaskDelegatePrivate> _delegate;
    SFSpeechRecognitionResult *_recognitionResultToReportAfterFinalSearchResults;
    _SFSpeechRecognitionDelegateTask *_selfReference;
    _Bool _waitForVoiceSearchResult;
    _Bool _hasSentRealSearchResults;
}

- (void)dictationConnection:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(_Bool)arg4 final:(_Bool)arg5;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;
- (void)dictationConnection:(id)arg1 didProcessAudioDuration:(double)arg2;
- (void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1;
- (void)dictationConnection:(id)arg1 didRecognizePackage:(id)arg2;
- (void)_tellDelegateDidFinishSuccessfully:(_Bool)arg1;
- (id)_initWithRequest:(id)arg1 queue:(id)arg2 languageCode:(id)arg3 taskHint:(long long)arg4 delegate:(id)arg5;

@end
