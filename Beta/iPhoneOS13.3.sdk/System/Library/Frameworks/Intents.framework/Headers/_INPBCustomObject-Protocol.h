/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString;

@protocol _INPBCustomObject <Swift>

@property (copy, nonatomic) NSArray *alternatives;
@property (nonatomic, readonly) unsigned long long alternativesCount;
@property (copy, nonatomic) NSString *displayString;
@property (nonatomic, readonly) _Bool hasDisplayString;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (copy, nonatomic) NSString *pronunciationHint;
@property (nonatomic, readonly) _Bool hasPronunciationHint;

+ (unsigned short)alternativeType;

- (unsigned short)alternativeAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearAlternatives;
- (unsigned short)addAlternative: /* Error: Ran out of types for this method. */;

@end
