/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <CoreTelephony/CTXPCServiceSubscriptionContext.h>

@class NSString, NSUUID;

@interface CTXPCServiceSubscriptionContext (TelephonyPreferences)

@property (copy, nonatomic, readonly) NSString *tps_isoCountryCode;
@property (copy, nonatomic, readonly) NSString *tps_localizedLabel;
@property (copy, nonatomic, readonly) NSString *tps_localizedPhoneNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)telephonyClient;

@end
