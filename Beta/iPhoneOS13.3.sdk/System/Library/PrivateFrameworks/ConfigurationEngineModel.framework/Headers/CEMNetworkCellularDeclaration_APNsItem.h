/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString;

@interface CEMNetworkCellularDeclaration_APNsItem : CEMPayloadBase

{
    NSString *_payloadName;
    NSString *_payloadAuthenticationType;
    NSString *_payloadUsername;
    NSString *_payloadPassword;
    NSString *_payloadProxyServer;
    NSNumber *_payloadProxyPort;
    NSNumber *_payloadDefaultProtocolMask;
    NSNumber *_payloadAllowedProtocolMask;
    NSNumber *_payloadAllowedProtocolMaskInRoaming;
}

@property (copy, nonatomic) NSString *payloadName;
@property (copy, nonatomic) NSString *payloadAuthenticationType;
@property (copy, nonatomic) NSString *payloadUsername;
@property (copy, nonatomic) NSString *payloadPassword;
@property (copy, nonatomic) NSString *payloadProxyServer;
@property (copy, nonatomic) NSNumber *payloadProxyPort;
@property (copy, nonatomic) NSNumber *payloadDefaultProtocolMask;
@property (copy, nonatomic) NSNumber *payloadAllowedProtocolMask;
@property (copy, nonatomic) NSNumber *payloadAllowedProtocolMaskInRoaming;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithName:(id)arg1;
+ (id)buildWithName:(id)arg1 withAuthenticationType:(id)arg2 withUsername:(id)arg3 withPassword:(id)arg4 withProxyServer:(id)arg5 withProxyPort:(id)arg6 withDefaultProtocolMask:(id)arg7 withAllowedProtocolMask:(id)arg8 withAllowedProtocolMaskInRoaming:(id)arg9;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
