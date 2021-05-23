/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFTrigger.h>

@interface WFCarPlayConnectionTrigger : WFTrigger

{
    _Bool _onConnect;
    _Bool _onDisconnect;
}

@property (nonatomic) _Bool onConnect;
@property (nonatomic) _Bool onDisconnect;

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
