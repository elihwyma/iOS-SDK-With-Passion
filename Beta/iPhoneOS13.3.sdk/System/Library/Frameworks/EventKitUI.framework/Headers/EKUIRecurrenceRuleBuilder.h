/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface EKUIRecurrenceRuleBuilder : NSObject

{
    int _days;
    int _ordinalValue;
    long long _frequency;
    long long _interval;
    unsigned long long _count;
    NSArray *_dayNumbers;
    NSArray *_monthNumbers;
}

@property long long frequency;
@property long long interval;
@property unsigned long long count;
@property (retain) NSArray *dayNumbers;
@property int days;
@property int ordinalValue;
@property (retain) NSArray *monthNumbers;

- (id)init;
- (id)description;
- (id)recurrenceRule;
- (id)daysOfTheWeek;
- (void)_setDefaultValues;
- (long long)_frequencyToUse;
- (id)setPositions;
- (id)daysOfTheWeekWithWeek:(long long)arg1;

@end
