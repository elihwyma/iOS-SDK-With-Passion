/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <VisualVoicemail/VMSpeechRecognitionRequestOperation.h>

@interface VMSpeechURLRecognitionRequestOperation : VMSpeechRecognitionRequestOperation

- (id)initWithLocale:(id)arg1;
- (id)URL;
- (_Bool)forceOfflineRecognition;
- (void)setForceOfflineRecognition:(_Bool)arg1;
- (id)initWithSpeechRecognizer:(id)arg1 speechRecognitionRequest:(id)arg2;
- (id)initWithSpeechRecognizer:(id)arg1;
- (id)initWithSpeechRecognizer:(id)arg1 speechURLRecognitionRequest:(id)arg2;
- (id)speechURLRecognitionRequest;
- (id)initWithLocale:(id)arg1 URL:(id)arg2;

@end
