/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class APRAppIntentMonitor, ATXActionPredictionBlacklist, ATXAmbientLightMonitor, ATXAppLaunchLogger, ATXAppLaunchMicroLocation, ATXAppPredictionBlacklist, ATXBBNotificationManager, ATXHeroAppPredictions, ATXMagicalMomentsNowPlayingUpdateMonitor, ATXMagicalMomentsUpdateMonitor, ATXMediaApplications, NSArray, NSDictionary, NSString, NSUserDefaults, _APRParzenModel, _ATXAppDailyDose, _ATXAppInfoManager, _ATXAppInstallMonitor, _ATXAppLaunchLocation, _ATXAppLaunchMonitor, _ATXRecentInstallCache;

@protocol OS_dispatch_queue;

@interface _ATXAppPredictor : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_dayZeroParameters;
    NSDictionary *_dayZeroIntentParameters;
    NSDictionary *_sasBundleScoreBoost;
    NSArray *_interpreters;
    NSArray *_finalSubScores;
    NSArray *_abGroupIdentifiers;
    NSString *_dayZeroABGroupIdentifier;
    NSString *_dayZeroIntentABGroupIdentifier;
    _ATXAppLaunchLocation *_appLaunchLocation;
    _APRParzenModel *_appSiriKitIntentParzen;
    _APRParzenModel *_appNonSiriKitIntentParzen;
    _ATXAppDailyDose *_appDailyDose;
    _ATXRecentInstallCache *_recentInstallCache;
    _ATXAppLaunchMonitor *_appLaunchMonitor;
    APRAppIntentMonitor *_appIntentMonitor;
    _ATXAppInstallMonitor *_appInstallMonitor;
    ATXAppLaunchLogger *_appLaunchLogger;
    ATXBBNotificationManager *_notificationManager;
    ATXMagicalMomentsUpdateMonitor *_mmPredictionMonitor;
    ATXHeroAppPredictions *_heroPredictionServer;
    ATXMagicalMomentsNowPlayingUpdateMonitor *_mmNowPlayingPredictionMonitor;
    ATXAmbientLightMonitor *_ambientLightMonitor;
    _Atomic _Bool _appLaunchAndInstallMonitorsInitialized;
    NSUserDefaults *_userDefaults;
    ATXAppPredictionBlacklist *_appPredictionBlacklist;
    ATXActionPredictionBlacklist *_actionPredictionBlacklist;
    ATXMediaApplications *_mediaApps;
    _ATXAppInfoManager *_appInfoManager;
    ATXAppLaunchMicroLocation *_microLocation;
}

@property (retain, nonatomic) NSArray *abGroupIdentifiers;

+ (id)sharedInstance;
+ (void)removeOldLaunchInfoFrom:(id)arg1 appLaunchHistogram:(id)arg2 spotlightLaunchHistogram:(id)arg3 unlockTimeHistogram:(id)arg4 dayOfWeekHistogram:(id)arg5 airplaneModeLaunchHistogram:(id)arg6 trendingLaunchHistogram:(id)arg7 wifiLaunchHistogram:(id)arg8 coreMotionLaunchHistogram:(id)arg9 dayAndTimeHistogram:(id)arg10 appCoarseTimePOWLocationLaunchesHistogram:(id)arg11 appSpecificTimeDOWLocationLaunchesHistogram:(id)arg12 appCoarseTimePOWLocationConfirmsHistogram:(id)arg13 appSpecificTimeDOWLocationConfirmsHistogram:(id)arg14 appCoarseTimePOWLocationRejectsHistogram:(id)arg15 appSpecificTimeDOWLocationRejectsHistogram:(id)arg16 appIntentLaunchHistogram:(id)arg17 appIntentUnlockTimeHistogram:(id)arg18 appIntentDayOfWeekHistogram:(id)arg19 appIntentAirplaneModeLaunchHistogram:(id)arg20 appIntentTrendingLaunchHistogram:(id)arg21 appIntentWifiHistogram:(id)arg22 appIntentCoreMotionLaunchHistogram:(id)arg23 appForAllIntentsLaunchHistogram:(id)arg24 appForAllIntentsUnlockTimeHistogram:(id)arg25 appForAllIntentsDayOfWeekHistogram:(id)arg26 appForAllIntentsAirplaneModeLaunchHistogram:(id)arg27 appForAllIntentsTrendingLaunchHistogram:(id)arg28 appForAllIntentsWifiHistogram:(id)arg29 appForAllIntentsCoreMotionLaunchHistogram:(id)arg30 launchSequenceManager:(id)arg31 bundleIdTable:(id)arg32 aprExplicitConfirmsHistogram:(id)arg33 aprExplicitRejectsHistogram:(id)arg34 aprImplicitConfirmsHistogram:(id)arg35 aprImplicitRejectsHistogram:(id)arg36 aprSiriKitIntentsHistogram:(id)arg37 aprNonSiriKitIntentsHistogram:(id)arg38 actionConfirmsHistogram:(id)arg39 actionRejectsHistogram:(id)arg40 heuristicConfirmsHistogram:(id)arg41 heuristicRejectsHistogram:(id)arg42 appIntentPartOfWeekHistogram:(id)arg43;
+ (double)time:(double)arg1 toAccuracyInSeconds:(double)arg2;
+ (float)_computeL2DistanceFromBundleId:(id)arg1 to:(const float *)arg2 app2vecMapping:(id)arg3;
+ (_Bool)_predictNextAppLaunchEmbedding:(id)arg1 into:(float *)arg2;
+ (id)recreateSharedInstanceWithCurrentABGroup;
+ (id)getParseTreeForConsumerSubType:(unsigned char)arg1;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initInternal;
- (void)train;
- (void)updateLaunchHistoryFromDuet;
- (id)_appPredictionsSeedAppsGivenSBAppList:(id)arg1 consumerSubType:(unsigned char)arg2;
- (id)_phoneAppsForWatchBundleIds:(id)arg1;
- (id)_appsToPredictWithConsumerSubType:(unsigned char)arg1 intent:(id)arg2 candidateBundleIdentifiers:(id)arg3 allSBApps:(id)arg4 appPredictionBlacklist:(id)arg5 digitalHealthBlacklist:(id)arg6;
- (vector_5be31511)_evalFeaturesForApps:(id)arg1 consumerSubType:(unsigned char)arg2 intent:(id)arg3 scoreLogger:(id)arg4;
- (vector_5be31511)_evalFeaturesForAppForAllIntents:(id)arg1 scoreLogger:(id)arg2;
- (vector_5be31511)_evalFeaturesForAppIntents:(id)arg1 scoreLogger:(id)arg2;
- (unordered_map_bb3acf07)_createMapOfKeyToItemForPredictionItems:(const vector_5be31511 *)arg1;
- (void)_copyValidScoreInputsFromPredictionItem:(const struct ATXPredictionItem *)arg1 toPredictionItem:(struct ATXPredictionItem *)arg2;
- (vector_5be31511)_evalFeaturesForActions:(id)arg1 scoreLogger:(id)arg2;
- (vector_5be31511)_getPredictionForItems:(id)arg1 consumerSubType:(unsigned char)arg2 intent:(id)arg3 scoreLogger:(id)arg4;
- (void)setupScoreLogger:(id)arg1 forConsumerSubType:(unsigned char)arg2;
- (double)predictionScoreForItem:(const struct ATXPredictionItem *)arg1 consumerSubType:(unsigned char)arg2;
- (double)_predictionScoreForItem:(const struct ATXPredictionItem *)arg1 consumerSubType:(unsigned char)arg2 scoreLogger:(id)arg3 intentType:(id)arg4;
- (id)subscoresForInputScores:(id)arg1 consumerSubType:(unsigned char)arg2 intentType:(id)arg3;
- (void)_updateFromAsset;
- (void)_updateFromZeroDayAsset;
- (void)_addZeroDayAppIntentKeysToBundleIdTable:(id)arg1;
- (void)iterZeroDayAppIntentKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateFromZeroDayIntentAsset;
- (void)_updateFromAppPreferencePredictorAsset;
- (_Bool)_initAppLaunchAndInstallMonitors;
- (void)_setActionBlacklist:(id)arg1;
- (id)appLaunchMonitor;
- (id)appIntentMonitor;
- (void)resetRecentInstallCache;
- (id)appInstallMonitor;
- (id)predictWithLimit:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2 intent:(id)arg3 candidateBundleIdentifiers:(id)arg4 candidateActiontypes:(id)arg5 scoreLogger:(id)arg6;
- (id)predictWithLimit:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2 intent:(id)arg3 candidateBundleIdentifiers:(id)arg4 candidateActiontypes:(id)arg5 scoreLogger:(id)arg6 predictionItemsToKeep:(vector_5be31511 *)arg7;
- (id)getPredictionModelDetailsForConsumerSubType:(unsigned char)arg1;
- (id)getABGroups;
- (void)receiveFeedbackForConsumerType:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2 atxResponse:(id)arg3 aprResponse:(id)arg4 engagementType:(unsigned long long)arg5 engagedBundleId:(id)arg6 bundleIdsShown:(id)arg7;

@end
