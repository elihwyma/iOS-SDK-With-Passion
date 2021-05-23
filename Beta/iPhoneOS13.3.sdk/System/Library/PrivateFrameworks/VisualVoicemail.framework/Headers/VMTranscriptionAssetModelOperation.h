/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <VisualVoicemail/VMSpeechRecognizerOperation.h>

@interface VMTranscriptionAssetModelOperation : VMSpeechRecognizerOperation

{
    CDUnknownBlockType _operationCompletion;
}

@property (copy) CDUnknownBlockType operationCompletion;

- (void)cancel;
- (void)main;
- (id)initWithSpeechRecognizer:(id)arg1;

@end
