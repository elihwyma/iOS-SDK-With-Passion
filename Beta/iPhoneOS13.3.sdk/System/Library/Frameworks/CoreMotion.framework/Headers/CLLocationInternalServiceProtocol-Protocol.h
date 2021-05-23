/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@protocol CLLocationInternalServiceProtocol

- (unsigned short)getTechnologiesInUseWithReplyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getAppsUsingLocationWithReplyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)setLocationDefaultForKey:andValue:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getLocationDefaultForKey:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)timeZoneForLocation:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)setGestureServiceEnabled:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)performMigrationWithReplyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)shutdownDaemonWithReplyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)setAuthorizationStatus:withCorrectiveCompensation:forBundleID:orBundlePath:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)setPrivateMode:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getPrivateMode: /* Error: Ran out of types for this method. */;
- (unsigned short)setLocationServicesEnabled:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getLocationServicesEnabledWithReplyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)setAuthorizationPromptMapDisplayEnabled:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getAuthorizationPromptMapDisplayEnabledWithReplyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getGestureServiceEnabledWithReplyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)pingDaemonWithReplyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getAuthorizationStatusForBundleID:orBundlePath:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)displayStatisticsWithReplyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)dumpLogsWithDescription:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)copyLastLogWithReplyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getMonitoredRegionsForBundleID:orBundlePath:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)checkAndExerciseAuthorizationForBundleID:orBundlePath:services:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getLocationForBundleID:orBundlePath:dynamicAccuracyReductionEnabled:allowsAlteredAccessoryLocations:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)resetAllClientsWithReplyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)applyArchivedAuthorizationDecisions:withConfirmationToken:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getArchivedAuthorizationDecisionsWithReplyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)setStatusBarIconEnabledForEntityClass:enabled:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getStatusBarIconEnabledForEntityClass:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getStatusBarIconState: /* Error: Ran out of types for this method. */;
- (unsigned short)setMapMatchingRouteHint:routingType:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getPipelinedCacheWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)getActivitiesWithReplyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)setAuthorizationStatusByType:withCorrectiveCompensation:forBundleID:orBundlePath:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)setTemporaryAuthorizationGranted:forBundleID:orBundlePath:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)gyroCalibrationDatabaseSupportsMiniCalibrationWithReplyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)setBackgroundIndicatorEnabled:forBundleID:orBundlePath:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getOscarTimeSyncWithReplyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)startStopAdvertisingBeacon:atPower:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getGyroCalibrationDatabaseBiasFitAtTemplerature:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)insertGyroCalibrationDatabaseBiasEstimateIfValid:temperature:variance:timestamp:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)gyroCalibrationDatabaseWipeWithReplyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)compassCalibrationDatabaseGetBiasWithMagneticField:acceleration:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)gyroCalibrationDatabaseGetNumTemperaturesWithReplyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)setCompassCalibrationDatabaseMagneticField:bias:level:magnitude:inclination:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)configure:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getControlPlaneStatusReportClear:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getEmergencyLocationSettingsVersion: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteCurrentEmergencyLocationAsset: /* Error: Ran out of types for this method. */;
- (unsigned short)copyNearbyAssetSettings: /* Error: Ran out of types for this method. */;
- (unsigned short)getMotionSensorLogsWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)getAccessoryMotionSensorLogsWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)notifyPassKitPayment:transaction:info: /* Error: Ran out of types for this method. */;
- (unsigned short)notifyWeatherForecast:airQualityConditions:hourlyForecasts:dailyForecasts:latitude:longitude: /* Error: Ran out of types for this method. */;

@end
