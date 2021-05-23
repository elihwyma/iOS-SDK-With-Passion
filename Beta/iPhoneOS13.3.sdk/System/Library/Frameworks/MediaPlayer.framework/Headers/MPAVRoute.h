/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPAVBatteryLevel, MPAVRouteConnection, NSArray, NSDictionary, NSString;

@interface MPAVRoute : NSObject <Swift>

{
    NSString *_routeName;
    _Bool _picked;
    NSDictionary *_avRouteDescription;
    MPAVRoute *_wirelessDisplayRoute;
    long long _displayRouteType;
    MPAVBatteryLevel *_batteryLevel;
    _Bool _canAccessRemoteAssets;
    _Bool _canPlayEncryptedProgressiveDownloadAssets;
    _Bool _canFetchMediaDataFromSender;
    _Bool _presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
    _Bool _pickedOnPairedDevice;
    _Bool _playingOnPairedDevice;
    _Bool _requiresPassword;
    _Bool _carplayRoute;
    _Bool _homePodRoute;
    NSString *_routeUID;
    NSString *_productIdentifier;
    NSString *_groupUID;
    long long _routeType;
    long long _pickableRouteType;
    long long _routeSubtype;
    NSArray *_auxiliaryDevices;
    NSString *_playingPairedDeviceName;
    void *_externalDevice;
    MPAVRouteConnection *_connection;
}

@property (nonatomic, readonly, getter=_externalDevice) void *externalDevice;
@property (nonatomic, readonly) _Bool isSplitRoute;
@property (nonatomic, readonly) long long numberOfOutputDevices;
@property (copy, nonatomic) NSString *routeName;
@property (nonatomic, getter=isPicked) _Bool picked;
@property (nonatomic, readonly, getter=isRoutingToWirelessDevice) _Bool routingToWirelessDevice;
@property (nonatomic, readonly) NSDictionary *avRouteDescription;
@property (retain, nonatomic) MPAVRoute *wirelessDisplayRoute;
@property (nonatomic) long long displayRouteType;
@property (nonatomic, readonly) MPAVRouteConnection *connection;
@property (nonatomic, readonly) NSString *designatedGroupLeaderName;
@property (nonatomic, readonly) NSArray *routeNames;
@property (nonatomic, readonly) NSString *routeUID;
@property (nonatomic, readonly) NSString *productIdentifier;
@property (nonatomic, readonly) NSString *groupUID;
@property (nonatomic, readonly) long long routeType;
@property (nonatomic, readonly) long long pickableRouteType;
@property (nonatomic, readonly) long long routeSubtype;
@property (nonatomic, readonly) _Bool canAccessRemoteAssets;
@property (nonatomic, readonly) _Bool canPlayEncryptedProgressiveDownloadAssets;
@property (nonatomic, readonly) _Bool canFetchMediaDataFromSender;
@property (nonatomic, readonly) _Bool presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
@property (nonatomic, readonly) _Bool isDeviceRoute;
@property (nonatomic, readonly, getter=isProxyGroupPlayer) _Bool proxyGroupPlayer;
@property (nonatomic, readonly, getter=isVolumeControlAvailable) _Bool volumeControlAvailable;
@property (nonatomic, readonly) _Bool supportsGrouping;
@property (nonatomic, readonly) _Bool supportsRemoteControl;
@property (nonatomic, readonly, getter=isSplitRoute) _Bool splitRoute;
@property (nonatomic, readonly, getter=isSplitterCapable) _Bool splitterCapable;
@property (nonatomic, readonly) MPAVBatteryLevel *batteryLevel;
@property (nonatomic, readonly) NSArray *auxiliaryDevices;
@property (nonatomic, readonly) NSString *playingPairedDeviceName;
@property (nonatomic, readonly, getter=isPickedOnPairedDevice) _Bool pickedOnPairedDevice;
@property (nonatomic, readonly, getter=isPlayingOnPairedDevice) _Bool playingOnPairedDevice;
@property (nonatomic, readonly, getter=isAirPlayingToDevice) _Bool airPlayingToDevice;
@property (nonatomic, readonly) NSString *groupLeaderAirplayIdentifier;
@property (nonatomic, readonly) _Bool requiresPassword;
@property (nonatomic, readonly) _Bool supportsWirelessDisplay;
@property (nonatomic, readonly) long long passwordType;
@property (nonatomic, readonly, getter=isDisplayedAsPicked) _Bool displayAsPicked;
@property (nonatomic, readonly, getter=isAirpodsRoute) _Bool airpodsRoute;
@property (nonatomic, readonly, getter=isAppleTVRoute) _Bool appleTVRoute;
@property (nonatomic, readonly, getter=isBeatsSoloRoute) _Bool beatsSoloRoute;
@property (nonatomic, readonly, getter=isBeatsStudioRoute) _Bool beatsStudioRoute;
@property (nonatomic, readonly, getter=isBeatsXRoute) _Bool beatsXRoute;
@property (nonatomic, readonly, getter=isCarplayRoute) _Bool carplayRoute;
@property (nonatomic, readonly, getter=isDeviceSpeakerRoute) _Bool deviceSpeakerRoute;
@property (nonatomic, readonly, getter=isHearingDeviceRoute) _Bool hearingDeviceRoute;
@property (nonatomic, readonly, getter=isHomePodRoute) _Bool homePodRoute;
@property (nonatomic, readonly, getter=isPowerbeatsRoute) _Bool powerbeatsRoute;
@property (nonatomic, readonly, getter=isSmartAudio) _Bool smartAudio;
@property (nonatomic, readonly, getter=isW1Route) _Bool w1Route;
@property (nonatomic, readonly, getter=isAirPlayRoute) _Bool airPlayRoute;
@property (nonatomic, readonly, getter=isW2Route) _Bool w2Route;
@property (nonatomic, readonly, getter=isH1Route) _Bool h1Route;
@property (nonatomic, readonly, getter=isShareableRoute) _Bool shareableRoute;
@property (nonatomic, readonly, getter=isHeadphonesRoute) _Bool headphonesRoute;
@property (nonatomic, readonly, getter=isStereoPair) _Bool stereoPair;
@property (nonatomic, readonly, getter=isTVRoute) _Bool tvRoute;
@property (nonatomic, readonly, getter=isB444Route) _Bool b444Route;
@property (nonatomic, readonly, getter=isB298Route) _Bool b298Route;
@property (nonatomic, readonly, getter=isB419Route) _Bool b419Route;
@property (nonatomic, readonly, getter=isB364Route) _Bool b364Route;
@property (nonatomic, readonly, getter=isLowLatencyRoute) _Bool lowLatencyRoute;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAVRouteDescription:(id)arg1;

@end
