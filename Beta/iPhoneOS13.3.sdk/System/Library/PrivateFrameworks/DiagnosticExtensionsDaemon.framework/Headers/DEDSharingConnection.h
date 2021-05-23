/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <Foundation/NSObject.h>

@class DEDController, DEDSharingInbound, NSMutableDictionary, NSMutableSet, SFDeviceDiscovery, SFService;

@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_os_log;

@interface DEDSharingConnection : NSObject

{
    _Bool _listenForClients;
    _Bool _started;
    DEDSharingInbound *_inbound;
    DEDController *_controller;
    NSMutableDictionary *_pongingDevices;
    NSMutableDictionary *_deviceSessions;
    NSMutableDictionary *_discoveredDevices;
    NSObject<OS_dispatch_queue> *_run_queue;
    NSObject<OS_os_log> *_log;
    NSObject<OS_dispatch_semaphore> *_bluetoothSessionSemaphore;
    SFService *_pingService;
    SFDeviceDiscovery *_pingDiscovery;
    NSMutableSet *_visiblePingUUIDs;
    SFService *_workerService;
    SFDeviceDiscovery *_pongDiscovery;
    CDUnknownBlockType _deviceStatusCallback;
}

@property (retain) DEDSharingInbound *inbound;
@property (weak) DEDController *controller;
@property _Bool listenForClients;
@property _Bool started;
@property (retain) NSMutableDictionary *pongingDevices;
@property (retain) NSMutableDictionary *deviceSessions;
@property (retain) NSMutableDictionary *discoveredDevices;
@property (retain) NSObject<OS_dispatch_queue> *run_queue;
@property (retain) NSObject<OS_os_log> *log;
@property (retain) NSObject<OS_dispatch_semaphore> *bluetoothSessionSemaphore;
@property (retain, nonatomic) SFService *pingService;
@property (retain, nonatomic) SFDeviceDiscovery *pingDiscovery;
@property (retain) NSMutableSet *visiblePingUUIDs;
@property (retain, nonatomic) SFService *workerService;
@property (retain, nonatomic) SFDeviceDiscovery *pongDiscovery;
@property (copy) CDUnknownBlockType deviceStatusCallback;

+ (void)checkIn;

- (void)dealloc;
- (void)start;
- (id)initWithController:(id)arg1;
- (void)stopDiscovery;
- (void)startPairSetupForDevice:(id)arg1;
- (void)tryPIN:(id)arg1 forDevice:(id)arg2;
- (void)startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 caller:(id)arg3 target:(id)arg4;
- (void)discoverDevicesWithCompletion:(CDUnknownBlockType)arg1;
- (void)setDeviceDiscoveryCallback:(CDUnknownBlockType)arg1;
- (void)didStartBugSessionWithInfo:(id)arg1 forCaller:(id)arg2;
- (id)sharingOutboundForBugSessionIdentifier:(id)arg1 device:(id)arg2;
- (void)startPingDiscovery;
- (void)startWorkerService;
- (void)startPongDiscovery;
- (void)startPingServiceWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopPongDiscovery;
- (void)stopPingService;
- (void)_configureService:(id)arg1 withLabel:(id)arg2 needsSetup:(_Bool)arg3 actionType:(unsigned char)arg4 completion:(CDUnknownBlockType)arg5;
- (void)stopPongAdvertisement;
- (void)startPongAdvertisement;
- (void)_handleIncomingPingingDevice:(id)arg1;
- (void)updatePongAdvertisement;
- (void)_saveDevice:(id)arg1;
- (void)_handleIncomingPongingDevice:(id)arg1;
- (void)updateControllerWithDevice:(id)arg1 andStatus:(long long)arg2;
- (void)trySessionWithFoundDevice:(id)arg1;
- (id)_existingSharingSessionForDevice:(id)arg1;
- (void)checkReadinessForSFDevice:(id)arg1 session:(id)arg2;
- (void)stopSession:(id)arg1;
- (void)getSystemInfoForDevice:(id)arg1;
- (void)createSharingSessionForSFDevice:(id)arg1 holdForPIN:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)blockingSharingSessionForDevice:(id)arg1;
- (void)_verifyPairingForSession:(id)arg1 holdForPIN:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)configureSharingInbound:(id)arg1;
- (void)configureListenForClients:(_Bool)arg1;
- (void)stopPingDiscovery;
- (void)addIncomingSFSession:(id)arg1 forIdentifier:(id)arg2;

@end
