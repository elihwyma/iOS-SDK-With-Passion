/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFTrigger.h>

@class NSString;

@interface WFNFCTrigger : WFTrigger

{
    NSString *_tagIdentifier;
    NSString *_name;
}

@property (copy, nonatomic) NSString *tagIdentifier;
@property (copy, nonatomic) NSString *name;

+ (_Bool)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (_Bool)isSupportedOnThisDevice;
+ (_Bool)isAllowedToRunAutomatically;
+ (id)localizedDisplayExplanation;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasValidConfiguration;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;

@end
