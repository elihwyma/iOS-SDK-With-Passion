/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <CoreTelephony/CoreTelephonyClient.h>

@class NSString;

@interface CoreTelephonyClient (TelephonyPreferences)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id delegate;

- (id)localizedCarrierBundleStringForKey:(id)arg1 subscription:(id)arg2 error:(id *)arg3;
- (id)carrierBundleForSubscription:(id)arg1 error:(id *)arg2;

@end
