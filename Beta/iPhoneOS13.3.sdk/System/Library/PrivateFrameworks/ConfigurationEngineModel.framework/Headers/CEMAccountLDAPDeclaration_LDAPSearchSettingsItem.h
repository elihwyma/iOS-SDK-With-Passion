/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMAccountLDAPDeclaration_LDAPSearchSettingsItem : CEMPayloadBase

{
    NSString *_payloadLDAPSearchSettingDescription;
    NSString *_payloadLDAPSearchSettingSearchBase;
    NSString *_payloadLDAPSearchSettingScope;
}

@property (copy, nonatomic) NSString *payloadLDAPSearchSettingDescription;
@property (copy, nonatomic) NSString *payloadLDAPSearchSettingSearchBase;
@property (copy, nonatomic) NSString *payloadLDAPSearchSettingScope;

+ (id)allowedPayloadKeys;
+ (id)buildWithLDAPSearchSettingDescription:(id)arg1 withLDAPSearchSettingSearchBase:(id)arg2 withLDAPSearchSettingScope:(id)arg3;
+ (id)buildRequiredOnlyWithLDAPSearchSettingSearchBase:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
