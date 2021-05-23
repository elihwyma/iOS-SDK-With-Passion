/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
 */

#import <RemoteManagementModel/RMModelAssetBase.h>

@class NSNumber, NSString, RMModelAssetBaseDescriptor;

@interface RMModelApplicationAppStoreDeclaration : RMModelAssetBase

{
    RMModelAssetBaseDescriptor *_payloadDescriptor;
    NSString *_payloadBundleIdentifier;
    NSNumber *_payloadITunesStoreID;
}

@property (copy, nonatomic) RMModelAssetBaseDescriptor *payloadDescriptor;
@property (copy, nonatomic) NSString *payloadBundleIdentifier;
@property (copy, nonatomic) NSNumber *payloadITunesStoreID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)buildWithIdentifier:(id)arg1 descriptor:(id)arg2 bundleIdentifier:(id)arg3 iTunesStoreID:(id)arg4;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 descriptor:(id)arg2 bundleIdentifier:(id)arg3 iTunesStoreID:(id)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializePayloadWithType:(short)arg1;

@end
