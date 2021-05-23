/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <SiriActivation/SiriLongPressButtonSource.h>

@class SiriBluetoothContext;

@interface SiriBluetoothDeviceSource : SiriLongPressButtonSource

{
    long long _buttonIdentifier;
    double _longPressInterval;
    SiriBluetoothContext *_context;
}

@property (nonatomic) long long buttonIdentifier;
@property (nonatomic) double longPressInterval;
@property (retain, nonatomic) SiriBluetoothContext *context;

+ (id)bluetoothDeviceForIdentifier:(long long)arg1 bluetoothDevice:(id)arg2;

- (void)activate;
- (void)deactivate;

@end
