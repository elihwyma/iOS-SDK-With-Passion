/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMDeviceActivationLockBypassCodeCommand_Status : CEMPayloadBase

{
    NSString *_statusActivationLockBypassCode;
}

@property (copy, nonatomic) NSString *statusActivationLockBypassCode;

+ (id)allowedStatusKeys;
+ (id)allowedReasons;
+ (id)buildWithActivationLockBypassCode:(id)arg1;
+ (id)buildRequiredOnlyWithActivationLockBypassCode:(id)arg1;

- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end
