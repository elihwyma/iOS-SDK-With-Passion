/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
 */

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSArray, NSString, RMProtocolSupportedFeatures, RMProtocolSupportedPayloads;

@interface RMProtocolEnrollRequest : RMModelPayloadBase

{
    NSString *_requestEnrollmentToken;
    NSString *_requestUDID;
    NSString *_requestSerialNumber;
    NSString *_requestProductName;
    NSString *_requestOSVersion;
    NSString *_requestBuildVersion;
    NSArray *_requestSupportedVersions;
    RMProtocolSupportedFeatures *_requestSupportedFeatures;
    RMProtocolSupportedPayloads *_requestSupportedPayloads;
}

@property (copy, nonatomic) NSString *requestEnrollmentToken;
@property (copy, nonatomic) NSString *requestUDID;
@property (copy, nonatomic) NSString *requestSerialNumber;
@property (copy, nonatomic) NSString *requestProductName;
@property (copy, nonatomic) NSString *requestOSVersion;
@property (copy, nonatomic) NSString *requestBuildVersion;
@property (copy, nonatomic) NSArray *requestSupportedVersions;
@property (copy, nonatomic) RMProtocolSupportedFeatures *requestSupportedFeatures;
@property (copy, nonatomic) RMProtocolSupportedPayloads *requestSupportedPayloads;

+ (id)requestWithEnrollmentToken:(id)arg1 UDID:(id)arg2 serialNumber:(id)arg3 productName:(id)arg4 osVersion:(id)arg5 buildVersion:(id)arg6 supportedVersions:(id)arg7 supportedFeatures:(id)arg8 supportedPayloads:(id)arg9;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializePayloadWithType:(short)arg1;

@end
