/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSNumber, NSString;

@interface CEMApplicationSettingsManagedDeclaration : CEMConfigurationBase

{
    NSNumber *_payloadAllowOpenFromManagedToUnmanaged;
    NSNumber *_payloadAllowOpenFromUnmanagedToManaged;
    NSNumber *_payloadForceAirDropUnmanaged;
    NSNumber *_payloadAllowManagedAppsCloudSync;
    NSNumber *_payloadAllowManagedToWriteUnmanagedContacts;
    NSNumber *_payloadAllowUnmanagedToReadManagedContacts;
}

@property (copy, nonatomic) NSNumber *payloadAllowOpenFromManagedToUnmanaged;
@property (copy, nonatomic) NSNumber *payloadAllowOpenFromUnmanagedToManaged;
@property (copy, nonatomic) NSNumber *payloadForceAirDropUnmanaged;
@property (copy, nonatomic) NSNumber *payloadAllowManagedAppsCloudSync;
@property (copy, nonatomic) NSNumber *payloadAllowManagedToWriteUnmanagedContacts;
@property (copy, nonatomic) NSNumber *payloadAllowUnmanagedToReadManagedContacts;
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
+ (id)buildWithIdentifier:(id)arg1 withAllowOpenFromManagedToUnmanaged:(id)arg2 withAllowOpenFromUnmanagedToManaged:(id)arg3 withForceAirDropUnmanaged:(id)arg4 withAllowManagedAppsCloudSync:(id)arg5 withAllowManagedToWriteUnmanagedContacts:(id)arg6 withAllowUnmanagedToReadManagedContacts:(id)arg7;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
