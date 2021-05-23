/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSArray, NSString;

@interface CEMDeviceHomeScreenLayoutDeclaration : CEMConfigurationBase

{
    NSArray *_payloadDock;
    NSArray *_payloadPages;
}

@property (copy, nonatomic) NSArray *payloadDock;
@property (copy, nonatomic) NSArray *payloadPages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withDock:(id)arg2 withPages:(id)arg3;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withPages:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
