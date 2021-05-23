/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSArray, NSString;

@interface CEMPolicyCategoryDeclaration : CEMConfigurationBase

{
    NSString *_payloadMode;
    NSArray *_payloadCategories;
}

@property (copy, nonatomic) NSString *payloadMode;
@property (copy, nonatomic) NSArray *payloadCategories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withMode:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withMode:(id)arg2 withCategories:(id)arg3;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
