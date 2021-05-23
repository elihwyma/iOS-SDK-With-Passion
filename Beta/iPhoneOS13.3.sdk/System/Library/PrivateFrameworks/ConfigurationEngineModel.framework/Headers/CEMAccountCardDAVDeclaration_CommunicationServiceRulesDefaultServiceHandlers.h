/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMAccountCardDAVDeclaration_CommunicationServiceRulesDefaultServiceHandlers : CEMPayloadBase

{
    NSString *_payloadAudioCall;
}

@property (copy, nonatomic) NSString *payloadAudioCall;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithAudioCall:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
