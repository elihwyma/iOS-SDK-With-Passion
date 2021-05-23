/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <Foundation/NSObject.h>

@class MPAVRoute, NSNumber, NSString;

@protocol OS_dispatch_queue;

@interface NMROrigin : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    MPAVRoute *_route;
    void *_mediaRemoteOrigin;
    unsigned long long _connectionState;
    void *_deviceInfo;
    NSString *_cachedDisplayName;
}

@property (nonatomic, readonly) MPAVRoute *route;
@property (nonatomic, readonly) void *mediaRemoteOrigin;
@property (nonatomic, readonly) void *deviceInfo;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSNumber *uniqueIdentifier;
@property (nonatomic, readonly) _Bool isLocal;
@property (nonatomic, readonly) _Bool isCompanion;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) unsigned long long connectionState;
@property (nonatomic, readonly) NSString *deviceIdentifier;
@property (nonatomic, readonly) long long logicalDeviceCount;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithRoute:(id)arg1;
- (void)_handleRouteConnectionDidConnectNotification:(id)arg1;
- (void)_handleRouteConnectionDidInvalidateNotification:(id)arg1;
- (void)_handleExternalDeviceConnectionStateDidChangeNotification:(id)arg1;
- (void)_updateConnectionState;
- (id)initWithOrigin:(void *)arg1 deviceInfo:(void *)arg2;
- (void)updateRoute:(id)arg1;
- (void)updateOrigin:(void *)arg1 deviceInfo:(void *)arg2;
- (id)playerPathWithBundleID:(id)arg1 playerID:(id)arg2;

@end
