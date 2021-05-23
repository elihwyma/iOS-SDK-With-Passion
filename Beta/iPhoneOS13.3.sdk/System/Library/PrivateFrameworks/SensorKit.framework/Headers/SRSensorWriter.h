/*
 Image: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSXPCConnection, SRDaemonNotification, SRDefaults, SRSensorDatastore;

@protocol SRAuthorizationStore, SRSensorWriterDelegate;

@interface SRSensorWriter : NSObject

{
    _Bool _monitoring;
    id <SRSensorWriterDelegate> _delegate;
    SRDaemonNotification *_daemonNotification;
    SRDefaults *_defaults;
    SRSensorDatastore *_datastore;
    _Bool _requestNewSegmentInFlight;
    _Bool _authorized;
    _Bool _connectionDidInterrupt;
    _Bool _connectionDidInvalidate;
    _Bool _retryGetMonitoring;
    NSString *_sensorIdentifier;
    NSDictionary *_nextDatastoreFiles;
    id <SRAuthorizationStore> _authorizationStore;
    NSDictionary *_sensorInfo;
    NSXPCConnection *_connection;
}

@property (copy) NSString *sensorIdentifier;
@property (retain, readonly) SRSensorDatastore *datastore;
@property (retain) NSDictionary *nextDatastoreFiles;
@property _Bool requestNewSegmentInFlight;
@property (retain, nonatomic) id <SRAuthorizationStore> authorizationStore;
@property _Bool authorized;
@property _Bool connectionDidInterrupt;
@property _Bool connectionDidInvalidate;
@property (retain, nonatomic) NSDictionary *sensorInfo;
@property (retain) NSXPCConnection *connection;
@property _Bool retryGetMonitoring;
@property (getter=isMonitoring) _Bool monitoring;
@property (weak) id <SRSensorWriterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)clientInterface;
+ (id)remoteInterface;
+ (id)connectionToDaemon;

- (id)init;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setupConnection;
- (void)daemonNotificationDaemonDidStart:(id)arg1;
- (void)daemonNotificationDaemonDidChangeTimeSignificantly:(id)arg1;
- (void)authorizationStore:(id)arg1 didDetermineInitialAuthorizationValues:(id)arg2;
- (void)authorizationStore:(id)arg1 grantedAuthorizations:(id)arg2 forBundleId:(id)arg3;
- (void)authorizationStore:(id)arg1 revokedAuthorizations:(id)arg2 forBundleId:(id)arg3;
- (void)authorizationStore:(id)arg1 resetAuthorizations:(id)arg2 forBundleId:(id)arg3;
- (void)resetDatastoreFiles:(id)arg1;
- (void)daemonForcedResetDatastoreFiles:(id)arg1;
- (id)initWithIdentifier:(id)arg1 authorizationStore:(id)arg2 xpcConnection:(id)arg3 daemonNotification:(id)arg4;
- (void)registerWithDaemonForWritingIfNeededWithReply:(CDUnknownBlockType)arg1;
- (void)requestNewSegment;
- (void)provideSample:(id)arg1 timestamp:(double)arg2;
- (void)provideSampleData:(id)arg1 timestamp:(double)arg2;
- (void)provideSampleBytes:(const void *)arg1 length:(unsigned long long)arg2 timestamp:(double)arg3;
- (void)setMetadata:(id)arg1 continuousTimestamp:(unsigned long long)arg2;
- (void)updateSensorInfo;
- (void)evaluateAuthorizationState;
- (void)provideSample:(id)arg1;
- (void)provideSampleData:(id)arg1;
- (void)provideSampleData:(id)arg1 continuousTimestamp:(unsigned long long)arg2;
- (void)provideSampleBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)provideSampleBytes:(const void *)arg1 length:(unsigned long long)arg2 continuousTimestamp:(unsigned long long)arg3;
- (void)flushDatabase;

@end
