/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandServices.framework/SpeechRecognitionCommandServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface SRCSCommandRecognitionSystem : NSObject

{
    NSString *_targetType;
    NSMutableArray *_recognizers;
    NSMutableDictionary *_resolvedBuiltInIdentifiers;
    NSString *_localeIdentifier;
}

@property (retain, readonly) NSString *localeIdentifier;
@property (retain, readonly) NSArray *recognizers;

- (id)initWithLocaleIdentifier:(id)arg1;
- (id)targetType;
- (id)languageModelTreeForBuiltInLMIdentifier:(id)arg1;
- (void)_initalizeLanguageModelTree;
- (id)spokenCommandFromRecognizedAFSpeechPhrases:(id)arg1;
- (void)addRecognizer:(id)arg1;
- (id)spokenCommandFromRecognizedEARTokenSausage:(struct __CFArray *)arg1;
- (void)_testWithPhrases:(id)arg1;

@end
