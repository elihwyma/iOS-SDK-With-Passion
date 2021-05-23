/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSNumber, NSString;

@interface CEMApplicationStoreDeclaration : CEMConfigurationBase

{
    NSNumber *_payloadAllowAppInstallation;
    NSNumber *_payloadAllowUIAppInstallation;
    NSNumber *_payloadAllowAutomaticAppDownloads;
    NSNumber *_payloadAllowSystemAppRemoval;
    NSNumber *_payloadAllowAppRemoval;
    NSNumber *_payloadAllowInAppPurchases;
    NSNumber *_payloadForceITunesStorePasswordEntry;
}

@property (copy, nonatomic) NSNumber *payloadAllowAppInstallation;
@property (copy, nonatomic) NSNumber *payloadAllowUIAppInstallation;
@property (copy, nonatomic) NSNumber *payloadAllowAutomaticAppDownloads;
@property (copy, nonatomic) NSNumber *payloadAllowSystemAppRemoval;
@property (copy, nonatomic) NSNumber *payloadAllowAppRemoval;
@property (copy, nonatomic) NSNumber *payloadAllowInAppPurchases;
@property (copy, nonatomic) NSNumber *payloadForceITunesStorePasswordEntry;
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
+ (id)buildWithIdentifier:(id)arg1 withAllowAppInstallation:(id)arg2 withAllowUIAppInstallation:(id)arg3 withAllowAutomaticAppDownloads:(id)arg4 withAllowSystemAppRemoval:(id)arg5 withAllowAppRemoval:(id)arg6 withAllowInAppPurchases:(id)arg7 withForceITunesStorePasswordEntry:(id)arg8;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
