/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSNumber, NSString;

@interface CEMNetworkVPNDeclaration_PPP : CEMPayloadBase

{
    NSString *_payloadAuthName;
    NSString *_payloadAuthPassword;
    NSNumber *_payloadTokenCard;
    NSString *_payloadCommRemoteAddress;
    NSArray *_payloadAuthEAPPlugins;
    NSArray *_payloadAuthProtocol;
    NSNumber *_payloadCCPMPPE40Enabled;
    NSNumber *_payloadCCPMPPE128Enabled;
    NSNumber *_payloadCCPEnabled;
    NSNumber *_payloadDisconnectOnIdle;
    NSNumber *_payloadDisconnectOnIdleTimer;
}

@property (copy, nonatomic) NSString *payloadAuthName;
@property (copy, nonatomic) NSString *payloadAuthPassword;
@property (copy, nonatomic) NSNumber *payloadTokenCard;
@property (copy, nonatomic) NSString *payloadCommRemoteAddress;
@property (copy, nonatomic) NSArray *payloadAuthEAPPlugins;
@property (copy, nonatomic) NSArray *payloadAuthProtocol;
@property (copy, nonatomic) NSNumber *payloadCCPMPPE40Enabled;
@property (copy, nonatomic) NSNumber *payloadCCPMPPE128Enabled;
@property (copy, nonatomic) NSNumber *payloadCCPEnabled;
@property (copy, nonatomic) NSNumber *payloadDisconnectOnIdle;
@property (copy, nonatomic) NSNumber *payloadDisconnectOnIdleTimer;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithAuthName:(id)arg1 withAuthPassword:(id)arg2 withTokenCard:(id)arg3 withCommRemoteAddress:(id)arg4 withAuthEAPPlugins:(id)arg5 withAuthProtocol:(id)arg6 withCCPMPPE40Enabled:(id)arg7 withCCPMPPE128Enabled:(id)arg8 withCCPEnabled:(id)arg9 withDisconnectOnIdle:(id)arg10 withDisconnectOnIdleTimer:(id)arg11;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
