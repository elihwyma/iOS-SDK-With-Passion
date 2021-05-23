/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class CoreTelephonyClient, RadiosPreferences;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HKMobileCountryCodeManager : NSObject

{
    CoreTelephonyClient *_coreTelephonyClient;
    struct __CTServerConnection *_coreTelephonyServerConnection;
    NSObject<OS_dispatch_queue> *_backgroundQueryQueue;
    RadiosPreferences *_radiosPreferences;
}

@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient;
@property (nonatomic) struct __CTServerConnection *coreTelephonyServerConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueryQueue;
@property (nonatomic, readonly) RadiosPreferences *radiosPreferences;

- (id)init;
- (void)currentMobileCountryCodeFromCellularWithCompletion:(CDUnknownBlockType)arg1;

@end
