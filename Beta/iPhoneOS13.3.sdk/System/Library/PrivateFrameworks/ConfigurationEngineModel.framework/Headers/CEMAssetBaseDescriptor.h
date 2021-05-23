/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMAssetBaseDescriptor : CEMPayloadBase

{
    NSString *_payloadTitle;
    NSString *_payloadDescription;
}

@property (copy, nonatomic) NSString *payloadTitle;
@property (copy, nonatomic) NSString *payloadDescription;

+ (id)allowedPayloadKeys;
+ (id)buildWithTitle:(id)arg1 withDescription:(id)arg2;
+ (id)buildRequiredOnlyWithTitle:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
