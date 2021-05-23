/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <CoreTelephony/CTXPCServiceSubscriptionContext.h>

@class NSNumber, NSString, NSUUID;

@interface CTXPCServiceSubscriptionContext (TelephonyVoicemail)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) NSString *labelID;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *phoneNumber;
@property (nonatomic, readonly) NSNumber *userDataPreferred;
@property (nonatomic, readonly) NSNumber *userDefaultVoice;
@property (nonatomic, readonly) NSString *vm_isoCountryCode;
@property (nonatomic, readonly) NSUUID *vm_labelUUID;
@property (nonatomic, readonly) NSString *vm_telephoneNumber;

+ (id)telephonyClient;

@end
