/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBDateTimeRange, _INPBLocationValue;

@protocol _INPBTicketedEvent <Swift>

@property (nonatomic) int category;
@property (nonatomic) _Bool hasCategory;
@property (retain, nonatomic) _INPBDateTimeRange *eventDuration;
@property (nonatomic, readonly) _Bool hasEventDuration;
@property (retain, nonatomic) _INPBLocationValue *location;
@property (nonatomic, readonly) _Bool hasLocation;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool hasName;

- (unsigned short)categoryAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsCategory: /* Error: Ran out of types for this method. */;

@end
