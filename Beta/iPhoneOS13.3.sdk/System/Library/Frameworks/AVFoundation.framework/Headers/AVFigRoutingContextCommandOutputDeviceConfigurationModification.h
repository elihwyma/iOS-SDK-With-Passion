/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AVFigRoutingContextCommandOutputDeviceConfigurationModification : NSObject

{
    struct __CFDictionary *_payload;
}

@property (nonatomic, readonly) struct __CFDictionary *routingContextCommandPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)setDeviceName:(id)arg1;
- (void)setDevicePassword:(id)arg1;
- (void)startAutomaticallyAllowingConnectionsFromPeersInHomeGroupAndRejectOtherConnections:(_Bool)arg1;
- (void)stopAutomaticallyAllowingConnectionsFromPeersInHomeGroup;
- (void)addPeerToHomeGroup:(id)arg1;
- (void)removePeerWithIDFromHomeGroup:(id)arg1;

@end
