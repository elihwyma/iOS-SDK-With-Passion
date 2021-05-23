/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFTrigger.h>

@class NSArray;

@interface WFAlarmTrigger : WFTrigger

{
    long long _alarmType;
    NSArray *_alarmIDs;
    NSArray *_cachedAlarmDescriptions;
    long long _alarmState;
}

@property (nonatomic) long long alarmType;
@property (copy, nonatomic) NSArray *alarmIDs;
@property (copy, nonatomic) NSArray *cachedAlarmDescriptions;
@property (nonatomic) long long alarmState;

+ (_Bool)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (_Bool)isAllowedToRunAutomatically;
+ (id)localizedDisplayExplanation;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasValidConfiguration;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;

@end
