/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <SpeechRecognitionCommandAndControl/CACCommandRecognizer.h>

@class CACProfanityNode, NSString;

@interface CACCommandRecognizerDictation : CACCommandRecognizer

{
    CACProfanityNode *_rootProfanityNode;
    NSString *_currentLocaleIdentifier;
    _Bool _suppressProfanity;
}

+ (void)adjustCapsAndSpacingInRecognizedMutableAttributedString:(id)arg1 leadingText:(id)arg2;

- (void)speechRecognizer:(id)arg1 didRecognizeRXResult:(struct __RXLanguageObject *)arg2;
- (void)speechRecognizer:(id)arg1 didBeginUtteranceWithID:(unsigned long long)arg2;
- (id)_attributedStringFromResult:(struct __RXLanguageObject *)arg1;
- (struct __RXLanguageObject *)_adLibLanguageObjectFromLanguageModel:(struct __RXLanguageObject *)arg1;
- (void)handleDictation:(id)arg1;
- (void)_didBeginUtteranceWithID:(unsigned long long)arg1;
- (void)dictationConnectionDidRecognizeAttributedString:(id)arg1 isHypothesis:(_Bool)arg2 utteranceID:(unsigned long long)arg3;

@end
