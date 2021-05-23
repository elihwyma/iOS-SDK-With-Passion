/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAVRoute.h>

@class NSArray;

@interface MPAVOutputDeviceRoute : MPAVRoute

{
    void *_logicalLeaderOutputDevice;
    NSArray *_outputDevices;
}

@property (nonatomic, readonly) NSArray *outputDevices;
@property (nonatomic, readonly) void *logicalLeaderOutputDevice;
@property (nonatomic, readonly, getter=isGroupLeader) _Bool groupLeader;

+ (long long)pickableRouteTypeForOutputDevice:(void *)arg1;
+ (void *)logicalLeaderFromOutputDevices:(id)arg1;
+ (id)localDeviceUID;

- (id)description;
- (long long)routeType;
- (id)routeName;
- (id)productIdentifier;
- (_Bool)canAccessRemoteAssets;
- (_Bool)canPlayEncryptedProgressiveDownloadAssets;
- (_Bool)canFetchMediaDataFromSender;
- (_Bool)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (id)routeUID;
- (_Bool)isVolumeControlAvailable;
- (_Bool)isAppleTVRoute;
- (_Bool)isDeviceRoute;
- (_Bool)isProxyGroupPlayer;
- (_Bool)supportsGrouping;
- (_Bool)isSplitterCapable;
- (_Bool)isDeviceSpeakerRoute;
- (_Bool)isStereoPair;
- (_Bool)isAirPlayRoute;
- (_Bool)isLowLatencyRoute;
- (_Bool)supportsWirelessDisplay;
- (id)groupUID;
- (long long)pickableRouteType;
- (long long)routeSubtype;
- (id)playingPairedDeviceName;
- (_Bool)isPickedOnPairedDevice;
- (_Bool)requiresPassword;
- (_Bool)isCarplayRoute;
- (_Bool)isHomePodRoute;
- (id)initWithOutputDevices:(id)arg1;
- (_Bool)_anyOutputDevicePassesMRFunction:(CDUnknownFunctionPointerType)arg1;
- (_Bool)_anyOutputDevicePassesTest:(CDUnknownBlockType)arg1;

@end
