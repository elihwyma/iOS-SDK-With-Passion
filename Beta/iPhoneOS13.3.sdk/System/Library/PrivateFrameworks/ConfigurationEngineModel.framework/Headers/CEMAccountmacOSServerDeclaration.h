/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSArray, NSString;

@interface CEMAccountmacOSServerDeclaration : CEMConfigurationBase

{
    NSString *_payloadHostName;
    NSString *_payloadAccountDescription;
    NSArray *_payloadConfiguredAccounts;
    NSString *_payloadCredentials;
}

@property (copy, nonatomic) NSString *payloadHostName;
@property (copy, nonatomic) NSString *payloadAccountDescription;
@property (copy, nonatomic) NSArray *payloadConfiguredAccounts;
@property (copy, nonatomic) NSString *payloadCredentials;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withHostName:(id)arg2 withAccountDescription:(id)arg3 withConfiguredAccounts:(id)arg4 withCredentials:(id)arg5;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withHostName:(id)arg2 withConfiguredAccounts:(id)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
