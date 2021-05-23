/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString;

@protocol _INPBIntentSlotVocabularyValue <Swift>

@property (copy, nonatomic) NSArray *examples;
@property (nonatomic, readonly) unsigned long long examplesCount;
@property (copy, nonatomic) NSString *phrase;
@property (nonatomic, readonly) _Bool hasPhrase;
@property (copy, nonatomic) NSString *pronunciation;
@property (nonatomic, readonly) _Bool hasPronunciation;

- (unsigned short)clearExamples;
- (unsigned short)addExamples: /* Error: Ran out of types for this method. */;
- (unsigned short)examplesAtIndex: /* Error: Ran out of types for this method. */;

@end
