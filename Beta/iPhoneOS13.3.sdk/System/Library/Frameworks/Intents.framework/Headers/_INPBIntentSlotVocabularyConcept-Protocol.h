/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString;

@protocol _INPBIntentSlotVocabularyConcept <Swift>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (copy, nonatomic) NSArray *synonyms;
@property (nonatomic, readonly) unsigned long long synonymsCount;

+ (unsigned short)synonymsType;

- (unsigned short)clearSynonyms;
- (unsigned short)addSynonyms: /* Error: Ran out of types for this method. */;
- (unsigned short)synonymsAtIndex: /* Error: Ran out of types for this method. */;

@end
