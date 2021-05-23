/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSNetServiceBrowser, NSString;

@protocol MRExternalDeviceControllerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRExternalDeviceController : NSObject

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSNetServiceBrowser *_serviceBrowser;
    NSMutableSet *_discoveredDevices;
    NSMutableSet *_resolvingServices;
    NSMutableSet *_monitoringServices;
    _Bool _discovering;
    id <MRExternalDeviceControllerDelegate> _delegate;
    NSString *_bonjourServiceType;
}

@property (weak, nonatomic) id <MRExternalDeviceControllerDelegate> delegate;
@property (nonatomic, readonly) NSString *bonjourServiceType;
@property (nonatomic, readonly, getter=isDiscovering) _Bool discovering;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)externalDeviceClass;

- (void)dealloc;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(_Bool)arg3;
- (void)endDiscovery;
- (_Bool)_isManagedConfigIDAllowed:(id)arg1;
- (id)initWithBonjourServiceType:(id)arg1;
- (void)beginDiscovery;

@end
