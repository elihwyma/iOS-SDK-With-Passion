//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SFSpeechRecognitionResult, SFSpeechRecognitionTask, SFTranscription;

@protocol SFSpeechRecognitionTaskDelegate <NSObject>

@optional
- (void)speechRecognitionTask:(SFSpeechRecognitionTask *)arg1 didFinishSuccessfully:(BOOL)arg2;
- (void)speechRecognitionTaskWasCancelled:(SFSpeechRecognitionTask *)arg1;
- (void)speechRecognitionTaskFinishedReadingAudio:(SFSpeechRecognitionTask *)arg1;
- (void)speechRecognitionTask:(SFSpeechRecognitionTask *)arg1 didFinishRecognition:(SFSpeechRecognitionResult *)arg2;
- (void)speechRecognitionTask:(SFSpeechRecognitionTask *)arg1 didHypothesizeTranscription:(SFTranscription *)arg2;
- (void)speechRecognitionDidDetectSpeech:(SFSpeechRecognitionTask *)arg1;
@end

