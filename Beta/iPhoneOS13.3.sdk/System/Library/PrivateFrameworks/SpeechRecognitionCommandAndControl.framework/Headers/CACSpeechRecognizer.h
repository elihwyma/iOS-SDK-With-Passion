/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class CACLanguageModel, NSString;

@interface CACSpeechRecognizer : NSObject

{
    _Bool _waitingForResponse;
    _Bool _avoidMessagingRXDuringCancel;
    _Bool _isListening;
    _Bool _requestCloseMatchResults;
    _Bool _spellingMode;
    _Bool _numberMode;
    struct __RXRecognizer *_recognizer;
    struct __RXLanguageObject *_rxLanguageModel;
    CACLanguageModel *_languageModel;
    id _delegate;
    unsigned long long _recognizerFlags;
    _Bool _preventRecognizedTextFeedback;
    NSString *_name;
}

@property unsigned long long recognizerFlags;
@property (nonatomic) _Bool preventRecognizedTextFeedback;
@property (readonly) struct __RXLanguageObject *rxLanguageModel;
@property (retain) NSString *name;
@property _Bool requestCloseMatchResults;
@property _Bool spellingMode;
@property _Bool numberMode;

- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)startListening;
- (void)stopListening;
- (_Bool)isListening;
- (id)languageModel;
- (void)setLanguageModel:(id)arg1;
- (void)closeSpeechRecognizer;
- (_Bool)isSpeechRecognizerOpen;
- (void)openSpeechRecognizer;
- (void)setCommandInfo:(id)arg1;
- (void)registerSpeechCorrectionFromText:(id)arg1 toText:(id)arg2 forIdentifier:(id)arg3;

@end
