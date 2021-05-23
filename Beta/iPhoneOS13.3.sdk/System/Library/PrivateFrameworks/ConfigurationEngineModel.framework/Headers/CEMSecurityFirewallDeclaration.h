/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSArray, NSNumber, NSString;

@interface CEMSecurityFirewallDeclaration : CEMConfigurationBase

{
    NSNumber *_payloadEnableFirewall;
    NSNumber *_payloadBlockAllIncoming;
    NSNumber *_payloadEnableStealthMode;
    NSArray *_payloadApplications;
}

@property (copy, nonatomic) NSNumber *payloadEnableFirewall;
@property (copy, nonatomic) NSNumber *payloadBlockAllIncoming;
@property (copy, nonatomic) NSNumber *payloadEnableStealthMode;
@property (copy, nonatomic) NSArray *payloadApplications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withEnableFirewall:(id)arg2 withBlockAllIncoming:(id)arg3 withEnableStealthMode:(id)arg4 withApplications:(id)arg5;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withEnableFirewall:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
