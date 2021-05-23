/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString;

@protocol _INPBDataString <Swift>

@property (copy, nonatomic) NSArray *alternatives;
@property (nonatomic, readonly) unsigned long long alternativesCount;
@property (copy, nonatomic) NSString *localizedValue;
@property (nonatomic, readonly) _Bool hasLocalizedValue;
@property (copy, nonatomic) NSString *pronunciationHint;
@property (nonatomic, readonly) _Bool hasPronunciationHint;
@property (copy, nonatomic) NSString *vocabularyIdentifier;
@property (nonatomic, readonly) _Bool hasVocabularyIdentifier;

+ (unsigned short)alternativesType;

- (unsigned short)clearAlternatives;
- (unsigned short)addAlternatives: /* Error: Ran out of types for this method. */;
- (unsigned short)alternativesAtIndex: /* Error: Ran out of types for this method. */;

@end
