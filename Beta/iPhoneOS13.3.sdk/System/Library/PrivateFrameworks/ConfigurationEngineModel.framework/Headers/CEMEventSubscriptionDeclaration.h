/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class CEMEventSubscriptionDeclaration_Schedule, NSArray, NSString;

@interface CEMEventSubscriptionDeclaration : CEMConfigurationBase

{
    NSArray *_payloadEvents;
    CEMEventSubscriptionDeclaration_Schedule *_payloadSchedule;
}

@property (copy, nonatomic) NSArray *payloadEvents;
@property (copy, nonatomic) CEMEventSubscriptionDeclaration_Schedule *payloadSchedule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withEvents:(id)arg2 withSchedule:(id)arg3;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withEvents:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
