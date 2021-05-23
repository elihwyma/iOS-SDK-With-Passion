/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <Foundation/NSString.h>

@interface NSString (TPSCallWaitingAdditions)

@property (nonatomic, readonly) long long tps_encryptedIdentityType;

+ (id)tps_stringWithTPSEncryptedIdentityType:(long long)arg1;
+ (id)tps_ctStringWithTPSEncryptedIdentityType:(long long)arg1;
+ (id)tps_stringWithTPSCallWaitingState:(long long)arg1;
+ (id)tps_stringWithCTPhoneBookName:(int)arg1;
+ (id)tps_stringWithTPSCallingLineIdRestrictionState:(long long)arg1;
+ (id)tps_stringWithTPSCallForwardingServiceType:(long long)arg1;

@end
