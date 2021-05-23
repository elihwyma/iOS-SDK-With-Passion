/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebSpeechSynthesisWrapper : NSObject

{
    struct PlatformSpeechSynthesizer *m_synthesizerObject;
    RefPtr_0a8ffcc5 m_utterance;
    struct RetainPtr<AVSpeechSynthesizer> m_synthesizer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (void)pause;
- (void)resume;
- (id).cxx_construct;
- (float)mapSpeechRateToPlatformRate:(float)arg1;
- (void)speakUtterance:(RefPtr_0a8ffcc5 *)arg1;
- (void)speechSynthesizer:(id)arg1 didStartSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didPauseSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didContinueSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(struct _NSRange)arg2 utterance:(id)arg3;
- (id)initWithSpeechSynthesizer:(struct PlatformSpeechSynthesizer *)arg1;

@end
