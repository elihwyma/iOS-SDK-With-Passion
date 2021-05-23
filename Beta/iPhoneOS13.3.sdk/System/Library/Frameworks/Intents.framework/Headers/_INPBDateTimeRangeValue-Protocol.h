/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBDateTime, _INPBRecurrenceValue, _INPBValueMetadata;

@protocol _INPBDateTimeRangeValue <Swift>

@property (nonatomic) _Bool allDay;
@property (nonatomic) _Bool hasAllDay;
@property (nonatomic) long long endCalendar;
@property (nonatomic) _Bool hasEndCalendar;
@property (retain, nonatomic) _INPBDateTime *endDateTime;
@property (nonatomic, readonly) _Bool hasEndDateTime;
@property (retain, nonatomic) _INPBRecurrenceValue *recurrence;
@property (nonatomic, readonly) _Bool hasRecurrence;
@property (nonatomic) long long startCalendar;
@property (nonatomic) _Bool hasStartCalendar;
@property (retain, nonatomic) _INPBDateTime *startDateTime;
@property (nonatomic, readonly) _Bool hasStartDateTime;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (nonatomic, readonly) _Bool hasValueMetadata;

@end
