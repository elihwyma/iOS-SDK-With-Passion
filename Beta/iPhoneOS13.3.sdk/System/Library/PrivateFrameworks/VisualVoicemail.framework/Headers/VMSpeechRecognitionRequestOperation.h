/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <VisualVoicemail/VMSpeechRecognizerOperation.h>

@protocol VMSpeechRecognitionRequest;

@interface VMSpeechRecognitionRequestOperation : VMSpeechRecognizerOperation

{
    _Bool _forceOfflineRecognition;
    id <VMSpeechRecognitionRequest> _speechRecognitionRequest;
}

@property (retain) id <VMSpeechRecognitionRequest> speechRecognitionRequest;
@property _Bool forceOfflineRecognition;

- (id)initWithSpeechRecognizer:(id)arg1 speechRecognitionRequest:(id)arg2;
- (id)initWithSpeechRecognizer:(id)arg1;

@end
