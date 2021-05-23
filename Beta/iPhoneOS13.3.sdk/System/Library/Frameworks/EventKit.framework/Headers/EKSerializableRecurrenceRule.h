/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKSerializableObject.h>

@class EKRecurrenceEnd, NSArray;

__attribute__((visibility("hidden")))
@interface EKSerializableRecurrenceRule : EKSerializableObject

{
    long long _frequency;
    long long _interval;
    EKRecurrenceEnd *_recurrenceEnd;
    long long _firstDayOfTheWeek;
    NSArray *_daysOfTheWeek;
    NSArray *_daysOfTheMonth;
    NSArray *_daysOfTheYear;
    NSArray *_weeksOfTheYear;
    NSArray *_monthsOfTheYear;
    NSArray *_setPositions;
}

@property (nonatomic, readonly) long long frequency;
@property (nonatomic, readonly) long long interval;
@property (copy, nonatomic) EKRecurrenceEnd *recurrenceEnd;
@property (nonatomic, readonly) long long firstDayOfTheWeek;
@property (nonatomic, readonly) NSArray *daysOfTheWeek;
@property (nonatomic, readonly) NSArray *daysOfTheMonth;
@property (nonatomic, readonly) NSArray *daysOfTheYear;
@property (nonatomic, readonly) NSArray *weeksOfTheYear;
@property (nonatomic, readonly) NSArray *monthsOfTheYear;
@property (nonatomic, readonly) NSArray *setPositions;

+ (id)classesForKey;

- (id)initWithRecurrenceRule:(id)arg1;
- (id)createRecurrenceRule:(id *)arg1;

@end
