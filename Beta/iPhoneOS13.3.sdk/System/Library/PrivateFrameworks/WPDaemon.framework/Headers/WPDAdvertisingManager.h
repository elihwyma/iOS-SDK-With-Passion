/*
 Image: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
 */

#import <WPDaemon/WPDManager.h>

@class CBPeripheralManager, NSIndexSet, NSMutableDictionary, NSMutableIndexSet, NSMutableSet, NSString, WPAdvertisingRequestsQueue, WPDAdvertisingData;

@interface WPDAdvertisingManager : WPDManager

{
    _Bool _allowCompoundAdvertisements;
    WPAdvertisingRequestsQueue *_advertisingRequests;
    NSMutableDictionary *_clientAdvertisingRequests;
    NSMutableIndexSet *_currentAdvertisers;
    NSMutableSet *_clientsToNotifyOnAddressChange;
    NSMutableDictionary *_publishedServices;
    CBPeripheralManager *_connectablePeripheralManager;
    CBPeripheralManager *_nonConnectablePeripheralManager;
    WPDAdvertisingData *_currentConnectableAdvertisingData;
    WPDAdvertisingData *_currentNonConnectableAdvertisingData;
    NSMutableDictionary *_preallocatedServices;
    NSIndexSet *_rangingTypes;
    NSMutableSet *_rangingClients;
}

@property (retain) WPAdvertisingRequestsQueue *advertisingRequests;
@property (retain) NSMutableDictionary *clientAdvertisingRequests;
@property (retain) NSMutableIndexSet *currentAdvertisers;
@property (retain) NSMutableSet *clientsToNotifyOnAddressChange;
@property (retain) NSMutableDictionary *publishedServices;
@property (retain, nonatomic) CBPeripheralManager *connectablePeripheralManager;
@property (retain, nonatomic) CBPeripheralManager *nonConnectablePeripheralManager;
@property (retain, nonatomic) WPDAdvertisingData *currentConnectableAdvertisingData;
@property (retain, nonatomic) WPDAdvertisingData *currentNonConnectableAdvertisingData;
@property _Bool allowCompoundAdvertisements;
@property (retain) NSMutableDictionary *preallocatedServices;
@property (nonatomic, readonly) _Bool isRanging;
@property (nonatomic, readonly) NSIndexSet *rangingTypes;
@property (retain) NSMutableSet *rangingClients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)update;
- (id)initWithServer:(id)arg1;
- (void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2;
- (void)peripheralManager:(id)arg1 didAddService:(id)arg2 error:(id)arg3;
- (void)peripheralManager:(id)arg1 central:(id)arg2 didSubscribeToCharacteristic:(id)arg3;
- (void)peripheralManager:(id)arg1 central:(id)arg2 didUnsubscribeFromCharacteristic:(id)arg3;
- (void)peripheralManager:(id)arg1 didReceiveReadRequest:(id)arg2;
- (void)peripheralManager:(id)arg1 didReceiveWriteRequests:(id)arg2;
- (void)peripheralManagerIsReadyToUpdateSubscribers:(id)arg1;
- (void)peripheralManager:(id)arg1 didStopAdvertisingWithError:(id)arg2;
- (id)generateStateDump;
- (void)updateAdvertiser;
- (id)removeAdvertisingRequestsForClient:(id)arg1;
- (void)removeServiceForClient:(id)arg1;
- (void)enableRanging:(_Bool)arg1 forClient:(id)arg2;
- (void)addCharacteristic:(id)arg1 forService:(id)arg2 forClient:(id)arg3;
- (id)addAdvertisingRequest:(id)arg1 forClient:(id)arg2;
- (id)removeAdvertisingRequest:(id)arg1 forClient:(id)arg2;
- (id)getManager;
- (id)getCurrentAdvertisers;
- (void)addCharacteristic:(id)arg1 Properties:(unsigned long long)arg2 Permissions:(unsigned long long)arg3 Service:(id)arg4 Name:(id)arg5;
- (id)NSUUIDfromCBUUID:(id)arg1;
- (id)removeAdvertisingRequest:(id)arg1 forClient:(id)arg2 shouldUpdate:(_Bool)arg3;
- (id)advertisingRules;
- (id)advertisingRulesiOS;
- (id)currentAdvertisingRequests;
- (_Bool)platformSupportsMultipleAdvertising;
- (void)informClientsAdvertisingPending:(id)arg1;
- (id)requestFromAdvertisingDataConnectable:(_Bool)arg1 AddressChangeNotificationNeeded:(_Bool)arg2;
- (void)resetAdvertisingManager;
- (void)preallocateServices;
- (id)getClientUUIDsForCharacteristic:(id)arg1;
- (id)getCharacteristicForClient:(id)arg1;
- (id)advertisingRulesOSX;

@end
