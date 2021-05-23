/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class MPCAudioSpectrumAnalyzer, MPCPlaybackIntent, MPCPlayerPath, MPProtocolProxy, NSString, UIView, _MPCAVController, _MPCLeaseManager, _MPCMediaRemotePublisher, _MPCPlaybackAccountManager, _MPCPlaybackEngineSessionManager, _MPCReportingController;

@protocol MPCPlaybackEngineDelegate, MPCPlaybackEngineEventObserving;

@interface MPCPlaybackEngine : NSObject

{
    MPCAudioSpectrumAnalyzer *_audioAnalyzer;
    _Bool _pictureInPictureSupported;
    _Bool _videoSupported;
    _Bool _stateRestorationSupported;
    _Bool _scheduledPlaybackStatePreservation;
    _Bool _systemMusicApplication;
    _Bool _audioAnalyzerEnabled;
    NSString *_playerID;
    id <MPCPlaybackEngineDelegate> _delegate;
    MPCPlaybackIntent *_fallbackPlaybackIntent;
    MPProtocolProxy<MPCPlaybackEngineEventObserving> *_eventObserver;
    _MPCAVController *_implementation;
    _MPCMediaRemotePublisher *_mediaRemotePublisher;
    _MPCReportingController *_reportingController;
    _MPCPlaybackEngineSessionManager *_sessionManager;
    _MPCLeaseManager *_leaseManager;
    _MPCPlaybackAccountManager *_accountManager;
    unsigned long long _options;
    NSString *_audioSessionCategory;
    unsigned long long _audioSessionOptions;
}

@property (nonatomic, getter=hasScheduledPlaybackStatePreservation) _Bool scheduledPlaybackStatePreservation;
@property (nonatomic, readonly) MPProtocolProxy<MPCPlaybackEngineEventObserving> *eventObserver;
@property (nonatomic, readonly) _MPCAVController *implementation;
@property (nonatomic, readonly) _MPCMediaRemotePublisher *mediaRemotePublisher;
@property (nonatomic, readonly) _MPCReportingController *reportingController;
@property (nonatomic, readonly) _MPCPlaybackEngineSessionManager *sessionManager;
@property (nonatomic, readonly) _MPCLeaseManager *leaseManager;
@property (nonatomic, readonly) _MPCPlaybackAccountManager *accountManager;
@property (nonatomic, readonly) UIView *videoView;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, getter=isSystemMusicApplication) _Bool systemMusicApplication;
@property (copy, nonatomic) NSString *audioSessionCategory;
@property (nonatomic) unsigned long long audioSessionOptions;
@property (nonatomic, getter=isAudioAnalyzerEnabled) _Bool audioAnalyzerEnabled;
@property (nonatomic, readonly) MPCAudioSpectrumAnalyzer *audioAnalyzer;
@property (nonatomic, readonly) MPCPlayerPath *playerPath;
@property (copy, nonatomic, readonly) NSString *playerID;
@property (weak, nonatomic) id <MPCPlaybackEngineDelegate> delegate;
@property (nonatomic, getter=isPictureInPictureSupported) _Bool pictureInPictureSupported;
@property (nonatomic, getter=isVideoSupported) _Bool videoSupported;
@property (retain, nonatomic) MPCPlaybackIntent *fallbackPlaybackIntent;
@property (nonatomic, getter=isStateRestorationSupported) _Bool stateRestorationSupported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)requiresMainThread;
+ (void)preheatPlayback;

- (void)start;
- (id)initWithPlayerID:(id)arg1;
- (void)becomeActive;
- (void)addEngineObserver:(id)arg1;
- (void)addSupportedSpecializedQueueIdentifier:(id)arg1 localizedName:(id)arg2 queueType:(long long)arg3 queueParameters:(id)arg4;
- (void)removeSupportedSpecializedQueueIdentifier:(id)arg1;
- (void)_initializePlaybackStack;
- (void)schedulePlaybackStatePreservation;
- (void)requestAuthorizationForExplicitItem:(id)arg1 reason:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithPlayerID:(id)arg1 options:(unsigned long long)arg2;
- (void)_itemAssetLoadedNotification:(id)arg1;
- (void)_itemInsertedNotification:(id)arg1;
- (void)reportUserSeekFromTime:(double)arg1 toTime:(double)arg2;
- (_Bool)_shouldIgnorePlaybackSessionError:(id)arg1;
- (void)restoreStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeEngineObserver:(id)arg1;

@end
