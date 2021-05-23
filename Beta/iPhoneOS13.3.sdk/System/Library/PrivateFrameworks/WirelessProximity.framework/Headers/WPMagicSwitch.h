/*
 Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@protocol WPMagicSwitchDelegate;

@interface WPMagicSwitch

{
    id <WPMagicSwitchDelegate> _delegate;
}

@property (weak, nonatomic) id <WPMagicSwitchDelegate> delegate;

- (void)invalidate;
- (void)stopAdvertising;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)stopScanning;
- (void)stateDidChange:(long long)arg1;
- (CDStruct_2ec95fd7)dutyCycleToScanningRates:(long long)arg1;
- (id)clientAsString;
- (void)deviceDiscovered:(id)arg1;
- (void)scanningStartedOfType:(unsigned char)arg1;
- (void)scanningStoppedOfType:(unsigned char)arg1;
- (void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)advertisingStartedOfType:(unsigned char)arg1;
- (void)advertisingStoppedOfType:(unsigned char)arg1 withError:(id)arg2;
- (void)advertisingPendingOfType:(unsigned char)arg1;
- (void)startScanningWithData:(id)arg1;
- (void)startAdvertisingWithData:(id)arg1;

@end
