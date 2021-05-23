/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXInternalAppRegistrationNotification, NSMutableSet, NSString, NSUserDefaults, NSXPCListener, PETDistributionEventTracker, PETScalarEventTracker, _APRParzenModel, _ATXAppInfoManager, _ATXAppLaunchHistogramManager, _ATXAppLaunchSequenceManager, _ATXDataStore, _ATXDuetHelper;

@protocol OS_dispatch_queue, _CDLocalContext;

@interface APRAppIntentMonitor : NSObject

{
    NSXPCListener *_listener;
    _ATXAppLaunchHistogramManager *_appLaunchHistogramManager;
    _APRParzenModel *_siriKitParzenModel;
    _APRParzenModel *_nonSiriKitParzenModel;
    _ATXDuetHelper *_duetHelper;
    _ATXAppInfoManager *_appInfoManager;
    _ATXAppLaunchSequenceManager *_appActionLaunchSequenceManager;
    _ATXDataStore *_dataStore;
    NSObject<OS_dispatch_queue> *_appIntentHistoryQueue;
    id <_CDLocalContext> _context;
    NSMutableSet *_registrations;
    NSObject<OS_dispatch_queue> *_donationQueue;
    unsigned long long deletionHandlerToken;
    PETScalarEventTracker *_donatedActionsTracker;
    PETDistributionEventTracker *_donatedActionInCacheTracker;
    ATXInternalAppRegistrationNotification *_appRegistrationListener;
    NSUserDefaults *_userDefaults;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)stop;
- (void)start;
- (void)notifyAboutIntentStreamChangeWithReply:(CDUnknownBlockType)arg1;
- (void)_syncForTests;
- (id)_appActionLaunchSequenceManager;
- (id)initWithAppLaunchHistogramManager:(id)arg1 siriKitParzenModel:(id)arg2 nonSiriKitParzenModel:(id)arg3 appInfoManager:(id)arg4 appActionLaunchSequenceManager:(id)arg5 dataStore:(id)arg6;
- (id)initWithAppLaunchHistogramManager:(id)arg1 siriKitParzenModel:(id)arg2 nonSiriKitParzenModel:(id)arg3 appInfoManager:(id)arg4 appActionLaunchSequenceManager:(id)arg5 duetHelper:(id)arg6 dataStore:(id)arg7;
- (void)_listenToActivityStream;
- (void)_listenToIntentStream;
- (void)handleDonationWithDelayedProcessingForBundleId:(id)arg1 intentType:(id)arg2;
- (void)sasProcessingForPrecompletionSiriEventForBundleId:(id)arg1 intentType:(id)arg2 contextValue:(id)arg3;
- (void)handleDonationImmediatelyForBundleId:(id)arg1 intentType:(id)arg2 contextValue:(id)arg3 isDonatedBySiri:(_Bool)arg4 isWhitelistedDaemonDonationBundleId:(_Bool)arg5;
- (void)_respondToIntentStreamChangingWithContext:(id)arg1;
- (void)_handleCompletedIntentForForUUID:(id)arg1 atxIntentSource:(long long)arg2;
- (_Bool)_isWhitelistedDaemonDonationBundleId:(id)arg1;
- (void)_displayDonationOnLockscreenWithAction:(id)arg1;
- (id)adjustedStartDateForFiveSecondFlooringWithAppSessionStartDate:(id)arg1;
- (id)adjustedEndDateForFiveSecondFlooringWithAppSessionEndDate:(id)arg1;
- (id)_adjustedStartDateForIntentDonationWithAppSessionStartDate:(id)arg1;
- (id)_adjustedEndDateForIntentDonationWithAppSessionEndDate:(id)arg1;
- (id)fetchIntentEventsForAppSessionWithBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (_Bool)sessionStartedBeforeDonationForStartDate:(id)arg1 latestDonationDate:(id)arg2;
- (_Bool)shouldProcessIntentDonationsForSessionStartDate:(id)arg1;
- (_Bool)shouldProcessNSUADonationsForSessionStartDate:(id)arg1;
- (void)processIntentDonationsDuringAppSessionForBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 globals:(id)arg4;
- (id)fetchNSUAEventsForAppSessionWithBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (void)processNSUADonationsDuringAppSessionForBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 globals:(id)arg4;
- (void)updateActionPredictionPipelineForAppSession:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (_Bool)shouldAcceptMessageDonation:(id)arg1;
- (void)updateActionPredictionPipelineForIntentEvent:(id)arg1 weight:(float)arg2 appSessionStartDate:(id)arg3 appSessionEndDate:(id)arg4;
- (void)_updateActionPredictionHistogramsForIntentEvent:(id)arg1 weight:(float)arg2;
- (void)_updateActionPredictionHistogramsRemovingActionUUIDs:(id)arg1;
- (void)updateActionPredictionSlotResolutionForIntentEvent:(id)arg1 weight:(float)arg2 prevLocationUUID:(id)arg3 locationUUID:(id)arg4 currentMotionType:(long long)arg5 appSessionStartDate:(id)arg6 appSessionEndDate:(id)arg7 geohash:(long long)arg8 coarseGeohash:(long long)arg9;
- (void)_logSirikitIntentWithDKUUIDKey:(id)arg1 bundleId:(id)arg2;
- (void)_logIntentPredictionsForIntentEvent:(id)arg1;
- (void)updateLaunchHistoryFromDuet:(double)arg1 intentSource:(long long)arg2;
- (void)_updateLaunchHistoryFromDuet;
- (void)_updateLaunchHistoryFromDuetForInterval:(double)arg1;
- (void)_updateLaunchHistoryFromDuetForSource:(long long)arg1;
- (void)recordIntentDonationWithType:(id)arg1 intentSource:(long long)arg2 bundleId:(id)arg3 startDate:(id)arg4;
- (void)handleSiriKitIntentDonationWithType:(id)arg1 bundleId:(id)arg2 startDate:(id)arg3;
- (void)handleNonSiriKitIntentDonationWithType:(id)arg1 bundleId:(id)arg2 startDate:(id)arg3;
- (void)_handleIntentDonationWithType:(id)arg1 bundleId:(id)arg2 startDate:(id)arg3 intentSource:(long long)arg4;
- (void)_retrainParzenModelForIntentSource:(long long)arg1;
- (void)handleIntentOrActivityDeletion;

@end
