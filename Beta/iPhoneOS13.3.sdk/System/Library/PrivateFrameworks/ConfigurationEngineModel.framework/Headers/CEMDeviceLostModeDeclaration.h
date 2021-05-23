/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSNumber, NSString;

@interface CEMDeviceLostModeDeclaration : CEMConfigurationBase

{
    NSNumber *_payloadEnable;
    NSString *_payloadMessage;
    NSString *_payloadPhoneNumber;
    NSString *_payloadFootnote;
}

@property (copy, nonatomic) NSNumber *payloadEnable;
@property (copy, nonatomic) NSString *payloadMessage;
@property (copy, nonatomic) NSString *payloadPhoneNumber;
@property (copy, nonatomic) NSString *payloadFootnote;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withEnable:(id)arg2 withMessage:(id)arg3 withPhoneNumber:(id)arg4 withFootnote:(id)arg5;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withEnable:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
