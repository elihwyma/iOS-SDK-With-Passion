/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMCommandBase.h>

@class NSNumber, NSString;

@interface CEMClassroomRequestMirroringCommand : CEMCommandBase

{
    NSString *_payloadDestinationName;
    NSString *_payloadDestinationDeviceID;
    NSNumber *_payloadScanTime;
    NSString *_payloadPassword;
}

@property (copy, nonatomic) NSString *payloadDestinationName;
@property (copy, nonatomic) NSString *payloadDestinationDeviceID;
@property (copy, nonatomic) NSNumber *payloadScanTime;
@property (copy, nonatomic) NSString *payloadPassword;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)buildWithIdentifier:(id)arg1 withDestinationName:(id)arg2 withDestinationDeviceID:(id)arg3 withScanTime:(id)arg4 withPassword:(id)arg5;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)mustBeSupervised;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (int)executionLevel;

@end
