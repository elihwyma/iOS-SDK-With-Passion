/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLAgent.h>

@class NSDate, NSString, PLEntryNotificationOperatorComposition, PLXPCListenerOperatorComposition;

@interface PLBluetoothAgent : PLAgent

{
    _Bool keepSessionAlive;
    struct BTSessionImpl *session;
    struct BTLocalDeviceImpl *localBluetoothDevice;
    unsigned char _logCount;
    PLEntryNotificationOperatorComposition *_batteryLevelChanged;
    PLEntryNotificationOperatorComposition *_sbcChanged;
    NSString *_btHardwareChipset;
    PLXPCListenerOperatorComposition *_leConnectionListener;
    PLXPCListenerOperatorComposition *_btHCIListener;
    PLXPCListenerOperatorComposition *_btA2DPListener;
    PLXPCListenerOperatorComposition *_btHFPListener;
    PLXPCListenerOperatorComposition *_btHCIVSEListener;
    PLXPCListenerOperatorComposition *_wirelessProxListener;
    PLEntryNotificationOperatorComposition *_wakeEntryNotifications;
    NSDate *_lastPowerEntryDate;
}

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLEntryNotificationOperatorComposition *sbcChanged;
@property (readonly) NSString *btHardwareChipset;
@property (retain) PLXPCListenerOperatorComposition *leConnectionListener;
@property (retain) PLXPCListenerOperatorComposition *btHCIListener;
@property (retain) PLXPCListenerOperatorComposition *btA2DPListener;
@property (retain) PLXPCListenerOperatorComposition *btHFPListener;
@property (retain) PLXPCListenerOperatorComposition *btHCIVSEListener;
@property (retain) PLXPCListenerOperatorComposition *wirelessProxListener;
@property (readonly) PLEntryNotificationOperatorComposition *wakeEntryNotifications;
@property (retain) NSDate *lastPowerEntryDate;
@property unsigned char logCount;

+ (void)load;
+ (id)defaults;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;

- (id)init;
- (void)dealloc;
- (void)log;
- (_Bool)isConnected;
- (_Bool)isDiscoverable;
- (void)initOperatorDependancies;
- (void)attachSession;
- (void)logwithBTOnCheck;
- (void)logEventIntervalLeConnectedDevices:(id)arg1 withRequest:(_Bool)arg2;
- (void)logEventIntervalHCIRawData:(id)arg1;
- (void)logEventBackwardWirelessProximity:(id)arg1;
- (void)logEventBackwardA2DP:(id)arg1;
- (void)logEventBackwardHFP:(id)arg1;
- (void)logEventIntervalWakeVSE:(id)arg1;
- (void)logEventIntervalConnectedDevices;
- (struct BTLocalDeviceImpl *)localBluetoothDevice;
- (void)sessionAttached:(struct BTSessionImpl *)arg1 withResult:(int)arg2;
- (void)sessionTerminated:(struct BTSessionImpl *)arg1 withResult:(int)arg2;
- (void)logEventForwardDeviceState;
- (void)logEventForwardPairedDevices;
- (_Bool)modulePowered;
- (void)logEventBackwardPowerProfileStats;
- (void)modelBluetoothOffPower;
- (_Bool)isConnectable;
- (id)advertisingDataDescription:(const char *)arg1:(unsigned long long)arg2;
- (void)modelBluetoothPower:(id)arg1;
- (id)btHardwareChipsetQuery;
- (_Bool)bluetoothPresent;
- (void)bluetoothSessionEvent:(int)arg1 onSession:(struct BTSessionImpl *)arg2 withResult:(int)arg3;
- (void)bluetoothDeviceEvent:(int)arg1 onDevice:(struct BTLocalDeviceImpl *)arg2 withResult:(int)arg3;

@end
