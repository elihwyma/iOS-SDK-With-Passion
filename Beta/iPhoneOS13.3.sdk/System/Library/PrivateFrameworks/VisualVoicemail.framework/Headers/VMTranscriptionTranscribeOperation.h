/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <VisualVoicemail/VMSpeechURLRecognitionRequestOperation.h>

@class NSObject, NSString, VMVoicemailTranscript;

@protocol OS_dispatch_semaphore;

@interface VMTranscriptionTranscribeOperation : VMSpeechURLRecognitionRequestOperation

{
    double _duration;
    double _timeout;
    CDUnknownBlockType _transcribeOperationCompletion;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    VMVoicemailTranscript *_transcript;
}

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) VMVoicemailTranscript *transcript;
@property double duration;
@property double timeout;
@property _Bool processOnServer;
@property (copy) CDUnknownBlockType transcribeOperationCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (void)main;
- (id)initWithSpeechRecognizer:(id)arg1 speechURLRecognitionRequest:(id)arg2;
- (void)speechRecognitionTask:(id)arg1 didFinishRecognition:(id)arg2;
- (void)speechRecognitionTaskWasCancelled:(id)arg1;
- (void)speechRecognitionTask:(id)arg1 didFinishSuccessfully:(_Bool)arg2;
- (void)speechRecognitionTask:(id)arg1 didProcessAudioDuration:(double)arg2;

@end
