/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class MPAVRoutingController, NSDate, NSDictionary, NSNumber, NSString, NSTimer, SBAVSystemControllerCache, SBApplication, SBDirectToAirPlayController, SBSStatusBarStyleOverridesAssertion, SBVolumeControl;

@interface SBMediaController : NSObject

{
    int _manualVolumeChangeCount;
    NSDictionary *_nowPlayingInfo;
    float _pendingVolumeChange;
    NSTimer *_volumeCommitTimer;
    _Bool _debounceVolumeRepeat;
    int _numberOfVolumeDecreasesSinceDownButtonDown;
    SBApplication *_lastNowPlayingApplication;
    _Bool _lastNowPlayingAppIsPlaying;
    int _lastMediaRemoteAppActivityStatus;
    _Bool _suppressHUD;
    _Bool _screenSharingViaAVSystemController;
    _Bool _screenSharingViaDisplayMonitor;
    _Bool _screenSharingSetsStatusBarOverride;
    NSTimer *_screenSharingStatusBarOverrideTimer;
    NSTimer *_videoOutStatusBarOverrideTimer;
    MPAVRoutingController *_routingController;
    SBAVSystemControllerCache *_avCache;
    SBVolumeControl *_volumeControl;
    NSNumber *_audioCategoryMusicVolume;
    NSDate *_lastActivityDate;
    SBSStatusBarStyleOverridesAssertion *_screenSharingStatusBarStyleOverrideAssertion;
    SBSStatusBarStyleOverridesAssertion *_videoOutStatusBarStyleOverrideAssertion;
    SBDirectToAirPlayController *_directToAirPlayController;
    struct IONotificationPort *_arubaDisplayPortNotificationPort;
    int _nowPlayingProcessPID;
}

@property (nonatomic) int nowPlayingProcessPID;
@property (weak, nonatomic, readonly) SBApplication *nowPlayingApplication;
@property (nonatomic, readonly) NSDate *lastActivityDate;
@property _Bool suppressHUD;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)sendResetPlaybackTimeoutCommand;
+ (_Bool)applicationCanBeConsideredNowPlaying:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isPaused;
- (_Bool)isPlaying;
- (void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2;
- (void)_registerForNotifications;
- (void)_unregisterForNotifications;
- (id)_nowPlayingInfo;
- (void)setNowPlayingInfo:(id)arg1;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (_Bool)volumeControlIsAvailable;
- (_Bool)wirelessDisplayRouteIsPicked;
- (void)cancelVolumeEvent;
- (void)_authenticationStateChanged:(id)arg1;
- (_Bool)endSeek:(int)arg1 eventSource:(long long)arg2;
- (_Bool)changeTrack:(int)arg1 eventSource:(long long)arg2;
- (_Bool)togglePlayPauseForEventSource:(long long)arg1;
- (_Bool)playForEventSource:(long long)arg1;
- (_Bool)pauseForEventSource:(long long)arg1;
- (_Bool)toggleRepeatForEventSource:(long long)arg1;
- (_Bool)toggleShuffleForEventSource:(long long)arg1;
- (_Bool)setPlaybackSpeed:(int)arg1 eventSource:(long long)arg2;
- (_Bool)likeTrackForEventSource:(long long)arg1;
- (_Bool)banTrackForEventSource:(long long)arg1;
- (_Bool)addTrackToWishListForEventSource:(long long)arg1;
- (_Bool)beginSeek:(int)arg1 eventSource:(long long)arg2;
- (void)cacheDidRebuildAfterServerDeath:(id)arg1;
- (void)cache:(id)arg1 didUpdateAirplayDisplayActive:(_Bool)arg2;
- (void)_updateAVRoutes;
- (void)_updateScreenSharingStatusBarStyleOverrideSuppressionPreference:(id)arg1;
- (void)_clearScreenSharingStatusBarStyleOverride;
- (void)_clearVideoOutStatusBarStyleOverride;
- (_Bool)_sendMediaCommand:(unsigned int)arg1 options:(id)arg2;
- (_Bool)isScreenSharing;
- (void)updateScreenSharingStatusBarStyleOverride;
- (void)_notifyThatScreenSharingChanged;
- (_Bool)_displayMonitorHasAConnectedExternalIdentity;
- (void)_setNowPlayingApplication:(id)arg1;
- (void)_nowPlayingAppDidExit:(id)arg1;
- (void)_updateLastRecentActivityDate;
- (void)_updateDisplayMonitorState;
- (_Bool)hasTrack;
- (_Bool)isFirstTrack;
- (_Bool)isLastTrack;
- (_Bool)isApplicationActivityActive;
- (void)_startVideoOutStatusBarStyleOverride;
- (_Bool)stopForEventSource:(long long)arg1;
- (_Bool)handsetRouteIsSelected;
- (_Bool)routeOtherThanHandsetIsAvailable;
- (id)nameOfPickedRoute;
- (void)_mediaRemoteNowPlayingInfoDidChange:(id)arg1;
- (void)_mediaRemoteNowPlayingApplicationDidChange:(id)arg1;
- (void)_mediaRemoteNowPlayingApplicationIsPlayingDidChange:(id)arg1;
- (void)_applicationActivityStatusDidChange:(id)arg1;

@end
