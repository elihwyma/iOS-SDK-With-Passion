/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, TUCoreTelephonyClient;

@interface TUSenderIdentityClient : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    id <TUCoreTelephonyClient> _client;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) id <TUCoreTelephonyClient> client;

- (id)init;
- (_Bool)isRTTSupportedForSenderIdentityUUID:(id)arg1;
- (_Bool)isTTYSoftwareAvailableForSenderIdentityUUID:(id)arg1;
- (_Bool)isTTYSupportedForSenderIdentityUUID:(id)arg1;
- (_Bool)isTTYHardwareAvailableForSenderIdentityUUID:(id)arg1;
- (_Bool)isRTTAvailableForSenderIdentityUUID:(id)arg1;
- (_Bool)isTTYAvailableForSenderIdentityUUID:(id)arg1;
- (_Bool)isTTYEnabledForSenderIdentityUUID:(id)arg1;
- (_Bool)isTTYHardwareEnabledForSenderIdentityUUID:(id)arg1;
- (_Bool)isTTYHardwareSupportedForSenderIdentityUUID:(id)arg1;
- (_Bool)isTTYSoftwareEnabledForSenderIdentityUUID:(id)arg1;
- (_Bool)isTTYSoftwareSupportedForSenderIdentityUUID:(id)arg1;
- (_Bool)inEmergencyMode;
- (_Bool)isEmergencyNumberForDigits:(id)arg1 senderIdentityUUID:(id)arg2;
- (_Bool)isWhitelistedEmergencyNumberForDigits:(id)arg1 senderIdentityUUID:(id)arg2;
- (_Bool)isEmergencyNumberForDigits:(id)arg1 senderIdentityUUID:(id)arg2 error:(id *)arg3;
- (_Bool)isWhitelistedEmergencyNumberForDigits:(id)arg1 senderIdentityUUID:(id)arg2 error:(id *)arg3;
- (_Bool)shouldShowEmergencyCallbackModeAlertForSenderIdentityUUID:(id)arg1 error:(id *)arg2;
- (_Bool)shouldShowEmergencyCallbackModeAlertForSenderIdentityUUID:(id)arg1;

@end
