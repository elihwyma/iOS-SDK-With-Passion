/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSObject.h>

@class FIUIWorkoutActivityType, FIUIWorkoutDefaultMetricsProvider, NPSDomainAccessor, NPSManager, NSMutableArray, NSMutableDictionary;

@interface FIUIWorkoutSettingsManager : NSObject

{
    FIUIWorkoutActivityType *_workoutActivityType;
    NSMutableDictionary *_settingsByActivityType;
    NSMutableDictionary *_settingOverridesByMetric;
    NSMutableArray *_enabledMetrics;
    FIUIWorkoutDefaultMetricsProvider *_defaultMetricsProvider;
    NPSDomainAccessor *_domainAccessor;
    NPSManager *_syncManager;
}

@property (retain, nonatomic) NPSDomainAccessor *domainAccessor;
@property (retain, nonatomic) NPSManager *syncManager;

+ (void)obliterateUserConfiguredWorkoutMetrics;

- (id)init;
- (void)_clearOldMetricsIfNeeded;
- (void)_readFromDomain;
- (_Bool)_hasUserMadeMetricChangesToWorkoutType:(id)arg1 enabledMetrics:(id)arg2 settingOverridesByMetric:(id)arg3 metricFormatVersion:(id)arg4;
- (void)_writeToDomainWithShouldUpdateVersion:(_Bool)arg1;
- (id)supportedMetrics;
- (id)orderedDisabledMetrics;
- (_Bool)isMetricEnabled:(unsigned long long)arg1;
- (_Bool)_enabledMetricsAreDefaultAfterPaceMigration:(id)arg1 workoutActivityType:(id)arg2;
- (void)_migratePaceViewSettingIfNeeded;
- (id)initWithWorkoutActivityType:(id)arg1;
- (id)orderedEnabledMetrics;
- (id)orderedSupportedMetrics;
- (id)orderedEnabledAndSupportedMetrics;
- (void)setEnabled:(_Bool)arg1 forMetricType:(unsigned long long)arg2 didChange:(_Bool *)arg3;
- (void)moveMetricType:(unsigned long long)arg1 toEnabledIndex:(long long)arg2;
- (long long)disabledIndexForMetricType:(unsigned long long)arg1;
- (void)reloadMetrics;

@end
