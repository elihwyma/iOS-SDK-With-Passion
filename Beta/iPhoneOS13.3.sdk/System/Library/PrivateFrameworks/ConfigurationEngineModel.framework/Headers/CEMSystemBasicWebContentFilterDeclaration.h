/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSArray, NSNumber, NSString;

@interface CEMSystemBasicWebContentFilterDeclaration : CEMConfigurationBase

{
    NSNumber *_payloadRestrictWeb;
    NSNumber *_payloadUseContentFilter;
    NSNumber *_payloadWhiteListEnabled;
    NSArray *_payloadSiteWhiteList;
    NSArray *_payloadFilterWhiteList;
    NSArray *_payloadFilterBlackList;
}

@property (copy, nonatomic) NSNumber *payloadRestrictWeb;
@property (copy, nonatomic) NSNumber *payloadUseContentFilter;
@property (copy, nonatomic) NSNumber *payloadWhiteListEnabled;
@property (copy, nonatomic) NSArray *payloadSiteWhiteList;
@property (copy, nonatomic) NSArray *payloadFilterWhiteList;
@property (copy, nonatomic) NSArray *payloadFilterBlackList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withRestrictWeb:(id)arg2;
+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withRestrictWeb:(id)arg2 withUseContentFilter:(id)arg3 withWhiteListEnabled:(id)arg4 withSiteWhiteList:(id)arg5 withFilterWhiteList:(id)arg6 withFilterBlackList:(id)arg7;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (id)synthesizeProfileOutUUIDs:(id)arg1 withOldUUIDs:(id)arg2 assetProviders:(id)arg3;

@end
