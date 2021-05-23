/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFTrigger.h>

#import <WorkflowKit/Swift-Protocol.h>

@class NSArray, NSDateComponents;

@interface WFTimeOfDayTrigger : WFTrigger <Swift>

{
    unsigned long long _event;
    unsigned long long _timeOffset;
    NSDateComponents *_time;
    NSArray *_daysOfWeek;
}

@property (nonatomic) unsigned long long event;
@property (nonatomic) unsigned long long timeOffset;
@property (retain, nonatomic) NSDateComponents *time;
@property (copy, nonatomic) NSArray *daysOfWeek;

+ (_Bool)supportsSecureCoding;
+ (id)dateFormatter;
+ (id)localizedDisplayName;
+ (id)localizedDisplayExplanation;
+ (id)localizedRecurrenceDescriptionForDaysOfWeek:(id)arg1;
+ (id)localizedSunriseSunsetDescriptionForTriggerEvent:(unsigned long long)arg1 timeOffset:(unsigned long long)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasValidConfiguration;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;

@end
