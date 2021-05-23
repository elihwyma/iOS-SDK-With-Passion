/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSNumber;

@interface CEMNetworkVPNDeclaration_AlwaysOn : CEMPayloadBase

{
    NSArray *_payloadTunnelConfigurations;
    NSNumber *_payloadUIToggleEnabled;
    NSArray *_payloadServiceExceptions;
    NSNumber *_payloadAllowCaptiveWebSheet;
    NSNumber *_payloadAllowAllCaptiveNetworkPlugins;
    NSArray *_payloadAllowedCaptiveNetworkPlugins;
}

@property (copy, nonatomic) NSArray *payloadTunnelConfigurations;
@property (copy, nonatomic) NSNumber *payloadUIToggleEnabled;
@property (copy, nonatomic) NSArray *payloadServiceExceptions;
@property (copy, nonatomic) NSNumber *payloadAllowCaptiveWebSheet;
@property (copy, nonatomic) NSNumber *payloadAllowAllCaptiveNetworkPlugins;
@property (copy, nonatomic) NSArray *payloadAllowedCaptiveNetworkPlugins;

+ (id)allowedPayloadKeys;
+ (id)buildWithTunnelConfigurations:(id)arg1 withUIToggleEnabled:(id)arg2 withServiceExceptions:(id)arg3 withAllowCaptiveWebSheet:(id)arg4 withAllowAllCaptiveNetworkPlugins:(id)arg5 withAllowedCaptiveNetworkPlugins:(id)arg6;
+ (id)buildRequiredOnlyWithTunnelConfigurations:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
