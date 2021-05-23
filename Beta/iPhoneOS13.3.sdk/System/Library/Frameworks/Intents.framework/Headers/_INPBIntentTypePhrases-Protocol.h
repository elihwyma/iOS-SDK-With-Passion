/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBIntentType;

@protocol _INPBIntentTypePhrases <Swift>

@property (retain, nonatomic) _INPBIntentType *intentType;
@property (nonatomic, readonly) _Bool hasIntentType;
@property (copy, nonatomic) NSArray *intentVocabularyExamples;
@property (nonatomic, readonly) unsigned long long intentVocabularyExamplesCount;

- (unsigned short)clearIntentVocabularyExamples;
- (unsigned short)addIntentVocabularyExamples: /* Error: Ran out of types for this method. */;
- (unsigned short)intentVocabularyExamplesAtIndex: /* Error: Ran out of types for this method. */;

@end
