/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSNumber, NSString;

@interface CEMSystemGameCenterDeclaration : CEMConfigurationBase

{
    NSNumber *_payloadAllowGameCenter;
    NSNumber *_payloadAllowMultiplayerGaming;
    NSNumber *_payloadAllowAddingGameCenterFriends;
}

@property (copy, nonatomic) NSNumber *payloadAllowGameCenter;
@property (copy, nonatomic) NSNumber *payloadAllowMultiplayerGaming;
@property (copy, nonatomic) NSNumber *payloadAllowAddingGameCenterFriends;
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
+ (id)buildWithIdentifier:(id)arg1 withAllowGameCenter:(id)arg2 withAllowMultiplayerGaming:(id)arg3 withAllowAddingGameCenterFriends:(id)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
