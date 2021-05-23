/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBCondition;

@protocol _INPBEventList <Swift>

@property (retain, nonatomic) _INPBCondition *condition;
@property (nonatomic, readonly) _Bool hasCondition;
@property (copy, nonatomic) NSArray *events;
@property (nonatomic, readonly) unsigned long long eventsCount;

+ (unsigned short)eventType;

- (unsigned short)clearEvents;
- (unsigned short)addEvent: /* Error: Ran out of types for this method. */;
- (unsigned short)eventAtIndex: /* Error: Ran out of types for this method. */;

@end
