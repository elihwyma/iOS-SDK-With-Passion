/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAVRoute.h>

@class MPAVRouteConnection, MPMRAVEndpointWrapper, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface MPAVEndpointRoute : MPAVRoute

{
    MPAVRouteConnection *_connection;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSString *_sortName;
    MPMRAVEndpointWrapper *_endpointWrapper;
}

@property (retain, nonatomic) MPAVRouteConnection *connection;
@property (nonatomic, readonly) void *endpoint;
@property (retain, nonatomic) MPMRAVEndpointWrapper *endpointWrapper;
@property (nonatomic, readonly) NSString *sortName;
@property (nonatomic, readonly) _Bool canModifyGroupMembership;

+ (_Bool)supportsSecureCoding;
+ (void)getActiveEndpointRouteWithCompletion:(CDUnknownBlockType)arg1;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEndpoint:(void *)arg1;
- (long long)routeType;
- (id)routeNames;
- (id)routeName;
- (_Bool)canAccessRemoteAssets;
- (_Bool)canPlayEncryptedProgressiveDownloadAssets;
- (_Bool)canFetchMediaDataFromSender;
- (_Bool)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (id)routeUID;
- (id)designatedGroupLeaderName;
- (_Bool)isAirPlayingToDevice;
- (id)groupLeaderAirplayIdentifier;
- (_Bool)isAppleTVRoute;
- (_Bool)isDeviceRoute;
- (_Bool)isProxyGroupPlayer;
- (_Bool)supportsGrouping;
- (_Bool)supportsRemoteControl;
- (_Bool)isSplitterCapable;
- (_Bool)isSplitRoute;
- (long long)numberOfOutputDevices;
- (_Bool)isRoutingToWirelessDevice;
- (_Bool)isDeviceSpeakerRoute;
- (_Bool)isStereoPair;
- (_Bool)isTVRoute;
- (_Bool)isLowLatencyRoute;
- (id)groupUID;
- (long long)routeSubtype;
- (_Bool)isHomePodRoute;
- (void)establishGroup;
- (void)_endpointDidChange:(id)arg1;
- (void)_endpointOutputDevicesDidChange:(id)arg1;
- (_Bool)_groupLeaderIsOfDeviceSubtype:(unsigned int)arg1;
- (unsigned long long)_outputDevicesComposition;

@end
