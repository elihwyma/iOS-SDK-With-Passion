/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class CEMAnyPayload, NSNumber, NSString;

@interface CEMApplicationInstallDeclaration : CEMConfigurationBase

{
    NSString *_payloadApplication;
    NSNumber *_payloadMandatory;
    NSNumber *_payloadInstallWhenActivated;
    NSNumber *_payloadRemoveWhenDeactivated;
    NSNumber *_payloadManageData;
    NSString *_payloadVPNUUID;
    NSNumber *_payloadPreventDataBackup;
    CEMAnyPayload *_payloadConfiguration;
}

@property (copy, nonatomic) NSString *payloadApplication;
@property (copy, nonatomic) NSNumber *payloadMandatory;
@property (copy, nonatomic) NSNumber *payloadInstallWhenActivated;
@property (copy, nonatomic) NSNumber *payloadRemoveWhenDeactivated;
@property (copy, nonatomic) NSNumber *payloadManageData;
@property (copy, nonatomic) NSString *payloadVPNUUID;
@property (copy, nonatomic) NSNumber *payloadPreventDataBackup;
@property (copy, nonatomic) CEMAnyPayload *payloadConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withApplication:(id)arg2 withMandatory:(id)arg3 withInstallWhenActivated:(id)arg4 withRemoveWhenDeactivated:(id)arg5 withManageData:(id)arg6 withVPNUUID:(id)arg7 withPreventDataBackup:(id)arg8 withConfiguration:(id)arg9;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withApplication:(id)arg2 withMandatory:(id)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
