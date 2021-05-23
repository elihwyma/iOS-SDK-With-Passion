/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSNumber, NSString;

@interface CEMAccountWebClipDeclaration : CEMConfigurationBase

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

+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withPrecomposed:(id)arg2 withFullScreen:(id)arg3 withURL:(id)arg4 withIsRemovable:(id)arg5 withLabel:(id)arg6 withIcon:(id)arg7;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withURL:(id)arg2 withLabel:(id)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
