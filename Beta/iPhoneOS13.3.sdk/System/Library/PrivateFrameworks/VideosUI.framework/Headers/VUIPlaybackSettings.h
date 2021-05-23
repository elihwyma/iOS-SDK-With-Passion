/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIPlaybackSettings : NSObject

{
    int _preferencesNotifyToken;
    _Bool _preferencesNotifyTokenIsValid;
    _Bool _cellularDataEnabled;
    NSString *_preferredAudioLanguageCode;
    long long _networkStatus;
    long long _preferredWifiPlaybackQuality;
    long long _preferredCellularPlaybackQuality;
}

@property (nonatomic) _Bool cellularDataEnabled;
@property (nonatomic) long long networkStatus;
@property (nonatomic) long long preferredWifiPlaybackQuality;
@property (nonatomic) long long preferredCellularPlaybackQuality;
@property (nonatomic, readonly) long long preferredPlaybackQualityForCurrentNetworkStatus;
@property (retain, nonatomic) NSString *preferredAudioLanguageCode;

+ (id)sharedSettings;

- (id)init;
- (void)dealloc;
- (void)_updateNetworkStatus;
- (void)_networkTypeDidChange:(id)arg1;
- (void)_updatePropertiesFromUserPrefs;
- (void)_registerObserverForUserPrefsChange;
- (long long)_playbackQualityForString:(id)arg1;

@end
