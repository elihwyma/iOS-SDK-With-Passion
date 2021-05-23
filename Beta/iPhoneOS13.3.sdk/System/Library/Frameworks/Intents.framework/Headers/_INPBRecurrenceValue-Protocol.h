/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@protocol _INPBRecurrenceValue <Swift>

@property (nonatomic) int frequency;
@property (nonatomic) _Bool hasFrequency;
@property (nonatomic) unsigned long long interval;
@property (nonatomic) _Bool hasInterval;
@property (nonatomic) long long ordinal;
@property (nonatomic) _Bool hasOrdinal;

- (unsigned short)frequencyAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsFrequency: /* Error: Ran out of types for this method. */;

@end
