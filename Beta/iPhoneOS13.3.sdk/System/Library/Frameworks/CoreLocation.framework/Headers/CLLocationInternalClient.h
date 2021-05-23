/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@interface CLLocationInternalClient : NSObject

{
    NSXPCConnection *_connection;
}

+ (id)sharedServiceClient;

- (void)setLocationServicesEnabled:(unsigned char)arg1;
- (id)setAuthorizationPromptMapDisplayEnabled:(unsigned char)arg1;
- (unsigned char)shutdownDaemon;
- (void)setPrivateMode:(unsigned char)arg1;
- (void)notifyPassKitPayment:(id)arg1 transaction:(id)arg2 info:(id)arg3;
- (void)notifyWeatherForecast:(id)arg1 airQualityConditions:(id)arg2 hourlyForecasts:(id)arg3 dailyForecasts:(id)arg4 latitude:(double)arg5 longitude:(double)arg6;
- (id)synchronousRemoteObject;
- (unsigned char)setAuthorizationStatus:(unsigned char)arg1 withCorrectiveCompensation:(unsigned char)arg2 forBundleID:(const struct __CFString *)arg3 orBundlePath:(const struct __CFString *)arg4;
- (unsigned char)clearLocationAuthorizations;
- (id)getArchivedAuthorizationDecisionsWithError:(id *)arg1;
- (id)applyArchivedAuthorizationDecisions:(id)arg1;
- (const struct __CFDictionary *)copyAppsUsingLocation;
- (const struct __CFArray *)copyTechnologiesInUse;
- (void)setLocationDefaultForKey:(const struct __CFString *)arg1 value:(const void *)arg2;
- (const void *)getLocationDefaultForKey:(const struct __CFString *)arg1;
- (id)timeZoneAtLocation:(id)arg1;
- (unsigned char)getPrivateMode;
- (unsigned char)pingDaemon;
- (unsigned char)getLocationServicesEnabled:(char *)arg1;
- (unsigned char)getAuthorizationPromptMapDisplayEnabled:(char *)arg1;
- (void)setGestureServiceEnabled:(unsigned char)arg1;
- (unsigned char)getGestureServiceEnabled:(char *)arg1;
- (unsigned char)getAuthorizationStatus:(int *)arg1 forBundleID:(const struct __CFString *)arg2 orBundlePath:(const struct __CFString *)arg3;
- (unsigned char)performMigration;
- (unsigned char)displayStatistics;
- (unsigned char)dumpLogs:(const struct __CFString *)arg1;
- (const struct __CFDictionary *)copyMonitoredRegionsForBundleIdentifier:(const struct __CFString *)arg1 orBundlePath:(const struct __CFString *)arg2;
- (_Bool)checkAndExerciseAuthorizationForBundleID:(id)arg1 orBundlePath:(id)arg2 services:(unsigned long long)arg3 error:(id *)arg4;
- (unsigned char)getLocationForBundleID:(const struct __CFString *)arg1 orBundlePath:(const struct __CFString *)arg2 dynamicAccuracyReductionEnabled:(unsigned char)arg3 allowsAlteredAccessoryLocations:(unsigned char)arg4 location:(CDStruct_4d1fbe9a *)arg5;
- (void)setMapMatchingRouteHint:(CDStruct_b7b5e951 *)arg1 count:(int)arg2 routingType:(int)arg3;
- (unsigned char)copyLastLog;
- (unsigned char)setStatusBarIconEnabled:(_Bool)arg1 forEntityClass:(unsigned int)arg2;
- (unsigned char)getStatusBarIconEnabled:(_Bool *)arg1 forEntityClass:(unsigned int)arg2;
- (int)getStatusBarIconState;
- (id)getPipelinedCache;
- (_Bool)startStopAdvertisingBeacon:(id)arg1 power:(id)arg2;
- (unsigned char)getGyroCalibrationDatabaseBiasFit:(CDStruct_4d1f5584 *)arg1 atTemperature:(float)arg2;
- (unsigned char)insertGyroCalibrationDatabaseBiasEstimateIfValid:(CDStruct_869f9c67)arg1 temperature:(float)arg2 variance:(CDStruct_869f9c67)arg3 timestamp:(double)arg4;
- (unsigned char)gyroCalibrationDatabaseWipe;
- (unsigned char)getGyroCalibrationDatabaseNumTemperatures:(int *)arg1;
- (unsigned char)compassCalibrationDatabaseGetBias:(CDStruct_1e3bbe6d *)arg1 magneticField:(CDStruct_869f9c67)arg2 acceleration:(CDStruct_869f9c67)arg3;
- (unsigned char)compassCalibrationDatabaseSetBias:(CDStruct_869f9c67)arg1 magneticField:(CDStruct_869f9c67)arg2 level:(int)arg3 magnitude:(float)arg4 inclination:(float)arg5;
- (unsigned char)configure:(CDStruct_63e0ae22)arg1;
- (unsigned char)getControlPlaneStatusReportClear:(int)arg1 startTime:(double *)arg2 endTime:(double *)arg3 latitude:(double *)arg4 longitude:(double *)arg5 altitude:(double *)arg6 accuracy:(double *)arg7 status:(unsigned int *)arg8;
- (unsigned char)getEmergencyLocationSettingsCompatibilityVersion:(int *)arg1 andContentVersion:(int *)arg2;
- (unsigned char)deleteCurrentEmergencyLocationAsset;
- (const struct __CFDictionary *)copyNearbyAssetSettings;
- (id)getMotionSensorLogs;
- (id)getAccessoryMotionSensorLogs;
- (const struct __CFArray *)copyActivityAlarms;
- (unsigned char)setAuthorizationStatusByType:(int)arg1 withCorrectiveCompensation:(unsigned char)arg2 forBundleID:(const struct __CFString *)arg3 orBundlePath:(const struct __CFString *)arg4;
- (unsigned char)setTemporaryAuthorizationGranted:(unsigned char)arg1 forBundleID:(const struct __CFString *)arg2 orBundlePath:(const struct __CFString *)arg3;
- (unsigned char)setBackgroundIndicatorForBundleID:(const struct __CFString *)arg1 orBundlePath:(const struct __CFString *)arg2 enabled:(unsigned char)arg3;
- (unsigned char)gyroCalibrationDatabaseSupportsMiniCalibration:(int *)arg1;
- (unsigned char)timeSyncMachTimeStamp:(unsigned long long *)arg1 oscarTimeStamp:(unsigned long long *)arg2;

@end
