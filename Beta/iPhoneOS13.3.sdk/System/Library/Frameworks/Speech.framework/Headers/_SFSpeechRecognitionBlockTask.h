/*
 Image: /System/Library/Frameworks/Speech.framework/Speech
 */

#import <Speech/SFSpeechRecognitionTask.h>

@interface _SFSpeechRecognitionBlockTask : SFSpeechRecognitionTask

{
    CDUnknownBlockType _resultHandler;
    _Bool _hasFiredFinalResult;
}

- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;
- (void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1;
- (void)dictationConnection:(id)arg1 didRecognizePackage:(id)arg2;
- (void)_fireResultHandlerWithResult:(id)arg1 error:(id)arg2;
- (void)_finalizeResultHandler;
- (id)_initWithRequest:(id)arg1 queue:(id)arg2 languageCode:(id)arg3 taskHint:(long long)arg4 resultHandler:(CDUnknownBlockType)arg5;

@end
