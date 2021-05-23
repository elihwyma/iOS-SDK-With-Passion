/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString, SFRemoteHotspotSession;

@protocol OS_dispatch_queue, WFHotspotInterfaceDelegate;

@interface WFHotspotInterface : NSObject

{
    _Bool _scanning;
    NSSet *_networks;
    id <WFHotspotInterfaceDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_internalQueue;
    SFRemoteHotspotSession *_hotspotSession;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, getter=isScanning) _Bool scanning;
@property (retain) NSSet *networks;
@property (retain) SFRemoteHotspotSession *hotspotSession;
@property (weak) id <WFHotspotInterfaceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)stopBrowsing;
- (void)startBrowsing;
- (void)session:(id)arg1 updatedFoundDevices:(id)arg2;
- (id)enableHotspot:(id)arg1 error:(out id *)arg2;
- (void)_stopBrowsingRemoveCache:(_Bool)arg1;
- (void)updateNetworksWithHotspots:(id)arg1;

@end
