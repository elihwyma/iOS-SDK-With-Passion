/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMAnyPayload, NSString;

@interface CEMActivationAdvancedDeclaration_ConfigurationsItem : CEMPayloadBase

{
    NSString *_payloadIdentifier;
    CEMAnyPayload *_payloadOverrides;
}

@property (copy, nonatomic) NSString *payloadIdentifier;
@property (copy, nonatomic) CEMAnyPayload *payloadOverrides;

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withOverrides:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
