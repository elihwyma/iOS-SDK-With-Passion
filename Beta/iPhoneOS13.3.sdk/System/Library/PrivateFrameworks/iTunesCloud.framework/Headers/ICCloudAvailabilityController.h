/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSString, RadiosPreferences;

@protocol OS_dispatch_queue;

@interface ICCloudAvailabilityController : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _hasProperNetworkConditionsToShowCloudMedia;
    _Bool _isAirplaneModeActive;
    _Bool _isAutoDownloadOnCellularAllowed;
    _Bool _isCellularDataActive;
    _Bool _isCellularDataRestrictedForMusic;
    _Bool _isShowingAllMusic;
    _Bool _isShowingAllVideo;
    _Bool _isUpdateInProgress;
    _Bool _isWiFiEnabled;
    _Bool _isWiFiAssociated;
    _Bool _isEthernetWired;
    _Bool _isNetworkReachable;
    _Bool _canShowCloudMusic;
    _Bool _canShowCloudVideo;
    _Bool _canShowCloudDownloadButtons;
    int _preferencesChangedNotifyToken;
    _Bool _preferencesChangedNotifyTokenIsValid;
    long long _networkType;
    RadiosPreferences *_radiosPreferences;
    unsigned long long _networkReachabilityObservationCount;
    struct __CTServerConnection *_ctServerConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedController;

- (id)init;
- (void)dealloc;
- (_Bool)isNetworkReachable;
- (void)airplaneModeChanged;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;
- (_Bool)hasProperNetworkConditionsToPlayMedia;
- (_Bool)hasProperNetworkConditionsToShowCloudMedia;
- (_Bool)isCellularDataRestrictedForMusic;
- (_Bool)shouldProhibitMusicActionForCurrentNetworkConditions;
- (_Bool)isCellularDataRestrictedForVideos;
- (_Bool)shouldProhibitVideosActionForCurrentNetworkConditions;
- (_Bool)isCellularDataRestrictedForStoreApps;
- (_Bool)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (_Bool)canShowCloudDownloadButtons;
- (_Bool)canShowCloudMusic;
- (_Bool)canShowCloudVideo;
- (_Bool)_hasWiFiCapability;
- (_Bool)_uncachedIsAutoDownloadOnCellularAllowed;
- (_Bool)_uncachedIsShowingAllMusic;
- (_Bool)_uncachedIsShowingAllVideo;
- (void)_onQueue_updateCanShowCloudDownloadButtonsWithNotification:(_Bool)arg1;
- (void)_onQueue_updateCanShowCloudTracksWithNotification:(_Bool)arg1;
- (void)_onQueue_updateIsCellularDataRestrictedForMusic;
- (void)_wifiStateDidChangeNotification:(id)arg1;
- (_Bool)_isAutoDownloadOnCellularAllowed;
- (void)_onQueue_beginObservingReachabilityChanges;
- (void)_onQueue_endObservingReachabilityChanges;
- (_Bool)_hasCellularCapability;
- (void)beginObservingNetworkReachability;
- (void)endObservingNetworkReachability;
- (void)_setNewIsNetworkReachable:(_Bool)arg1 networkType:(long long)arg2;

@end
