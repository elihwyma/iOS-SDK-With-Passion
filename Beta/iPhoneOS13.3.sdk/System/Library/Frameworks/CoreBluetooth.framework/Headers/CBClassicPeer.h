/*
 Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class NSArray, NSData, NSHashTable, NSNumber, NSString;

@interface CBClassicPeer

{
    _Bool _isIncoming;
    _Bool _isAppleDevice;
    unsigned char _batteryPercentSingle;
    unsigned char _batteryPercentLeft;
    unsigned char _batteryPercentRight;
    unsigned char _batteryPercentCase;
    unsigned char _batteryPercentCombined;
    _Bool _inEarDetect;
    unsigned char _micMode;
    unsigned char _buttonMode;
    unsigned char _leftDoubleTap;
    unsigned char _rightDoubleTap;
    unsigned char _listeningMode;
    unsigned char _eqMode;
    unsigned char _lrDetectionMode;
    unsigned char _doubleTapCapability;
    _Bool _traceLogging;
    unsigned char _primaryBud;
    unsigned char _primaryInEar;
    unsigned char _secondaryInEar;
    _Bool _inEar;
    _Bool _isLEHID;
    _Bool _isDevFused;
    unsigned char _modeSupported;
    unsigned short _connectionHandle;
    unsigned short _productID;
    unsigned short _vendorID;
    unsigned short _vendorIDSource;
    unsigned short _syncSettings;
    int _deviceType;
    long long _state;
    NSString *_name;
    long long _systemState;
    NSArray *_syncGroups;
    NSArray *_services;
    NSString *_addressString;
    NSData *_addressData;
    unsigned long long _appleFeatureBitMask;
    NSNumber *_RSSI;
    NSHashTable *_l2capChannels;
}

@property (nonatomic) int deviceType;
@property (nonatomic) _Bool isIncoming;
@property (nonatomic) long long state;
@property (nonatomic) long long systemState;
@property (nonatomic, readonly) unsigned short connectionHandle;
@property (nonatomic) _Bool isAppleDevice;
@property (nonatomic) unsigned short productID;
@property (nonatomic) unsigned short vendorID;
@property (nonatomic) unsigned short vendorIDSource;
@property (retain, nonatomic) NSArray *syncGroups;
@property (nonatomic) unsigned short syncSettings;
@property (nonatomic) unsigned char batteryPercentSingle;
@property (nonatomic) unsigned char batteryPercentLeft;
@property (nonatomic) unsigned char batteryPercentRight;
@property (nonatomic) unsigned char batteryPercentCase;
@property (nonatomic) unsigned char batteryPercentCombined;
@property (nonatomic) _Bool inEarDetect;
@property (nonatomic) unsigned char micMode;
@property (nonatomic) unsigned char buttonMode;
@property (nonatomic) unsigned char leftDoubleTap;
@property (nonatomic) unsigned char rightDoubleTap;
@property (nonatomic) unsigned char listeningMode;
@property (nonatomic) unsigned char eqMode;
@property (nonatomic) unsigned char lrDetectionMode;
@property (nonatomic) unsigned char doubleTapCapability;
@property (nonatomic) _Bool traceLogging;
@property (nonatomic) unsigned char primaryBud;
@property (nonatomic) unsigned char primaryInEar;
@property (nonatomic) unsigned char secondaryInEar;
@property (nonatomic) _Bool inEar;
@property (nonatomic) _Bool isLEHID;
@property (nonatomic) _Bool isDevFused;
@property (retain, nonatomic) NSArray *services;
@property (copy, nonatomic) NSString *addressString;
@property (copy, nonatomic) NSData *addressData;
@property (nonatomic) unsigned long long appleFeatureBitMask;
@property (nonatomic) unsigned char modeSupported;
@property (retain, nonatomic) NSNumber *RSSI;
@property (retain, nonatomic) NSHashTable *l2capChannels;
@property (copy, nonatomic) NSString *name;

- (void)dealloc;
- (id)description;
- (void)openL2CAPChannel:(id)arg1;
- (_Bool)isServiceSupported:(id)arg1;
- (id)initWithInfo:(id)arg1 manager:(id)arg2;
- (id)dataArrayToUUIDArray:(id)arg1;
- (void)sendMsg:(int)arg1 requiresConnected:(_Bool)arg2 args:(id)arg3;
- (void)sendMsg:(int)arg1 args:(id)arg2;
- (void)handlePeerUpdated:(id)arg1;
- (void)handleMsg:(int)arg1 args:(id)arg2;
- (id)channelWithPSM:(unsigned short)arg1;
- (id)service:(id)arg1;
- (unsigned short)psmForService:(id)arg1;
- (void)openL2CAPChannel:(id)arg1 options:(id)arg2;
- (void)handleSuccessfulConnection:(id)arg1;
- (void)handleFailedConnection;
- (void)handleDisconnection;
- (void)handleL2CAPChannelOpened:(id)arg1;
- (void)handleL2CAPChannelClosed:(id)arg1;
- (void)setOrphan;
- (_Bool)isAppleFeatureSupported:(unsigned long long)arg1;
- (void)removeAllL2CAPChannels;

@end
