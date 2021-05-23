/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class DNDSPairedDevice, IDSService, NSString;

@protocol DNDSPairedDeviceStateMonitorDelegate, OS_dispatch_queue;

@interface DNDSPairedDeviceStateMonitor : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    IDSService *_idsService;
    int _pairedDeviceDidChangeNotificationToken;
    DNDSPairedDevice *_pairedDevice;
    id <DNDSPairedDeviceStateMonitorDelegate> _delegate;
}

@property (copy) DNDSPairedDevice *pairedDevice;
@property (weak, nonatomic) id <DNDSPairedDeviceStateMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *sysdiagnoseDataIdentifier;

- (void)dealloc;
- (void)resume;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (id)initWithIDSService:(id)arg1;
- (id)sysdiagnoseDataForDate:(id)arg1;
- (void)_endMonitoringForChanges;
- (void)_beginMonitoringForChanges;
- (void)_queue_updatePairedState;
- (id)_getCurrentPairedDevice;
- (void)_pairedDeviceStateChanged:(id)arg1;

@end
