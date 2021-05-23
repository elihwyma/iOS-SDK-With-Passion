/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class CoreTelephonyClient, NSConditionLock, NSString;

@protocol OS_dispatch_queue;

@interface GEOTelephonyInfo : NSObject

{
    struct __CTServerConnection *_telephonyConnection;
    CoreTelephonyClient *_telephonyClient;
    NSConditionLock *_carrierLock;
    NSConditionLock *_deviceAuthLock;
    NSConditionLock *_mapsAuthLock;
    NSObject<OS_dispatch_queue> *_telephonyQueue;
    NSString *_carrier;
    _Bool _deviceAuthorized;
    _Bool _mapsAuthorized;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)hasCellularCapability;
+ (id)sharedInfo;

- (id)init;
- (void)operatorNameChanged:(id)arg1 name:(id)arg2;
- (void)dataSettingsChanged:(id)arg1;
- (void)setupClient;
- (void)_updateMapsAuthed;
- (id)cellularCarrier;
- (id)cellularCarrierIfAvailable;
- (_Bool)isDeviceAuthorizedForCellular;
- (id)isDeviceAuthorizedForCellularIfAvailable;
- (_Bool)isMapsAuthorizedForCellular;
- (id)isMapsAuthorizedForCellularIfAvailable;
- (int)cellularDataStateIfAvailable;

@end
