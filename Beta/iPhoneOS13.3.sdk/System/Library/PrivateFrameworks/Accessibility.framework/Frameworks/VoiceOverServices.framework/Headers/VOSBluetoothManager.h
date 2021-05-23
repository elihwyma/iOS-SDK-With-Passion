/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface VOSBluetoothManager : NSObject

{
    struct BTLocalDeviceImpl *_localDevice;
    struct BTSessionImpl *_session;
    long long _available;
    unsigned int _authorizedServices;
    _Bool _audioConnected;
    _Bool _scanningEnabled;
    struct BTDiscoveryAgentImpl *_discoveryAgent;
    struct BTPairingAgentImpl *_pairingAgent;
    NSMutableDictionary *_btAddrDict;
    NSMutableDictionary *_btDeviceDict;
    _Bool _wantsScanningEnabled;
    _Bool _wantsDiscoveryEnabled;
    NSDictionary *_brailleDriverDeviceDetectionInfo;
}

@property (nonatomic) unsigned int authorizedServices;
@property (nonatomic, readonly) NSArray *connectingDevices;
@property (nonatomic, readonly) NSArray *pairedDevices;
@property (nonatomic, readonly) NSArray *pairedBrailleDevices;

+ (id)sharedInstance;
+ (int)lastInitError;

- (id)init;
- (void)dealloc;
- (_Bool)enabled;
- (_Bool)setEnabled:(_Bool)arg1;
- (void)postNotification:(id)arg1;
- (void)postNotificationName:(id)arg1 object:(id)arg2;
- (_Bool)available;
- (_Bool)connected;
- (_Bool)_setup:(struct BTSessionImpl *)arg1;
- (long long)powerState;
- (void)_postNotification:(id)arg1;
- (_Bool)_attach:(id)arg1;
- (void)connectDevice:(id)arg1;
- (void)connectDevice:(id)arg1 withServices:(unsigned int)arg2;
- (void)setPincode:(id)arg1 forDevice:(id)arg2;
- (void)acceptSSP:(int)arg1 forDevice:(id)arg2;
- (void)unpairDevice:(id)arg1;
- (_Bool)isServiceSupported:(unsigned int)arg1;
- (void)_cleanup:(_Bool)arg1;
- (void)_postNotificationWithArray:(id)arg1;
- (_Bool)powered;
- (void)setDeviceScanningEnabled:(_Bool)arg1;
- (_Bool)setPowered:(_Bool)arg1;
- (void)setDevicePairingEnabled:(_Bool)arg1;
- (_Bool)devicePairingEnabled;
- (void)cancelPairing;
- (id)addDeviceIfNeeded:(struct BTDeviceImpl *)arg1;
- (void)postNotificationName:(id)arg1 object:(id)arg2 error:(id)arg3;
- (void)_powerChanged;
- (_Bool)isAnyoneScanning;
- (void)_removeDevice:(id)arg1;
- (_Bool)wasDeviceDiscovered:(id)arg1;
- (_Bool)deviceScanningEnabled;
- (void)resetDeviceScanning;
- (void)_restartScan;
- (void)_discoveryStateChanged;
- (_Bool)isDiscoverable;
- (void)setDiscoverable:(_Bool)arg1;
- (_Bool)connectable;
- (void)setConnectable:(_Bool)arg1;
- (void)_connectedStatusChanged;
- (void)_connectabilityChanged;
- (_Bool)audioConnected;
- (void)setAudioConnected:(_Bool)arg1;
- (void)_setDiscoveryAgentScanning:(_Bool)arg1;
- (_Bool)isValidBrailleDevice:(id)arg1;
- (_Bool)_onlySensorsConnected;
- (id)deviceForAddressString:(id)arg1;
- (unsigned int)authorizedServicesForDevice:(id)arg1;

@end
