/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSNumber, NSString;

@interface CEMAccountCalDAVDeclaration : CEMConfigurationBase

{
    NSString *_payloadCalDAVAccountDescription;
    NSString *_payloadCalDAVHostName;
    NSString *_payloadCalDAVPrincipalURL;
    NSNumber *_payloadCalDAVUseSSL;
    NSNumber *_payloadCalDAVPort;
    NSString *_payloadCalDAVCredentials;
}

@property (copy, nonatomic) NSString *payloadCalDAVAccountDescription;
@property (copy, nonatomic) NSString *payloadCalDAVHostName;
@property (copy, nonatomic) NSString *payloadCalDAVPrincipalURL;
@property (copy, nonatomic) NSNumber *payloadCalDAVUseSSL;
@property (copy, nonatomic) NSNumber *payloadCalDAVPort;
@property (copy, nonatomic) NSString *payloadCalDAVCredentials;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withCalDAVAccountDescription:(id)arg2 withCalDAVHostName:(id)arg3 withCalDAVPrincipalURL:(id)arg4 withCalDAVUseSSL:(id)arg5 withCalDAVPort:(id)arg6 withCalDAVCredentials:(id)arg7;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withCalDAVHostName:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
