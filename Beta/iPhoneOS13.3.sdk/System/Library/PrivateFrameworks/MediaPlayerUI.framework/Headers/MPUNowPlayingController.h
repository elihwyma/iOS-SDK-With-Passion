/*
 Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

#import <Foundation/NSObject.h>

@class MPUNowPlayingMetadata, NSDictionary, NSString, UIImage;

@protocol MPUNowPlayingDelegate, OS_dispatch_source;

@interface MPUNowPlayingController : NSObject

{
    NSObject<OS_dispatch_source> *_timeInformationTimer;
    NSDictionary *_currentNowPlayingInfo;
    double _currentElapsed;
    double _currentDuration;
    long long _isPlaying;
    NSString *_currentNowPlayingAppDisplayID;
    NSString *_currentNowPlayingAppParentApp;
    _Bool _hasValidCurrentNowPlayingAppDisplayID;
    _Bool _isRegisteredForNowPlayingNotifications;
    _Bool _isUpdatingNowPlayingInfo;
    _Bool _isUpdatingPlaybackState;
    _Bool _isUpdatingNowPlayingApp;
    _Bool _wantsTimeInformationUpdates;
    UIImage *_cachedNowPlayingArtwork;
    _Bool _cachedArtworkDirty;
    _Bool _currentNowPlayingAppIsRunning;
    _Bool _shouldUpdateNowPlayingArtwork;
    id <MPUNowPlayingDelegate> _delegate;
    NSString *_currentNowPlayingArtworkDigest;
    double _timeInformationUpdateInterval;
}

@property (weak, nonatomic) id <MPUNowPlayingDelegate> delegate;
@property (nonatomic, readonly) NSDictionary *currentNowPlayingInfo;
@property (nonatomic, readonly) MPUNowPlayingMetadata *currentNowPlayingMetadata;
@property (nonatomic, readonly) UIImage *currentNowPlayingArtwork;
@property (nonatomic, readonly) NSString *currentNowPlayingArtworkDigest;
@property (nonatomic, readonly) _Bool isPlaying;
@property (nonatomic, readonly) NSString *nowPlayingAppDisplayID;
@property (nonatomic, readonly) NSString *nowPlayingAppParentAppDisplayID;
@property (nonatomic, readonly) _Bool currentNowPlayingAppIsRunning;
@property (nonatomic, readonly) _Bool nowPlayingAppIsSystemMediaApp;
@property (nonatomic, readonly) double currentElapsed;
@property (nonatomic, readonly) double currentDuration;
@property (nonatomic) double timeInformationUpdateInterval;
@property (nonatomic) _Bool shouldUpdateNowPlayingArtwork;

- (id)init;
- (void)dealloc;
- (void)update;
- (void)_registerForNotifications;
- (void)_unregisterForNotifications;
- (void)startUpdating;
- (void)stopUpdating;
- (void)_updateCurrentNowPlaying;
- (void)_updatePlaybackState;
- (void)_updateNowPlayingAppDisplayID;
- (void)_updateTimeInformationAndCallDelegate:(_Bool)arg1;
- (_Bool)_isUpdatingTimeInformation;
- (void)_stopUpdatingTimeInformation;
- (void)_startUpdatingTimeInformation;

@end
