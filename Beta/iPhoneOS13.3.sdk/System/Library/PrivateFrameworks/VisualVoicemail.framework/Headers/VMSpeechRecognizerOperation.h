/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <VisualVoicemail/VMOperation.h>

@protocol VMSpeechRecognizer;

@interface VMSpeechRecognizerOperation : VMOperation

{
    id <VMSpeechRecognizer> _speechRecognizer;
}

@property (readonly) id <VMSpeechRecognizer> speechRecognizer;

- (id)init;
- (id)locale;
- (id)initWithLocale:(id)arg1;
- (id)initWithSpeechRecognizer:(id)arg1;

@end
