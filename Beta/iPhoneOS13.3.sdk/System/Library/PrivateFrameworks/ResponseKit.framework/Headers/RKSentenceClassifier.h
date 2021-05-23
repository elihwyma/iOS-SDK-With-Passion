/*
 Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, NSValue;

@interface RKSentenceClassifier : NSObject

{
    _Bool _sentenceIsTerminated;
    _Bool _sentenceIsAllSymbols;
    _Bool _sentenceHasQuestionTerminator;
    _Bool _sentenceHasAlternativeConjunction;
    NSArray *_sentenceEntities;
    NSArray *_matchedRanges;
    NSString *_languageIdentifier;
    NSMutableDictionary *_partofSpeechAvailabilityByLanguage;
    NSMutableDictionary *_lemmaAvailabilityByLanguage;
    NSString *_sentenceStringOriginal;
    NSString *_sentenceString;
    NSValue *_sentenceTag;
    NSArray *_inversions;
    NSArray *_interrogatives;
    NSArray *_choiceDelimiters;
    NSArray *_alternatives;
    NSArray *_appreciations;
    NSArray *_dataDetected;
    NSString *_RKLinguisticTagDataDetected;
}

@property (readonly) NSString *languageIdentifier;
@property (retain) NSMutableDictionary *partofSpeechAvailabilityByLanguage;
@property (retain) NSMutableDictionary *lemmaAvailabilityByLanguage;
@property (retain) NSString *sentenceStringOriginal;
@property (retain) NSString *sentenceString;
@property _Bool sentenceIsTerminated;
@property _Bool sentenceIsAllSymbols;
@property _Bool sentenceHasQuestionTerminator;
@property _Bool sentenceHasAlternativeConjunction;
@property (retain) NSValue *sentenceTag;
@property (retain) NSArray *inversions;
@property (retain) NSArray *interrogatives;
@property (retain) NSArray *choiceDelimiters;
@property (retain) NSArray *alternatives;
@property (retain) NSArray *appreciations;
@property (retain) NSArray *dataDetected;
@property (retain) NSString *RKLinguisticTagDataDetected;
@property (readonly) NSArray *alternativeConjunctions;
@property (retain) NSArray *sentenceEntities;
@property (retain) NSArray *matchedRanges;

+ (_Bool)canClassifyLanguageIdentifier:(id)arg1;
+ (id)languageIdentifierFromClassName;
+ (Class)subclassForLanguageIdentifier:(id)arg1;
+ (Class)subclassForLocale:(id)arg1;
+ (id)sensitiveSubjectRegularExpressionForLanguage:(id)arg1;
+ (id)polarTagRegularExpressionForLanguage:(id)arg1;
+ (id)categoryKeywordMapForLanguage:(id)arg1;
+ (id)appreciationKeywordsForLanguage:(id)arg1;
+ (id)alternativeInversionsForLanguage:(id)arg1;
+ (id)preProcessTextMessageForLinguisticTagger:(id)arg1 withLocale:(id)arg2;
+ (id)stringFromLexicalEntities:(id)arg1;
+ (id)sentenceClassification:(id)arg1 withLanguageIdentifier:(id)arg2 options:(unsigned long long)arg3;

- (id)init;
- (id)addSentenceTerminatorQuestion:(id)arg1;
- (void)analyzeSentence;
- (id)classifySentence;
- (id)lexicalEntitiesFromString:(id)arg1;
- (id)sentenceClassification:(id)arg1 options:(unsigned long long)arg2;

@end
