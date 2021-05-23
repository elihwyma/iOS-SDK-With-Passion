/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFTrigger.h>

@class NSArray;

@interface WFWorkoutTrigger : WFTrigger

{
    _Bool _onStart;
    _Bool _onEnd;
    unsigned long long _selection;
    NSArray *_selectedWorkoutTypes;
}

@property (nonatomic) unsigned long long selection;
@property (copy, nonatomic) NSArray *selectedWorkoutTypes;
@property (nonatomic) _Bool onStart;
@property (nonatomic) _Bool onEnd;

+ (_Bool)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (_Bool)isSupportedOnThisDevice;
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
