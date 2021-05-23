/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INRecurrenceRule, NSDate, NSDateComponents, NSDateInterval, NSNumber, NSString;

@interface INDateComponentsRange : NSObject <Swift>

{
    NSDateComponents *_startDateComponents;
    NSDateComponents *_endDateComponents;
    INRecurrenceRule *_recurrenceRule;
    NSString *_userInput;
    NSNumber *_allDay;
}

@property (copy, nonatomic, readonly) NSDateInterval *dateInterval;
@property (copy, nonatomic, readonly) NSDate *startDate;
@property (copy, nonatomic, readonly) NSDate *endDate;
@property (copy, nonatomic, readonly) NSString *userInput;
@property (copy, nonatomic, readonly) NSNumber *allDay;
@property (copy, nonatomic, readonly) NSDateComponents *startDateComponents;
@property (copy, nonatomic, readonly) NSDateComponents *endDateComponents;
@property (copy, nonatomic, readonly) INRecurrenceRule *recurrenceRule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)_userInput;
- (id)initWithStartDateComponents:(id)arg1 endDateComponents:(id)arg2;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)_intents_readableDescriptionForLanguage:(id)arg1 withMetadata:(id)arg2;
- (id)initWithStartDateComponents:(id)arg1 endDateComponents:(id)arg2 recurrenceRule:(id)arg3;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 onCalendar:(id)arg3 inTimeZone:(id)arg4;
- (id)initWithDateInterval:(id)arg1 onCalendar:(id)arg2 inTimeZone:(id)arg3;
- (id)initWithDate:(id)arg1 onCalendar:(id)arg2 inTimeZone:(id)arg3;
- (id)initWithStartDateComponents:(id)arg1 endDateComponents:(id)arg2 recurrenceRule:(id)arg3 userInput:(id)arg4 allDay:(id)arg5;
- (id)initWithEKRecurrenceRule:(id)arg1;
- (id)EKRecurrenceRule;

@end
