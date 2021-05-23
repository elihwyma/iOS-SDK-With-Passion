/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMCommandBase.h>

@class NSNumber, NSString;

@interface CEMPasscodeSetFirmwarePasswordCommand : CEMCommandBase

{
    NSString *_payloadCurrentPassword;
    NSString *_payloadNewPassword;
    NSNumber *_payloadAllowOroms;
}

@property (copy, nonatomic) NSString *payloadCurrentPassword;
@property (copy, nonatomic) NSString *payloadNewPassword;
@property (copy, nonatomic) NSNumber *payloadAllowOroms;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)buildWithIdentifier:(id)arg1 withCurrentPassword:(id)arg2 withNewPassword:(id)arg3 withAllowOroms:(id)arg4;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withNewPassword:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)mustBeSupervised;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (int)executionLevel;

@end
