/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class CLSHolidayCalendarEventRuleRequiredTraits, NSArray, NSString;

@protocol CLSHolidayCalendarEventDateRuleDelegate;

@interface CLSHolidayCalendarEventRule : NSObject

{
    _Bool _checkWeekends;
    NSString *_uuid;
    NSString *_name;
    NSArray *_dateRules;
    CLSHolidayCalendarEventRuleRequiredTraits *_requiredTraits;
    id <CLSHolidayCalendarEventDateRuleDelegate> _dateRuleDelegate;
    NSString *_localizedName;
    unsigned long long _category;
}

@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) CLSHolidayCalendarEventRuleRequiredTraits *requiredTraits;
@property (nonatomic, readonly) NSArray *dateRules;
@property (nonatomic, readonly) _Bool checkWeekends;
@property (weak, nonatomic) id <CLSHolidayCalendarEventDateRuleDelegate> dateRuleDelegate;
@property (nonatomic, readonly) _Bool isCelebration;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) unsigned long long category;
@property (nonatomic, readonly) _Bool allowSceneClassificationBasedEvaluation;

+ (id)localizedNameForName:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithEventDescription:(id)arg1;
- (_Bool)evaluateWithLocalDate:(id)arg1 traits:(id)arg2;
- (id)localDatesByEvaluatingRuleForYear:(long long)arg1;
- (id)_datesFromWeekendWithStartDate:(id)arg1 withDuration:(double)arg2;
- (id)_dateRuleForYear:(long long)arg1;
- (_Bool)evaluateOnlyTraits:(id)arg1;
- (_Bool)_isMatchingOnlyLocalDate:(id)arg1;

@end
