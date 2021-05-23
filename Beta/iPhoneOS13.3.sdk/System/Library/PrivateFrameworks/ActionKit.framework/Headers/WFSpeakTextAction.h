/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@class AVSpeechSynthesizer, NSString;

@interface WFSpeakTextAction : WFAction

{
    AVSpeechSynthesizer *_synthesizer;
}

@property (retain, nonatomic) AVSpeechSynthesizer *synthesizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(struct _NSRange)arg2 utterance:(id)arg3;
- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)speakTextUsingVoiceOver:(id)arg1 languageCode:(id)arg2 pitch:(float)arg3 waitUntilFinished:(_Bool)arg4;
- (void)speakTextUsingSynthesizer:(id)arg1 voice:(id)arg2 rate:(float)arg3 pitch:(float)arg4 waitUntilFinished:(_Bool)arg5;
- (void)cleanupSpeechSynthesizer;
- (id)voicePickerParameter;
- (id)languagePickerParameter;

@end
