/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMSystemAirPlayDestinationsDeclaration_PasswordsItem : CEMPayloadBase

{
    NSString *_payloadDeviceName;
    NSString *_payloadPassword;
    NSString *_payloadDeviceID;
}

@property (copy, nonatomic) NSString *payloadDeviceName;
@property (copy, nonatomic) NSString *payloadPassword;
@property (copy, nonatomic) NSString *payloadDeviceID;

+ (id)allowedPayloadKeys;
+ (id)buildWithDeviceName:(id)arg1 withPassword:(id)arg2 withDeviceID:(id)arg3;
+ (id)buildRequiredOnlyWithDeviceName:(id)arg1 withPassword:(id)arg2 withDeviceID:(id)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
