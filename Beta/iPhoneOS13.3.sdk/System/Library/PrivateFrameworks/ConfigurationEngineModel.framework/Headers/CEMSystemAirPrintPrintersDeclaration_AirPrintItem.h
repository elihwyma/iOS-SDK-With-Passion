/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString;

@interface CEMSystemAirPrintPrintersDeclaration_AirPrintItem : CEMPayloadBase

{
    NSString *_payloadIPAddress;
    NSString *_payloadResourcePath;
    NSNumber *_payloadPort;
    NSNumber *_payloadForceTLS;
}

@property (copy, nonatomic) NSString *payloadIPAddress;
@property (copy, nonatomic) NSString *payloadResourcePath;
@property (copy, nonatomic) NSNumber *payloadPort;
@property (copy, nonatomic) NSNumber *payloadForceTLS;

+ (id)allowedPayloadKeys;
+ (id)buildWithIPAddress:(id)arg1 withResourcePath:(id)arg2 withPort:(id)arg3 withForceTLS:(id)arg4;
+ (id)buildRequiredOnlyWithIPAddress:(id)arg1 withResourcePath:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
