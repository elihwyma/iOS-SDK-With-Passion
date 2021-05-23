/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFExperiment, NSDictionary, NSString;

@interface _AFExperimentMutation : NSObject

{
    AFExperiment *_baseModel;
    NSString *_configurationIdentifier;
    NSString *_configurationVersion;
    NSString *_deploymentGroupIdentifier;
    NSDictionary *_deploymentGroupProperties;
    long long _deploymentReason;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasConfigurationIdentifier:1;
        unsigned int hasConfigurationVersion:1;
        unsigned int hasDeploymentGroupIdentifier:1;
        unsigned int hasDeploymentGroupProperties:1;
        unsigned int hasDeploymentReason:1;
    } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (id)generate;
- (void)setConfigurationIdentifier:(id)arg1;
- (void)setConfigurationVersion:(id)arg1;
- (void)setDeploymentGroupIdentifier:(id)arg1;
- (void)setDeploymentGroupProperties:(id)arg1;
- (void)setDeploymentReason:(long long)arg1;

@end
