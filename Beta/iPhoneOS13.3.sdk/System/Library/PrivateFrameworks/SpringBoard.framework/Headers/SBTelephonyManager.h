/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class CoreTelephonyClient, NSString, NWSystemPathMonitor, SBAlertItem, SBBluetoothController, STTelephonyStateProvider, STWifiStatusDomain, TUCall;

@protocol OS_dispatch_queue;

@interface SBTelephonyManager : NSObject

{
    struct __CTServerConnection *_serverConnection;
    _Bool _containsCellularRadio;
    _Bool _hasCellularTelephony;
    _Bool _hasCellularData;
    unsigned int _usingVPN:1;
    NSObject<OS_dispatch_queue> *_wirelessModemDynamicStoreQueue;
    struct __SCDynamicStore *_queue_wirelessModemDynamicStore;
    struct __CFString *_queue_wirelessModemDynamicStoreSharingKey;
    _Bool _isNetworkTethering;
    int _numberOfNetworkTetheredDevices;
    unsigned int _hasShownWaitingAlert:1;
    SBAlertItem *_activationAlertItem;
    int _numActivationFailures;
    int _inEmergencyCallbackMode;
    unsigned int _loggingCallAudio:1;
    void *_queue_fastDormancySuspendAssertion;
    NWSystemPathMonitor *_systemPathMonitor;
    TUCall *_incomingCall;
    TUCall *_activeCall;
    TUCall *_heldCall;
    TUCall *_outgoingCall;
    CoreTelephonyClient *_coreTelephonyClient;
    STTelephonyStateProvider *_telephonyStateProvider;
    STWifiStatusDomain *_wifiDomain;
    SBBluetoothController *_bluetoothController;
    NSString *_cachedSlot1CountryCode;
    NSString *_cachedSlot2CountryCode;
    NSString *_cachedSlot1SIMStatus;
    NSString *_cachedSlot2SIMStatus;
}

@property (retain, nonatomic) TUCall *incomingCall;
@property (retain, nonatomic) TUCall *activeCall;
@property (retain, nonatomic) TUCall *heldCall;
@property (retain, nonatomic) TUCall *outgoingCall;
@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient;
@property (nonatomic, readonly) STTelephonyStateProvider *telephonyStateProvider;
@property (nonatomic, readonly) STWifiStatusDomain *wifiDomain;
@property (nonatomic, readonly) SBBluetoothController *bluetoothController;
@property (copy, nonatomic) NSString *cachedSlot1CountryCode;
@property (copy, nonatomic) NSString *cachedSlot2CountryCode;
@property (copy, nonatomic) NSString *cachedSlot1SIMStatus;
@property (copy, nonatomic) NSString *cachedSlot2SIMStatus;
@property (nonatomic, readonly) unsigned long long dataConnectionAvailabilityWithCurrentCalls;
@property (nonatomic, getter=isCellDataSwitchingEnabled) _Bool cellDataSwitchingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedTelephonyManagerCreatingIfNecessary:(_Bool)arg1;
+ (id)sharedTelephonyManager;
+ (struct __CTServerConnection *)defaultTelephonyCenter;

- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (struct __CTServerConnection *)_serverConnection;
- (void)_updateState;
- (_Bool)isEndpointOnCurrentDevice;
- (id)displayedCall;
- (void)swapCalls;
- (void)disconnectAllCalls;
- (id)_backgroundQueryQueue;
- (unsigned long long)callCount;
- (_Bool)hasCellularTelephony;
- (void)subscriptionInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2;
- (void)carrierBundleInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2;
- (void)_handleTelephonyDaemonRestart;
- (_Bool)containsCellularRadio;
- (void)_serverConnectionDidError:(CDStruct_1ef3fb1f)arg1;
- (_Bool)inCall;
- (_Bool)activeCallExists;
- (_Bool)heldCallExists;
- (void)disconnectCallAndActivateHeld;
- (_Bool)isInEmergencyCallbackMode;
- (unsigned long long)faceTimeAudioCallCount;
- (unsigned long long)telephonyCallCount;
- (void)preHeatDataLinkForDomains:(id)arg1;
- (id)initWithStateProvider:(id)arg1 wifiDomain:(id)arg2 bluetoothController:(id)arg3;
- (void)callEventHandler:(id)arg1;
- (void)handleCallControlFailure:(id)arg1;
- (void)updateSpringBoard;
- (void)telephonyAudioChangeHandler;
- (void)setNetworkRegistrationEnabled:(_Bool)arg1;
- (void)updateCalls;
- (void)_queue_noteWirelessModemDynamicStoreChanged;
- (void)queue_setFastDormancySuspended:(_Bool)arg1 withConnection:(struct __CTServerConnection *)arg2;
- (void)_performQueryInBackground:(CDUnknownBlockType)arg1 withMainQueueResultHandler:(CDUnknownBlockType)arg2;
- (_Bool)isEmergencyCallActive;
- (_Bool)updateLocale;
- (void)_updateNetworkLocale;
- (id)_primaryCarrierBundleInfo;
- (_Bool)hasNonCellularNetworkConnection;
- (id)_callsForService:(int)arg1;
- (id)_subscriptionInfoForCall:(id)arg1;
- (unsigned long long)_callCountForService:(int)arg1;
- (long long)_dataConnectedSubscriptionSlot;
- (_Bool)isUsingVPNConnection;
- (void)_setCurrentActivationAlertItem:(id)arg1;
- (void)_setIsInEmergencyCallbackMode:(unsigned char)arg1;
- (long long)_primarySubscriptionSlot;
- (long long)_secondarySubscriptionSlot;
- (long long)_dataPreferredSubscriptionSlotIfSIMPresent;
- (long long)_anySubscriptionSlotWithSIMPresent;
- (long long)_otherSubscriptionSlotIfSIMPresent:(long long)arg1;
- (long long)_subscriptionSlotIfSIMPresent:(long long)arg1;
- (id)_secondaryCarrierBundleInfo;
- (void)_setIsNetworkTethering:(_Bool)arg1 withNumberOfDevices:(int)arg2;
- (void)_avSystemControllerDidError:(id)arg1;
- (_Bool)hasCellularData;
- (_Bool)emergencyCallSupported;
- (double)inCallDuration;
- (id)_phoneApp;
- (void)setFastDormancySuspended:(_Bool)arg1;
- (_Bool)incomingCallExists;
- (_Bool)outgoingCallExists;
- (_Bool)multipleCallsExist;
- (_Bool)inCallUsingSpeakerOrReceiver;
- (void)disconnectIncomingCall;
- (void)disconnectDisplayedCall;
- (void)dumpBasebandState:(id)arg1;
- (_Bool)isNetworkRegistrationEnabled;
- (_Bool)isUsingSlowDataConnection;
- (_Bool)isTTYEnabled;
- (void)_provisioningUpdateWithStatus:(int)arg1 slot:(long long)arg2;
- (id)_primarySubscriptionInfo;
- (id)_primaryMobileEquipmentInfo;
- (id)_secondarySubscriptionInfo;
- (id)_secondaryMobileEquipmentInfo;
- (id)carrierDisabledApplicationIDs;
- (_Bool)isNetworkTethering;
- (int)numberOfNetworkTetheredDevices;

@end
