/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <AppPredictionInternal/ATXDuetEvent.h>

@class NSString;

@interface ATXBluetoothDuetEvent : ATXDuetEvent

{
    NSString *_deviceIdentifier;
    NSString *_deviceName;
    long long _bluetoothState;
    long long _deviceType;
}

@property (nonatomic, readonly) NSString *deviceIdentifier;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) long long bluetoothState;
@property (nonatomic, readonly) long long deviceType;

+ (long long)deviceTypeFromBluetoothDeviceType:(id)arg1;

- (id)description;
- (id)identifier;
- (id)initWithDKEvent:(id)arg1;
- (id)initWithCurrentContextStoreValues;
- (id)initWithBluetoothState:(long long)arg1 deviceType:(long long)arg2 deviceName:(id)arg3 hardwareAddress:(id)arg4 startDate:(id)arg5 endDate:(id)arg6;

@end
