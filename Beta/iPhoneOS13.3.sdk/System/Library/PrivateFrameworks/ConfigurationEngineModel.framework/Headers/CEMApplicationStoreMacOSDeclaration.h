/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSNumber, NSString;

@interface CEMApplicationStoreMacOSDeclaration : CEMConfigurationBase

{
    NSNumber *_payloadRestrictStoreRequireAdminToInstall;
    NSNumber *_payloadRestrictStoreSoftwareupdateOnly;
    NSNumber *_payloadRestrictStoreDisableAppAdoption;
    NSNumber *_payloadDisableSoftwareUpdateNotifications;
    NSNumber *_payloadRestrictStoreMdmInstallSoftwareupdateOnly;
}

@property (copy, nonatomic) NSNumber *payloadRestrictStoreRequireAdminToInstall;
@property (copy, nonatomic) NSNumber *payloadRestrictStoreSoftwareupdateOnly;
@property (copy, nonatomic) NSNumber *payloadRestrictStoreDisableAppAdoption;
@property (copy, nonatomic) NSNumber *payloadDisableSoftwareUpdateNotifications;
@property (copy, nonatomic) NSNumber *payloadRestrictStoreMdmInstallSoftwareupdateOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withRestrictStoreRequireAdminToInstall:(id)arg2 withRestrictStoreSoftwareupdateOnly:(id)arg3 withRestrictStoreDisableAppAdoption:(id)arg4 withDisableSoftwareUpdateNotifications:(id)arg5 withRestrictStoreMdmInstallSoftwareupdateOnly:(id)arg6;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
