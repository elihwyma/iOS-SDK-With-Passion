/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class NSDateComponents, NSString;

@protocol CLSHolidayCalendarEventDateRuleDelegate;

@interface CLSHolidayCalendarEventDateRule : NSObject

{
    id <CLSHolidayCalendarEventDateRuleDelegate> _delegate;
    NSDateComponents *_simpleRuleComponents;
    long long _startYear;
    long long _endYear;
    long long _offsetDays;
    NSString *_relativeToRuleUUID;
}

@property (weak, nonatomic) id <CLSHolidayCalendarEventDateRuleDelegate> delegate;
@property (copy, nonatomic) NSDateComponents *simpleRuleComponents;
@property (nonatomic) long long startYear;
@property (nonatomic) long long endYear;
@property (nonatomic) long long offsetDays;
@property (copy, nonatomic) NSString *relativeToRuleUUID;

- (id)debugDescription;
- (id)initWithEventDescription:(id)arg1;
- (id)localDateByEvaluatingRuleForYear:(long long)arg1;
- (_Bool)hasStartYear;
- (_Bool)hasEndYear;
- (_Bool)hasExplicitYear;
- (_Bool)matchesExplicitYear:(long long)arg1;
- (id)_stringDescriptionForDateRuleComponentValue:(long long)arg1;

@end
