/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray;

@protocol _INPBIntentSlotVocabularyPolicy <Swift>

@property (copy, nonatomic) NSArray *intentSlotNames;
@property (nonatomic, readonly) unsigned long long intentSlotNamesCount;
@property (copy, nonatomic) NSArray *intentSlotVocabularyConcepts;
@property (nonatomic, readonly) unsigned long long intentSlotVocabularyConceptsCount;

+ (unsigned short)intentSlotVocabularyConceptsType;

- (unsigned short)clearIntentSlotNames;
- (unsigned short)addIntentSlotNames: /* Error: Ran out of types for this method. */;
- (unsigned short)intentSlotNamesAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearIntentSlotVocabularyConcepts;
- (unsigned short)addIntentSlotVocabularyConcepts: /* Error: Ran out of types for this method. */;
- (unsigned short)intentSlotVocabularyConceptsAtIndex: /* Error: Ran out of types for this method. */;

@end
