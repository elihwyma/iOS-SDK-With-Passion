/*
 Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class NSMapTable, NSMutableArray;

@protocol CBCentralManagerDelegate;

@interface CBCentralManager

{
    struct {
        unsigned int willRestoreState:1;
        unsigned int didDiscoverPeripheral:1;
        unsigned int didConnectPeripheral:1;
        unsigned int didFailToConnectPeripheral:1;
        unsigned int didDisconnectPeripheral:1;
        unsigned int didUpdatePeripheralConnectionState:1;
        unsigned int didFindPeripheral:1;
        unsigned int didLosePeripheral:1;
        unsigned int didLoseZone:1;
        unsigned int didUpdateConnectionParameters:1;
        unsigned int connectionEventDidOccur:1;
        unsigned int didSendBytesToPeripheralWithError:1;
        unsigned int didReceiveDataFromPeripheral:1;
        unsigned int didDiscoverMultiplePeripherals:1;
        unsigned int didUpdateANCSAuthorizationForPeripheral:1;
        unsigned int canSendDataToPeripheral:1;
    } _delegateFlags;
    _Bool _isScanning;
    id <CBCentralManagerDelegate> _delegate;
    NSMapTable *_peripherals;
    NSMutableArray *_discoveredPeripherals;
}

@property (nonatomic) _Bool isScanning;
@property (retain, nonatomic, readonly) NSMapTable *peripherals;
@property (retain) NSMutableArray *discoveredPeripherals;
@property (weak, nonatomic) id <CBCentralManagerDelegate> delegate;

+ (_Bool)supportsFeatures:(unsigned long long)arg1;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)setDesiredConnectionLatency:(long long)arg1 forPeripheral:(id)arg2;
- (void)connectPeripheral:(id)arg1 options:(id)arg2;
- (id)retrievePeripheralsWithIdentifiers:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3;
- (void)cancelPeripheralConnection:(id)arg1;
- (void)stopScan;
- (void)scanForPeripheralsWithServices:(id)arg1 options:(id)arg2;
- (id)retrievePeripheralWithAddress:(id)arg1;
- (id)dataArrayToUUIDArray:(id)arg1;
- (void)handleMsg:(unsigned short)arg1 args:(id)arg2;
- (id)peripheralWithInfo:(id)arg1;
- (void)forEachPeripheral:(CDUnknownBlockType)arg1;
- (void)orphanPeripherals;
- (id)peripheralWithIdentifier:(id)arg1;
- (id)retrieveConnectedPeripheralsWithServices:(id)arg1;
- (id)retrieveConnectedPeripheralsWithServices:(id)arg1 allowAll:(_Bool)arg2;
- (void)cancelPeripheralConnection:(id)arg1 options:(id)arg2;
- (_Bool)isMsgAllowedAlways:(unsigned short)arg1;
- (void)handleRestoringState:(id)arg1;
- (void)handlePeripheralDiscovered:(id)arg1;
- (void)handlePeripheralConnectionCompleted:(id)arg1;
- (void)handlePeripheralCLReady:(id)arg1;
- (void)handlePeripheralDisconnectionCompleted:(id)arg1;
- (void)handlePeripheralConnectionStateUpdated:(id)arg1;
- (void)handlePeripheralTrackingUpdated:(id)arg1;
- (void)handleZoneLost:(id)arg1;
- (void)handleConnectionParametersUpdated:(id)arg1;
- (void)handleAdvertisingAddressChanged:(id)arg1;
- (void)handleApplicationActivityEvent:(id)arg1;
- (void)handleApplicationConnectionEventDidOccur:(id)arg1;
- (void)handleReadyForUpdates:(id)arg1;
- (void)handleDidSendBytesToPeripheralwithError:(id)arg1;
- (void)handleDidReceiveDataFromPeripheral:(id)arg1;
- (void)handleSupportedFeatures:(id)arg1;
- (void)handleAncsAuthChanged:(id)arg1;
- (id)peerWithInfo:(id)arg1;
- (void)retrievePeripherals:(id)arg1;
- (id)retrieveState;
- (void)retrieveConnectedPeripherals;
- (void)randomizeAFHMapForPeripheral:(id)arg1;
- (void)wipeDuplicateFilterList:(id)arg1;
- (void)addAdvancedMatchingRule:(id)arg1;
- (void)removeAdvancedMatchingRule:(id)arg1;
- (void)setEnhancedScanEnable:(id)arg1;
- (void)setEnhancedSetScanParamtersMultiCore:(id)arg1;
- (void)removeSingleEntryDuplicateFilter:(id)arg1;
- (unsigned short)getTotalSupportedAdvancedMatchingRules;
- (unsigned short)getRemainingAdvancedMatchingRule;
- (void)cancelPeripheralConnection:(id)arg1 force:(_Bool)arg2;
- (void)startTrackingPeripheral:(id)arg1 options:(id)arg2;
- (void)stopTrackingPeripheral:(id)arg1 options:(id)arg2;
- (void)enablePrivateModeForPeripheral:(id)arg1 forDuration:(unsigned short)arg2;
- (void)registerForConnectionEventsWithOptions:(id)arg1;
- (void)pauseLeConnectionManager;
- (void)resumeLeConnectionManager;
- (void)pauseScans;
- (void)resumeScans;
- (void)sendData:(id)arg1 toPeripheral:(id)arg2;
- (void)setConnectionEventOptions:(id)arg1;
- (void)setMatchActionRules:(id)arg1;
- (id)createPeripheralWithAddress:(id)arg1 andIdentifier:(id)arg2;
- (_Bool)isMsgAllowedWhenOff:(unsigned short)arg1;

@end
