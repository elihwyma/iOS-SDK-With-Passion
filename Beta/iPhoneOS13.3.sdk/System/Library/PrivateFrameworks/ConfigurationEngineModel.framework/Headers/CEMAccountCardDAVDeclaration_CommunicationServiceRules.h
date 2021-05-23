/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMAccountCardDAVDeclaration_CommunicationServiceRulesDefaultServiceHandlers;

@interface CEMAccountCardDAVDeclaration_CommunicationServiceRules : CEMPayloadBase

{
    CEMAccountCardDAVDeclaration_CommunicationServiceRulesDefaultServiceHandlers *_payloadDefaultServiceHandlers;
}

@property (copy, nonatomic) CEMAccountCardDAVDeclaration_CommunicationServiceRulesDefaultServiceHandlers *payloadDefaultServiceHandlers;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithDefaultServiceHandlers:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
