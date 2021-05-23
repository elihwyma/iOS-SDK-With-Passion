/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSDictionary;

@interface CEMAnyPayload : CEMPayloadBase

{
    NSDictionary *_payloadKeys;
}

@property (copy) NSDictionary *payloadKeys;

+ (id)buildFromDictionary:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (id)serializePayload;

@end
