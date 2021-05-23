/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class NSTimer;

@interface CACSpeechSystem : NSObject

{
    struct __RXRecognitionSystem *_recognitionSystemRef;
    struct __CFLocale *_currentLocaleRef;
    NSTimer *_setLeadingContextStringDelayTimer;
    NSTimer *_setAdditionalContextStringsDelayTimer;
}

+ (void)initialize;
+ (id)supportedLanguages;
+ (id)speechSystem;
+ (void)closeSpeechSystem;
+ (void)recognizeString:(id)arg1;
+ (void)stopPreventingDisplayDimming;
+ (void)startPreventingDisplayDimming;
+ (id)rxContextDictionaryForLanguageModel:(id)arg1;
+ (id)valueFromRXContextKey:(id)arg1 rxLanguageObject:(struct __RXLanguageObject *)arg2;
+ (_Bool)isSpeechSystemServerRunning;

- (void)_close;
- (void)setLeadingContextString:(id)arg1;
- (void)setAdditionalContextStrings:(id)arg1;
- (struct __RXLanguageObject *)createRXLanguageObjectRefFromCACLanguageModel:(id)arg1 ignoreBuiltInLMTable:(_Bool)arg2;
- (struct __RXRecognitionSystem *)recognitionSystemRef;
- (id)initLocaleIdentifer:(id)arg1 microphoneIdentifier:(id)arg2;
- (id)recognitionLocaleIdentifier;
- (struct __CFLocale *)currentLocaleRef;
- (id)resultLanguageModelFromRXLanguageObject:(struct __RXLanguageObject *)arg1;
- (struct __RXLanguageObject *)createRXLanguageObjectRefFromCACLanguageModel:(id)arg1;

@end
