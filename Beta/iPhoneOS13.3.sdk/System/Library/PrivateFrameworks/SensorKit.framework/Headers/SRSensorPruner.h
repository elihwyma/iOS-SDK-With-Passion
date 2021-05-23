/*
 Image: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSXPCConnection, SRDaemonNotification, SRDevice, SRSensorDatastore;

@protocol SRSensorPrunerDelegate;

@interface SRSensorPruner : NSObject

{
    SRSensorDatastore *_datastore;
    SRDaemonNotification *_daemonNotification;
    _Bool _connectionDidInterrupt;
    _Bool _connectionDidInvalidate;
    id <SRSensorPrunerDelegate> _delegate;
    NSString *_sensor;
    NSDictionary *_nextDatastoreFiles;
    SRDevice *_device;
    NSXPCConnection *_connection;
}

@property (copy) NSString *sensor;
@property (retain, readonly) SRSensorDatastore *datastore;
@property (retain) NSDictionary *nextDatastoreFiles;
@property _Bool connectionDidInterrupt;
@property _Bool connectionDidInvalidate;
@property (retain) SRDevice *device;
@property (retain) NSXPCConnection *connection;
@property (weak) id <SRSensorPrunerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)clientInterface;
+ (id)remoteInterface;
+ (id)connectionToDaemon;

- (void)dealloc;
- (void)setupConnection;
- (void)removeAllSamples;
- (void)daemonNotificationDaemonDidStart:(id)arg1;
- (void)resetDatastoreFiles:(id)arg1;
- (void)removeAllSamplesForAllSensors;
- (id)initWithSensor:(id)arg1 xpcConnection:(id)arg2 daemonNotification:(id)arg3 device:(id)arg4;
- (void)continuePruneFrom:(double)arg1 to:(double)arg2 withDatastoreFiles:(id)arg3;
- (void)registerWithDaemonIfNeededWithReply:(CDUnknownBlockType)arg1;
- (void)removeSamplesFrom:(double)arg1 to:(double)arg2 inSegment:(id)arg3;
- (id)initWithSensor:(id)arg1 device:(id)arg2;
- (void)removeSamplesFrom:(double)arg1 to:(double)arg2;

@end
