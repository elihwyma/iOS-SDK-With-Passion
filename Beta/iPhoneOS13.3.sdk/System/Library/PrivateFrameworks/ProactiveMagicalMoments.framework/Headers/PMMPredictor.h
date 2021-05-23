/*
 Image: /System/Library/PrivateFrameworks/ProactiveMagicalMoments.framework/ProactiveMagicalMoments
 */

#import <Foundation/NSObject.h>

@class CXCallObserver, NSDate, NSString, PETScalarEventTracker, PMMAppsSettingsMonitor, PMMAudioDisconnectListener, PMMDataProtectionMonitor, PMMMusicStateProcessor, PMMPredictionItem, PMMTelephonyConnection;

@protocol OS_dispatch_queue;

@interface PMMPredictor : NSObject

{
    _Bool _callInProgress;
    CXCallObserver *_callObserver;
    _Bool _unlockedSinceBoot;
    PMMAudioDisconnectListener *_disconnectListener;
    PMMAppsSettingsMonitor *_myAppsSettingsMonitor;
    PMMMusicStateProcessor *_musicStateProcessor;
    NSObject<OS_dispatch_queue> *_nowPlayingStatusQueue;
    PMMTelephonyConnection *_ctConnection;
    PMMDataProtectionMonitor *_dataProtectionMonitor;
    PMMPredictionItem *_mostRecentPrediction;
    PMMPredictionItem *_mostRecentNowPlayingPrediction;
    NSString *_mostRecentNowPlayingApp;
    NSDate *_dateOfLastNowPlayingEvent;
    long long _encryptedDataAvailability;
    long long _dataProtectionStatus;
    PETScalarEventTracker *_mmAppSuggestion;
    PETScalarEventTracker *_heroAppSuggestion;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) PMMAudioDisconnectListener *disconnectListener;
@property (retain, nonatomic) PMMAppsSettingsMonitor *myAppsSettingsMonitor;
@property (retain, nonatomic) PMMMusicStateProcessor *musicStateProcessor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *nowPlayingStatusQueue;
@property (retain, nonatomic) PMMTelephonyConnection *ctConnection;
@property (retain, nonatomic) PMMDataProtectionMonitor *dataProtectionMonitor;
@property (retain, nonatomic) PMMPredictionItem *mostRecentPrediction;
@property (retain, nonatomic) PMMPredictionItem *mostRecentNowPlayingPrediction;
@property (retain, nonatomic) NSString *mostRecentNowPlayingApp;
@property (retain, nonatomic) NSDate *dateOfLastNowPlayingEvent;
@property (nonatomic) long long encryptedDataAvailability;
@property (nonatomic) _Bool unlockedSinceBoot;
@property (nonatomic) long long dataProtectionStatus;
@property (retain, nonatomic) PETScalarEventTracker *mmAppSuggestion;
@property (retain, nonatomic) PETScalarEventTracker *heroAppSuggestion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (void)dataProtectionMonitor:(id)arg1 encryptedDataAvailbilityDidChange:(long long)arg2;
- (void)dataProtectionMonitor:(id)arg1 unlockedSinceBoot:(_Bool)arg2;
- (void)dataProtectionMonitor:(id)arg1 dataProtectionStatusDidChange:(long long)arg2;
- (void)handlePredictedApplications:(id)arg1;
- (void)_notifyAppPredictionAboutMMUpdate:(id)arg1;
- (void)logPrediction:(id)arg1 predictionSource:(unsigned long long)arg2 mmReason:(long long)arg3 decReason:(long long)arg4 reasonSingle:(long long)arg5 reasonMetadata:(id)arg6;
- (id)preprocessPrediction:(id)arg1 predictionSource:(unsigned long long)arg2 mmReason:(long long)arg3 decReason:(long long)arg4 reasonSingle:(long long)arg5 reasonMetadata:(id)arg6;
- (id)notifyNonNowPlayingConsumersOfPredictionItem:(id)arg1;
- (void)notifyNowPlayingConsumerOfPredictionItem:(id)arg1;
- (id)_publishPredictionWithPredictedApplication:(id)arg1 fromUnitTest:(_Bool)arg2;
- (void)_clearAllRecommendationsExceptAppPredictions;
- (void)_clearAllRecommendations;
- (id)expirationForReason:(long long)arg1;
- (_Bool)_recommendingAudioWhileAlreadyPlaying:(id)arg1;
- (void)_updatePredictionBasedOnPreviousDataProtectionStatus:(long long)arg1 previousEncryptedDataAvailability:(long long)arg2;
- (void)handleNowPlayingInfoDidChange;
- (void)_handleNowPlayingInfoDidChange;
- (void)fetchMediaRemoteNowPlayingApplicationPlaybackState:(CDUnknownBlockType)arg1;
- (void)fetchMediaRemoteNowPlayingApplicationBundleId:(CDUnknownBlockType)arg1;

@end
