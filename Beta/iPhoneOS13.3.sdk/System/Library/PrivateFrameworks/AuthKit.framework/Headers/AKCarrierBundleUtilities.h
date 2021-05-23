/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

@class CoreTelephonyClient;

@protocol OS_dispatch_queue;

@interface AKCarrierBundleUtilities : NSObject

{
    CoreTelephonyClient *_telephonyClient;
    NSObject<OS_dispatch_queue> *_carrierUtilitiesQueue;
}

+ (id)sharedInstance;

- (id)init;
- (id)_formattedValueForPhoneNumber:(id)arg1 countryCode:(id)arg2;
- (id)phoneBundleInfoWithAdditionalInfo:(id)arg1 error:(id *)arg2;

@end
