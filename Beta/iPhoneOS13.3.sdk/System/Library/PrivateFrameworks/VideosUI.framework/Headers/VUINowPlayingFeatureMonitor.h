/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, TVMediaPlaybackManager;

@protocol OS_dispatch_queue, TVPAVFPlayback, VUINowPlayingFeature, VUINowPlayingFeatureMonitorDelegate;

__attribute__((visibility("hidden")))
@interface VUINowPlayingFeatureMonitor : NSObject

{
    struct {
        _Bool respondsToFeatureDidChangeState;
        _Bool respondsToActiveFeatureChangedFrom;
    } _delegateFlags;
    _Bool _observingElapsedTime;
    id <VUINowPlayingFeatureMonitorDelegate> _delegate;
    NSObject<TVPAVFPlayback> *_player;
    TVMediaPlaybackManager *_playbackManager;
    NSMutableSet *_features;
    NSMapTable *_featureDependencies;
    NSMapTable *_featureTokens;
    NSMapTable *_featureBoundaryInfos;
    NSMapTable *_featureTimers;
    id <VUINowPlayingFeature> _featureLastRequestedUI;
    NSMutableArray *_enabledUIModes;
    double _lastProcessedElapsedTime;
    NSMutableDictionary *_boundaryTimeObserverInfos;
    id _elapsedTimeObserverToken;
    NSObject<OS_dispatch_queue> *_elapsedTimeProcessingQueue;
    NSMutableArray *_elapsedTimes;
}

@property (retain, nonatomic) NSMutableSet *features;
@property (retain, nonatomic) NSMapTable *featureDependencies;
@property (retain, nonatomic) NSMapTable *featureTokens;
@property (retain, nonatomic) NSMapTable *featureBoundaryInfos;
@property (retain, nonatomic) NSMapTable *featureTimers;
@property (retain, nonatomic) id <VUINowPlayingFeature> featureLastRequestedUI;
@property (retain, nonatomic) NSMutableArray *enabledUIModes;
@property (nonatomic) _Bool observingElapsedTime;
@property (nonatomic) double lastProcessedElapsedTime;
@property (retain, nonatomic) NSMutableDictionary *boundaryTimeObserverInfos;
@property (retain, nonatomic) id elapsedTimeObserverToken;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *elapsedTimeProcessingQueue;
@property (retain, nonatomic) NSMutableArray *elapsedTimes;
@property (nonatomic, readonly) NSArray *allFeatures;
@property (weak, nonatomic) id <VUINowPlayingFeatureMonitorDelegate> delegate;
@property (retain, nonatomic) NSObject<TVPAVFPlayback> *player;
@property (retain, nonatomic) TVMediaPlaybackManager *playbackManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)addFeature:(id)arg1;
- (void)removeFeature:(id)arg1;
- (_Bool)mediaPlaybackManager:(id)arg1 shouldEnableUIModeImplicitly:(long long)arg2;
- (void)mediaPlaybackManager:(id)arg1 shouldHideUI:(_Bool)arg2 animated:(_Bool)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)removeFeaturesMatching:(id)arg1;
- (id)featuresForType:(unsigned long long)arg1;
- (id)activeFeatureForType:(unsigned long long)arg1;
- (void)_cleanUpEverything;
- (void)_unregisterPlaybackStateNotification;
- (void)_processAnyTimeBoundFeatures;
- (void)_registerPlaybackStateChangeNotification;
- (void)_updateBoundaryObserverForFeature:(id)arg1 change:(id)arg2;
- (void)_processFeature:(id)arg1;
- (_Bool)_shouldAnimateFeature:(id)arg1;
- (void)_deactivateFeature:(id)arg1 animated:(_Bool)arg2;
- (void)_cleanupFeature:(id)arg1;
- (void)_cancelTimerForFeature:(id)arg1;
- (_Bool)_isTimerFeatureExpired:(id)arg1;
- (void)_removeAllObservedTokensForFeature:(id)arg1;
- (_Bool)_isTimeBoundFeature:(id)arg1;
- (_Bool)_isHybridFeature:(id)arg1;
- (void)_processUserTriggeredFeature:(id)arg1 activate:(_Bool)arg2 animated:(_Bool)arg3;
- (void)_startObservingElapsedTime;
- (id)_activeFeatures;
- (void)_processTimeBoundFeature:(id)arg1;
- (_Bool)_isTimerTriggeredFeature:(id)arg1;
- (void)_processTimerTriggeredFeature:(id)arg1;
- (_Bool)_isUserTriggeredFeature:(id)arg1;
- (id)_activeFeature;
- (void)_removeTimeObservingForFeature:(id)arg1 withStartTime:(double)arg2;
- (void)_playbackStateChangedNottificaiton:(id)arg1;
- (_Bool)_isTVAdvisoryFeature:(id)arg1;
- (void)_processElapsedTime:(double)arg1;
- (void)_processLastElapsedTime;
- (void)_processElapsedTimeOnInternalQueue:(double)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_timeBoundFeatures;
- (id)_observerInfoForFeature:(id)arg1 matchingTime:(double)arg2;
- (_Bool)_isElapsedTimeWithinFeatureTimeWindow:(id)arg1;
- (_Bool)_hasActiveFeaturesInArray:(id)arg1;
- (void)_scheduleDeactivationOfTimeBoundFeature:(id)arg1;
- (void)_activateFeature:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_needsUIForFeature:(id)arg1;
- (void)_addTimeObservingForFeature:(id)arg1 withStartTime:(double)arg2 andHandler:(CDUnknownBlockType)arg3;
- (void)deactivateFeature:(id)arg1 animated:(_Bool)arg2;
- (void)_addObservedToken:(id)arg1 forFeature:(id)arg2;
- (void)_setupTimerFeatureExpiration;
- (void)_expireTimerFeaturesIfNeeded;
- (void)addFeature:(id)arg1 withDependencyToPreferredFeatures:(id)arg2;
- (void)enableUIMode:(long long)arg1 enabled:(_Bool)arg2;
- (_Bool)_hasAnyActiveFeature;
- (_Bool)_shouldActivateTimeBoundFeatureInitially:(id)arg1;

@end
