/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMAccountGoogleDeclaration_CommunicationServiceRulesDefaultServiceHandlers;

@interface CEMAccountGoogleDeclaration_CommunicationServiceRules : CEMPayloadBase

{
    CEMAccountGoogleDeclaration_CommunicationServiceRulesDefaultServiceHandlers *_payloadDefaultServiceHandlers;
}

@property (copy, nonatomic) CEMAccountGoogleDeclaration_CommunicationServiceRulesDefaultServiceHandlers *payloadDefaultServiceHandlers;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithDefaultServiceHandlers:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
