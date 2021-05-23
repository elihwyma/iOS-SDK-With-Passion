/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSArray, NSNumber, NSString;

@interface CEMNetworkDirectoryServiceDeclaration : CEMConfigurationBase

{
    NSString *_payloadHostName;
    NSString *_payloadUserName;
    NSString *_payloadPassword;
    NSString *_payloadClientID;
    NSString *_payloadDescription;
    NSString *_payloadADOrganizationalUnit;
    NSString *_payloadADMountStyle;
    NSNumber *_payloadADCreateMobileAccountAtLoginFlag;
    NSNumber *_payloadADCreateMobileAccountAtLogin;
    NSNumber *_payloadADWarnUserBeforeCreatingMAFlag;
    NSNumber *_payloadADWarnUserBeforeCreatingMA;
    NSNumber *_payloadADForceHomeLocalFlag;
    NSNumber *_payloadADForceHomeLocal;
    NSNumber *_payloadADUseWindowsUNCPathFlag;
    NSNumber *_payloadADUseWindowsUNCPath;
    NSNumber *_payloadADAllowMultiDomainAuthFlag;
    NSNumber *_payloadADAllowMultiDomainAuth;
    NSNumber *_payloadADDefaultUserShellFlag;
    NSString *_payloadADDefaultUserShell;
    NSNumber *_payloadADMapUIDAttributeFlag;
    NSString *_payloadADMapUIDAttribute;
    NSNumber *_payloadADMapGIDAttributeFlag;
    NSString *_payloadADMapGIDAttribute;
    NSNumber *_payloadADMapGGIDAttributeFlag;
    NSString *_payloadADMapGGIDAttribute;
    NSNumber *_payloadADPreferredDCServerFlag;
    NSString *_payloadADPreferredDCServer;
    NSNumber *_payloadADDomainAdminGroupListFlag;
    NSArray *_payloadADDomainAdminGroupList;
    NSNumber *_payloadADNamespaceFlag;
    NSString *_payloadADNamespace;
    NSNumber *_payloadADPacketSignFlag;
    NSString *_payloadADPacketSign;
    NSNumber *_payloadADPacketEncryptFlag;
    NSString *_payloadADPacketEncrypt;
    NSNumber *_payloadADRestrictDDNSFlag;
    NSArray *_payloadADRestrictDDNS;
    NSNumber *_payloadADTrustChangePassIntervalDaysFlag;
    NSNumber *_payloadADTrustChangePassIntervalDays;
}

@property (copy, nonatomic) NSString *payloadHostName;
@property (copy, nonatomic) NSString *payloadUserName;
@property (copy, nonatomic) NSString *payloadPassword;
@property (copy, nonatomic) NSString *payloadClientID;
@property (copy, nonatomic) NSString *payloadDescription;
@property (copy, nonatomic) NSString *payloadADOrganizationalUnit;
@property (copy, nonatomic) NSString *payloadADMountStyle;
@property (copy, nonatomic) NSNumber *payloadADCreateMobileAccountAtLoginFlag;
@property (copy, nonatomic) NSNumber *payloadADCreateMobileAccountAtLogin;
@property (copy, nonatomic) NSNumber *payloadADWarnUserBeforeCreatingMAFlag;
@property (copy, nonatomic) NSNumber *payloadADWarnUserBeforeCreatingMA;
@property (copy, nonatomic) NSNumber *payloadADForceHomeLocalFlag;
@property (copy, nonatomic) NSNumber *payloadADForceHomeLocal;
@property (copy, nonatomic) NSNumber *payloadADUseWindowsUNCPathFlag;
@property (copy, nonatomic) NSNumber *payloadADUseWindowsUNCPath;
@property (copy, nonatomic) NSNumber *payloadADAllowMultiDomainAuthFlag;
@property (copy, nonatomic) NSNumber *payloadADAllowMultiDomainAuth;
@property (copy, nonatomic) NSNumber *payloadADDefaultUserShellFlag;
@property (copy, nonatomic) NSString *payloadADDefaultUserShell;
@property (copy, nonatomic) NSNumber *payloadADMapUIDAttributeFlag;
@property (copy, nonatomic) NSString *payloadADMapUIDAttribute;
@property (copy, nonatomic) NSNumber *payloadADMapGIDAttributeFlag;
@property (copy, nonatomic) NSString *payloadADMapGIDAttribute;
@property (copy, nonatomic) NSNumber *payloadADMapGGIDAttributeFlag;
@property (copy, nonatomic) NSString *payloadADMapGGIDAttribute;
@property (copy, nonatomic) NSNumber *payloadADPreferredDCServerFlag;
@property (copy, nonatomic) NSString *payloadADPreferredDCServer;
@property (copy, nonatomic) NSNumber *payloadADDomainAdminGroupListFlag;
@property (copy, nonatomic) NSArray *payloadADDomainAdminGroupList;
@property (copy, nonatomic) NSNumber *payloadADNamespaceFlag;
@property (copy, nonatomic) NSString *payloadADNamespace;
@property (copy, nonatomic) NSNumber *payloadADPacketSignFlag;
@property (copy, nonatomic) NSString *payloadADPacketSign;
@property (copy, nonatomic) NSNumber *payloadADPacketEncryptFlag;
@property (copy, nonatomic) NSString *payloadADPacketEncrypt;
@property (copy, nonatomic) NSNumber *payloadADRestrictDDNSFlag;
@property (copy, nonatomic) NSArray *payloadADRestrictDDNS;
@property (copy, nonatomic) NSNumber *payloadADTrustChangePassIntervalDaysFlag;
@property (copy, nonatomic) NSNumber *payloadADTrustChangePassIntervalDays;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withHostName:(id)arg2 withUserName:(id)arg3 withPassword:(id)arg4 withClientID:(id)arg5 withDescription:(id)arg6 withADOrganizationalUnit:(id)arg7 withADMountStyle:(id)arg8 withADCreateMobileAccountAtLoginFlag:(id)arg9 withADCreateMobileAccountAtLogin:(id)arg10 withADWarnUserBeforeCreatingMAFlag:(id)arg11 withADWarnUserBeforeCreatingMA:(id)arg12 withADForceHomeLocalFlag:(id)arg13 withADForceHomeLocal:(id)arg14 withADUseWindowsUNCPathFlag:(id)arg15 withADUseWindowsUNCPath:(id)arg16 withADAllowMultiDomainAuthFlag:(id)arg17 withADAllowMultiDomainAuth:(id)arg18 withADDefaultUserShellFlag:(id)arg19 withADDefaultUserShell:(id)arg20 withADMapUIDAttributeFlag:(id)arg21 withADMapUIDAttribute:(id)arg22 withADMapGIDAttributeFlag:(id)arg23 withADMapGIDAttribute:(id)arg24 withADMapGGIDAttributeFlag:(id)arg25 withADMapGGIDAttribute:(id)arg26 withADPreferredDCServerFlag:(id)arg27 withADPreferredDCServer:(id)arg28 withADDomainAdminGroupListFlag:(id)arg29 withADDomainAdminGroupList:(id)arg30 withADNamespaceFlag:(id)arg31 withADNamespace:(id)arg32 withADPacketSignFlag:(id)arg33 withADPacketSign:(id)arg34 withADPacketEncryptFlag:(id)arg35 withADPacketEncrypt:(id)arg36 withADRestrictDDNSFlag:(id)arg37 withADRestrictDDNS:(id)arg38 withADTrustChangePassIntervalDaysFlag:(id)arg39 withADTrustChangePassIntervalDays:(id)arg40;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withHostName:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
