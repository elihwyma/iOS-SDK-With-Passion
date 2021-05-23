/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMNetworkVPNDeclaration_VendorConfig : CEMPayloadBase

{
    NSString *_payloadRealm;
    NSString *_payloadRole;
    NSString *_payloadGroup;
    NSString *_payloadLoginGroupOrDomain;
}

@property (copy, nonatomic) NSString *payloadRealm;
@property (copy, nonatomic) NSString *payloadRole;
@property (copy, nonatomic) NSString *payloadGroup;
@property (copy, nonatomic) NSString *payloadLoginGroupOrDomain;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithRealm:(id)arg1 withRole:(id)arg2 withGroup:(id)arg3 withLoginGroupOrDomain:(id)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
