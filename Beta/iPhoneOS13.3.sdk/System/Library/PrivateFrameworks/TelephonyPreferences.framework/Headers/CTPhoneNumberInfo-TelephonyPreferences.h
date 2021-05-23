/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <CoreTelephony/CTPhoneNumberInfo.h>

@class NSString;

@interface CTPhoneNumberInfo (TelephonyPreferences)

@property (copy, nonatomic, readonly) NSString *tps_localizedNumber;
@property (copy, nonatomic, readonly) NSString *tps_normalizedNumber;

@end
