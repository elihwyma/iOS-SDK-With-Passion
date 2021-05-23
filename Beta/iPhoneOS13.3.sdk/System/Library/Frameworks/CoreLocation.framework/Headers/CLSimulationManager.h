/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol CLSimulationXPCServerInterface;

@interface CLSimulationManager : NSObject

{
    double _locationDistance;
    double _locationInterval;
    double _locationSpeed;
    unsigned char _locationRepeatBehavior;
    unsigned char _locationDeliveryBehavior;
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) id <CLSimulationXPCServerInterface> daemonProxy;
@property (nonatomic) unsigned char locationDeliveryBehavior;
@property (nonatomic) double locationDistance;
@property (nonatomic) double locationInterval;
@property (nonatomic) double locationSpeed;
@property (nonatomic) unsigned char locationRepeatBehavior;

- (id)init;
- (void)flush;
- (id)scenariosPath;
- (void)loadScenarioFromURL:(id)arg1;
- (void)clearSimulatedLocations;
- (void)startLocationSimulation;
- (void)stopLocationSimulation;
- (void)simulateVisit:(id)arg1;
- (void)simulateSignificantLocationChange:(id)arg1;
- (void)simulateFenceWithBundleID:(id)arg1 andFenceID:(id)arg2 eventType:(unsigned char)arg3 atLocation:(id)arg4;
- (void)simulateBeaconWithProximityUUID:(id)arg1 major:(long long)arg2 minor:(long long)arg3 eventType:(unsigned char)arg4;
- (id)availableScenarios;
- (id)localizedNameForScenario:(id)arg1;
- (void)selectScenario:(id)arg1;
- (void)appendSimulatedLocation:(id)arg1;
- (void)getFencesForBundleID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)clearSimulatedCells;
- (void)setSimulatedCell:(id)arg1;
- (void)startCellSimulation;
- (void)stopCellSimulation;
- (void)setSimulatedCellRegistrationStatus:(_Bool)arg1;
- (void)setWifiScanResults:(id)arg1;
- (void)startWifiSimulation;
- (void)stopWifiSimulation;
- (void)setSimulatedWifiPower:(_Bool)arg1;

@end
