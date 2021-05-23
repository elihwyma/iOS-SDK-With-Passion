/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
 */

@class NSNumber, NSString;

@interface RMModelAccountWebClipDeclaration

{
    NSNumber *_payloadPrecomposed;
    NSNumber *_payloadFullScreen;
    NSString *_payloadURL;
    NSNumber *_payloadIsRemovable;
    NSString *_payloadLabel;
    NSString *_payloadIcon;
}

@property (copy, nonatomic) NSNumber *payloadPrecomposed;
@property (copy, nonatomic) NSNumber *payloadFullScreen;
@property (copy, nonatomic) NSString *payloadURL;
@property (copy, nonatomic) NSNumber *payloadIsRemovable;
@property (copy, nonatomic) NSString *payloadLabel;
@property (copy, nonatomic) NSString *payloadIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)buildWithIdentifier:(id)arg1 precomposed:(id)arg2 fullScreen:(id)arg3 URL:(id)arg4 isRemovable:(id)arg5 label:(id)arg6 icon:(id)arg7;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 URL:(id)arg2 label:(id)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializePayloadWithType:(short)arg1;

@end
