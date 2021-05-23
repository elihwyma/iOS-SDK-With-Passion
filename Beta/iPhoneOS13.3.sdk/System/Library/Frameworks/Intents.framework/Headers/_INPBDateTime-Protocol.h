/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBLocalDate, _INPBLocalTime;

@protocol _INPBDateTime <Swift>

@property (nonatomic) int calendarSystem;
@property (nonatomic) _Bool hasCalendarSystem;
@property (retain, nonatomic) _INPBLocalDate *date;
@property (nonatomic, readonly) _Bool hasDate;
@property (retain, nonatomic) _INPBLocalTime *time;
@property (nonatomic, readonly) _Bool hasTime;
@property (copy, nonatomic) NSString *timeZoneID;
@property (nonatomic, readonly) _Bool hasTimeZoneID;

- (unsigned short)calendarSystemAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsCalendarSystem: /* Error: Ran out of types for this method. */;

@end
