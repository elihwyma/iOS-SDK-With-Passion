/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXNotificationsLogger, ATXNotificationsPriors, ATXNotificationsRecorderPermanentStore, ATXNotificationsSuggestionLR, NSCache, NSMutableSet, _ATXAggregateLogger, _ATXAppLaunchCategoricalHistogram, _ATXAppLaunchHistogram, _ATXDataStore;

@protocol OS_dispatch_queue;

@interface ATXNotificationsSuggestion : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    _ATXAppLaunchCategoricalHistogram *_notificationsHistory;
    _ATXAppLaunchHistogram *_appHistory;
    ATXNotificationsLogger *_logger;
    _ATXAggregateLogger *_aggdlogger;
    _ATXDataStore *_db;
    ATXNotificationsPriors *_notificationsPriors;
    double _threshold;
    double _stdthreshold;
    double _postthreshold;
    NSMutableSet *_inmemorycache;
    long long _stype;
    _Bool _override;
    _Bool _uselrmodel;
    ATXNotificationsSuggestionLR *_lrmodel;
    double _probaThreshold;
    NSCache *_cache;
    ATXNotificationsRecorderPermanentStore *_permanentStore;
}

+ (id)generateAppId:(id)arg1 topic:(id)arg2;
+ (id)getSuggestionLRModel;
+ (id)createNotificationIdForSuggestion:(id)arg1;
+ (_Bool)isSettingSuggestion:(id)arg1;
+ (id)createBundleIdentifierForSuggestionWithType:(long long)arg1;
+ (id)extractSuggestionTypeStringFromBundleIdentifier:(id)arg1;

- (void)makeSuggestionForNextNotification;
- (id)initWithSuggestionType:(long long)arg1;
- (id)initWithThresholds:(double)arg1 stdThreshold:(double)arg2 suggestionType:(long long)arg3 notificationsHistogram:(id)arg4 applaunchHistogram:(id)arg5 uselrmodel:(_Bool)arg6 probaThreshold:(double)arg7 lrmodel:(id)arg8 permanentStore:(id)arg9;
- (_Bool)checkIfInDB:(id)arg1 topic:(id)arg2;
- (_Bool)_checkIfInDB:(id)arg1 topic:(id)arg2;
- (id)checkForBundleIdOverride;
- (double)shouldMakeSuggestionForBundleId:(id)arg1 topic:(id)arg2;
- (double)computeThresholdScore:(id)arg1 topic:(id)arg2;
- (id)getCachedScoreForAppId:(id)arg1;
- (double)computeScoreByPriors:(id)arg1 observed:(double)arg2 count:(double)arg3;
- (double)computeStandardError:(double)arg1 count:(double)arg2;
- (double)computeLikelihood:(double)arg1 count:(double)arg2;
- (double)computePosterior:(double)arg1 count:(double)arg2 prior:(double)arg3;
- (double)computeScoreByLogisticRegression:(id)arg1 observed:(double)arg2 count:(double)arg3;
- (id)computeFeaturesForBundleId:(id)arg1;
- (double)computeTurnoffProbabilityWithInput:(id)arg1;
- (double)computeTurnoffProbabilityForBundleId:(id)arg1;
- (void)suggestionResponse:(id)arg1 topic:(id)arg2 response:(long long)arg3;
- (void)logRTTOutcomeWithBundleId:(id)arg1 topic:(id)arg2 rttOutcome:(unsigned long long)arg3;
- (id)getResponses;
- (void)resetResponses;
- (id)message:(id)arg1 topic:(id)arg2 response:(long long)arg3;

@end
