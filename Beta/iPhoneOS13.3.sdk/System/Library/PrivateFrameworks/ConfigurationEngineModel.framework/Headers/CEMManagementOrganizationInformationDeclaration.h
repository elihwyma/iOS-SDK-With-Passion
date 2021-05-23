/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSString;

@interface CEMManagementOrganizationInformationDeclaration : CEMConfigurationBase

{
    NSString *_payloadOrganizationName;
    NSString *_payloadOrganizationAddress;
    NSString *_payloadOrganizationPhone;
    NSString *_payloadOrganizationEmail;
    NSString *_payloadOrganizationMagic;
}

@property (copy, nonatomic) NSString *payloadOrganizationName;
@property (copy, nonatomic) NSString *payloadOrganizationAddress;
@property (copy, nonatomic) NSString *payloadOrganizationPhone;
@property (copy, nonatomic) NSString *payloadOrganizationEmail;
@property (copy, nonatomic) NSString *payloadOrganizationMagic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withOrganizationName:(id)arg2 withOrganizationAddress:(id)arg3 withOrganizationPhone:(id)arg4 withOrganizationEmail:(id)arg5 withOrganizationMagic:(id)arg6;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withOrganizationName:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
