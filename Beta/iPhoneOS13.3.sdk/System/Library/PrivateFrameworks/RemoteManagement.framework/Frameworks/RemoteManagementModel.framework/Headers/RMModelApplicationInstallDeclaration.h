/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
 */

@class NSString;

@interface RMModelApplicationInstallDeclaration

{
    NSString *_payloadApplication;
}

@property (copy, nonatomic) NSString *payloadApplication;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)buildWithIdentifier:(id)arg1 application:(id)arg2;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 application:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializePayloadWithType:(short)arg1;

@end
