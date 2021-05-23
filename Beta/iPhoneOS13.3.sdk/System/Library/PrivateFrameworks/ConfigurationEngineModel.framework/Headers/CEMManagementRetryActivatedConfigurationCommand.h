/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMCommandBase.h>

@class NSString;

@interface CEMManagementRetryActivatedConfigurationCommand : CEMCommandBase

{
    NSString *_payloadActivationIdentifier;
    NSString *_payloadConfigurationIdentifier;
}

@property (copy, nonatomic) NSString *payloadActivationIdentifier;
@property (copy, nonatomic) NSString *payloadConfigurationIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)buildWithIdentifier:(id)arg1 withActivationIdentifier:(id)arg2 withConfigurationIdentifier:(id)arg3;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withActivationIdentifier:(id)arg2 withConfigurationIdentifier:(id)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)mustBeSupervised;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (int)executionLevel;

@end
