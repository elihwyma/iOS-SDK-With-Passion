/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFTrigger.h>

@interface WFPredictedLocationTransitionTrigger : WFTrigger

{
    unsigned long long _destinationType;
    unsigned long long _minutesBefore;
}

@property (nonatomic) unsigned long long destinationType;
@property (nonatomic) unsigned long long minutesBefore;

+ (_Bool)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (id)localizedDisplayExplanation;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasValidConfiguration;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;

@end
