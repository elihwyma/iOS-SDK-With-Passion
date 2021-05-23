/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKHealthStore, NSMutableDictionary, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface HKHealthServicesManager : NSObject

{
    HKHealthStore *_healthStore;
    NSMutableDictionary *_discoveries;
    NSMutableSet *_discoveriesEnded;
    NSMutableDictionary *_sessions;
    NSMutableSet *_sessionsEnded;
    CDUnknownBlockType _bluetoothStatusHandler;
    HKHealthServicesManager *_healthServicesManager;
}

@property (weak, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) NSMutableDictionary *discoveries;
@property (retain, nonatomic) NSMutableSet *discoveriesEnded;
@property (retain, nonatomic) NSMutableDictionary *sessions;
@property (retain, nonatomic) NSMutableSet *sessionsEnded;
@property (copy, nonatomic) CDUnknownBlockType bluetoothStatusHandler;
@property (nonatomic, readonly) HKHealthServicesManager *healthServicesManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)startHealthServiceDiscovery:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)endHealthServiceDiscovery:(id)arg1;
- (void)startHealthServiceSession:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)endHealthServiceSession:(id)arg1;
- (void)registerPeripheralIdentifier:(id)arg1 name:(id)arg2 services:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)unregisterPeripheralIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)healthServicePairingsWithHandler:(CDUnknownBlockType)arg1;
- (void)healthPeripheralsWithFilter:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addHealthServicePairing:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)removeHealthServicePairing:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithHealthStore:(id)arg1;
- (void)clientQueue_handleInterruption;
- (void)clientRemote_deliverBluetoothStatus:(long long)arg1 withError:(id)arg2;
- (void)clientRemote_deliverDiscoveryHealthService:(id)arg1 toClient:(unsigned long long)arg2 finished:(_Bool)arg3 withError:(id)arg4;
- (void)clientRemote_deliverSessionHealthServiceStatus:(long long)arg1 toClient:(unsigned long long)arg2 finished:(_Bool)arg3 withError:(id)arg4;
- (void)clientRemote_deliverSessionCharacteristics:(id)arg1 forService:(id)arg2 toClient:(unsigned long long)arg3 withError:(id)arg4;
- (void)_startHealthServiceExtendedDiscovery:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_addEndedDiscovery:(id)arg1;
- (void)_addEndedSession:(id)arg1;
- (void)startBluetoothStatusUpdates:(CDUnknownBlockType)arg1;
- (void)endBluetoothStatusUpdates;
- (void)_fetchSupportedServiceIDsWithCompletion:(CDUnknownBlockType)arg1;
- (id)startAllHealthServicesDiscoveryWithHandler:(CDUnknownBlockType)arg1;
- (id)activeHealthServiceDiscoveries;
- (id)activeHealthServiceSessions;
- (void)getEnabledStatusForPeripheral:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setEnabledStatus:(_Bool)arg1 forPeripheral:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)getHealthServicePropertyNamesWithHandler:(CDUnknownBlockType)arg1;
- (void)getHealthServiceProperty:(id)arg1 forSession:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)performHealthServiceOperation:(id)arg1 onSession:(id)arg2 withParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
