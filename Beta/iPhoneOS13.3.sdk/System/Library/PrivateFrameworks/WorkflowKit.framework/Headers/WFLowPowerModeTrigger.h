/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFTrigger.h>

@interface WFLowPowerModeTrigger : WFTrigger

{
    _Bool _onEnable;
    _Bool _onDisable;
}

@property (nonatomic) _Bool onEnable;
@property (nonatomic) _Bool onDisable;

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
