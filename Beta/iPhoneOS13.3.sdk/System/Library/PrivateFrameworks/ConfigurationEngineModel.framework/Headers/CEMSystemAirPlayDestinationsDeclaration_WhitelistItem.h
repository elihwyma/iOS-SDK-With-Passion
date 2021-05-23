/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMSystemAirPlayDestinationsDeclaration_WhitelistItem : CEMPayloadBase

{
    NSString *_payloadDeviceID;
}

@property (copy, nonatomic) NSString *payloadDeviceID;

+ (id)allowedPayloadKeys;
+ (id)buildWithDeviceID:(id)arg1;
+ (id)buildRequiredOnlyWithDeviceID:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
