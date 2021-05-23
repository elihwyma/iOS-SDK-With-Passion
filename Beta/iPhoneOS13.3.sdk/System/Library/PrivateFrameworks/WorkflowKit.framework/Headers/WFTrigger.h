/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

#import <WorkflowKit/Swift-Protocol.h>

@interface WFTrigger : NSObject <Swift>

+ (_Bool)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (_Bool)isSupportedOnThisDevice;
+ (_Bool)isAllowedToRunAutomatically;
+ (id)localizedDisplayExplanation;
+ (id)triggerWithSerializedData:(id)arg1;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serializedData;
- (void)configureWithConfiguration:(id)arg1;
- (_Bool)hasValidConfiguration;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;

@end
