/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMNetworkVPNDeclaration_AlwaysOnAllowedCaptiveNetworkPlugin : CEMPayloadBase

{
    NSString *_payloadBundleIdentifier;
}

@property (copy, nonatomic) NSString *payloadBundleIdentifier;

+ (id)allowedPayloadKeys;
+ (id)buildWithBundleIdentifier:(id)arg1;
+ (id)buildRequiredOnlyWithBundleIdentifier:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
