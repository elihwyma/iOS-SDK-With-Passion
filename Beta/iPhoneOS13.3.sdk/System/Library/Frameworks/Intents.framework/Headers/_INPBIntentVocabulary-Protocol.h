/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray;

@protocol _INPBIntentVocabulary <Swift>

@property (copy, nonatomic) NSArray *intentSlotVocabularyPolicies;
@property (nonatomic, readonly) unsigned long long intentSlotVocabularyPoliciesCount;
@property (copy, nonatomic) NSArray *intentTypePhrases;
@property (nonatomic, readonly) unsigned long long intentTypePhrasesCount;

+ (unsigned short)intentSlotVocabularyPoliciesType;
+ (unsigned short)intentTypePhrasesType;

- (unsigned short)clearIntentSlotVocabularyPolicies;
- (unsigned short)addIntentSlotVocabularyPolicies: /* Error: Ran out of types for this method. */;
- (unsigned short)intentSlotVocabularyPoliciesAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearIntentTypePhrases;
- (unsigned short)addIntentTypePhrases: /* Error: Ran out of types for this method. */;
- (unsigned short)intentTypePhrasesAtIndex: /* Error: Ran out of types for this method. */;

@end
