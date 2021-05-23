/*
 Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSNumber;

@interface FTUserConfiguration : NSObject

{
    NSMutableDictionary *_cellularDataAvailableCache;
    NSMutableDictionary *_wifiAllowedCache;
    NSMutableDictionary *_nonBTAllowedCache;
    struct network_usage_policy_client_s *_usageClient;
    struct __CTServerConnection *_ctServerConnection;
}

@property (nonatomic) struct __CTServerConnection *ctServerConnection;
@property (retain, nonatomic) NSMutableDictionary *nonBTAllowedCache;
@property (nonatomic, readonly) _Bool _nonWifiFaceTimeEntitled;
@property (nonatomic) _Bool cellularFaceTimeEnabled;
@property (nonatomic) _Bool allowAnyNetwork;
@property (copy, nonatomic) NSArray *selectedPhoneNumberRegistrationSubscriptionLabels;
@property (copy, nonatomic, readonly) NSNumber *selectedPhoneNumberRegistrationSubscriptionNumber;
@property (nonatomic) _Bool isDeviceInDualPhoneIdentityMode;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_clearCaches;
- (_Bool)wifiAllowedForBundleId:(id)arg1;
- (_Bool)cellularDataEnabledForBundleId:(id)arg1;
- (void)_setupUsageHandlerIfNeeded;
- (_Bool)_getCellularDataEnabledForBundleID:(id)arg1;
- (_Bool)_getWifiDataAllowedForBundleID:(id)arg1;
- (void)_setAppCellularDataEnabled:(_Bool)arg1;
- (_Bool)_adequateInternalOrCarrierInstall;
- (void)silentlySetSelectedPhoneNumberRegistrationSubscriptionLabels:(id)arg1;
- (_Bool)_getNonBluetoothDataAllowedForBundleID:(id)arg1;
- (_Bool)nonBluetoothAllowedForBundleId:(id)arg1;

@end
