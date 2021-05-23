/*
 Image: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSXPCConnection, SRAuthorizationClient, SRDaemonNotification, SRSensorDatastore;

@protocol SRSensorReaderDelegate;

@interface SRSensorReader : NSObject

{
    SRDaemonNotification *_daemonNotification;
    SRSensorDatastore *_datastore;
    NSDictionary *_deviceDetails;
    _Bool _connectionDidInterrupt;
    _Bool _connectionDidInvalidate;
    _Bool _bypassHoldingPeriod;
    NSString *_sensor;
    id <SRSensorReaderDelegate> _delegate;
    NSDictionary *_nextDatastoreFiles;
    unsigned long long _authorizationState;
    SRAuthorizationClient *_authorizationClient;
    NSXPCConnection *_connection;
    NSString *_bundleId;
    Class _sampleClass;
    Class _exportingSampleClass;
}

@property (copy) NSString *sensor;
@property (retain, readonly) SRSensorDatastore *datastore;
@property (retain) NSDictionary *nextDatastoreFiles;
@property (nonatomic) unsigned long long authorizationState;
@property _Bool connectionDidInterrupt;
@property _Bool connectionDidInvalidate;
@property (retain) SRAuthorizationClient *authorizationClient;
@property (retain) NSXPCConnection *connection;
@property (copy) NSString *bundleId;
@property (nonatomic, readonly) Class sampleClass;
@property (nonatomic, readonly) Class exportingSampleClass;
@property (nonatomic) _Bool bypassHoldingPeriod;
@property (nonatomic, readonly) double earliestEligibleTime;
@property (readonly, getter=isAuthorized) _Bool authorized;
@property (weak) id <SRSensorReaderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)new;
+ (id)clientInterface;
+ (id)remoteInterface;
+ (id)connectionToDaemon;
+ (void)requestAuthorizationForSensors:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)requestAuthorizationForBundle:(id)arg1 sensors:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (void)requestAuthorizationForSensors:(id)arg1;
+ (void)authorizationRequestStatusForBundle:(id)arg1 sensors:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (CDUnknownBlockType)createExportDataWithCompletionHandler:(CDUnknownBlockType)arg1;

- (id)init;
- (void)dealloc;
- (void)setupConnection;
- (void)stopRecording;
- (void)startRecording;
- (void)fetch:(id)arg1;
- (void)daemonNotificationDaemonDidStart:(id)arg1;
- (id)initWithSensor:(id)arg1;
- (void)resetDatastoreFiles:(id)arg1;
- (void)authorizedServicesDidChange:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)authorizedServices;
- (id)initWithSensor:(id)arg1 bundle:(id)arg2;
- (id)initWithSensor:(id)arg1 xpcConnection:(id)arg2 daemonNotification:(id)arg3 authorizationClient:(id)arg4 bundleId:(id)arg5;
- (void)registerWithDaemonIfNeededForFetchRequest:(id)arg1 synchronously:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setSampleClass:(Class)arg1;
- (void)setExportingSampleClass:(Class)arg1;
- (void)fetchDevicesDidFailWithError:(id)arg1;
- (void)didFetchDevices:(id)arg1;
- (void)fetchDevices:(CDUnknownBlockType)arg1;
- (void)registerWithDaemonIfNeededForReadingWithReply:(CDUnknownBlockType)arg1;
- (void)didCompleteFetch:(id)arg1;
- (void)fetchingRequest:(id)arg1 failedWithError:(id)arg2;
- (void)continueFetch:(id)arg1;
- (void)startReadingForDevice:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)fetchingRequest:(id)arg1 didFetchResult:(id)arg2;
- (void)fetchSampleBytes:(id)arg1 sampleCallback:(CDUnknownBlockType)arg2;
- (void)continueFetchRequest:(id)arg1 from:(double)arg2 to:(double)arg3 withDatastoreFiles:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)registerWithDaemonIfNeededForFetchRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)fetchSampleBytesFrom:(double)arg1 to:(double)arg2 inSegment:(id)arg3 fetchRequest:(id)arg4 sampleCallback:(CDUnknownBlockType)arg5;
- (void)startRecordingFailedWithError:(id)arg1;
- (void)sensorReaderWillStartRecording;
- (void)startRecordingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stopRecordingFailedWithError:(id)arg1;
- (void)sensorReaderDidStopRecording;
- (void)stopRecordingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchDevices;

@end
