/*
 Image: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
 */

#import <Foundation/NSObject.h>

@interface PLUtilities : NSObject

+ (id)containerPath;
+ (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
+ (id)hardwareModel;
+ (id)workQueue;
+ (_Bool)hasGasGauge;
+ (_Bool)hasBattery;
+ (double)defaultBatteryEnergyCapacity;
+ (_Bool)isSiriEnabled;
+ (_Bool)isAppAnalyticsEnabled;
+ (_Bool)isValidString:(id)arg1;
+ (_Bool)isPowerlogHelperd;
+ (_Bool)isPingPongChargingWith:(_Bool)arg1 andBatteryLevelPercent:(double)arg2;
+ (id)getIdentifierFromEntry:(id)arg1;
+ (double)secondsFromMachTime:(unsigned long long)arg1;
+ (id)workQueueForClass:(Class)arg1;
+ (id)JSONSanitizeDictionary:(id)arg1;
+ (id)torchTypeString;
+ (id)powerModelForOperatorName:(id)arg1;
+ (id)bundleIDFromPid:(int)arg1;
+ (double)scaledPowerBasedOnPoint:(double)arg1 withPowerModel:(id)arg2;
+ (void)getCurrentMonotonicAndMachAbsTime:(id *)arg1 machAbsTime:(unsigned long long *)arg2;
+ (id)deviceBootTime;
+ (unsigned long long)getCurrMachAbsTimeInSecs;
+ (id)getDeviceNameIOSWatchOS;
+ (double)getMachbaseTimeRatio;
+ (_Bool)deviceRebooted;
+ (_Bool)isUserProcess;
+ (id)dateFromTimeval:(struct timeval)arg1;
+ (id)dateFromTimevalSystemTime:(struct timeval)arg1;
+ (_Bool)isEduMode;
+ (id)workQueueForKey:(id)arg1;
+ (long long)roundToSigFig:(int)arg1 withSigFig:(int)arg2;
+ (_Bool)isFullModeDaemon;
+ (id)MavRevStringQuery;
+ (void)exitWithReason:(short)arg1;
+ (id)processNameForPid:(int)arg1;
+ (_Bool)hasBatteryUI;
+ (_Bool)isALSCurveHigherThanDefault;
+ (_Bool)compressWithSource:(id)arg1 withDestination:(id)arg2 withLevel:(int)arg3;
+ (id)allSubClassesForClass:(Class)arg1;
+ (id)transactionWorkQueue;
+ (id)bundleIDFromURL:(id)arg1;
+ (_Bool)isLiteModeDaemon;
+ (id)liteModeDaemonName;
+ (id)fullModeDaemonName;
+ (void)dispatchSyncWithoutDeadlockOnQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)extractDateStringAndUUIDStringFromFilePath:(id)arg1;
+ (_Bool)createAndChownDirectory:(id)arg1;
+ (_Bool)createAndChownDirectoryIfDirectoryDoesNotExist:(id)arg1;
+ (id)shortUUIDString;
+ (_Bool)moveItemAtPath:(id)arg1 toPath:(id)arg2 withName:(id)arg3 error:(id *)arg4;
+ (void)exitSafe:(int)arg1;
+ (void)setMobileOwnerForFile:(id)arg1;
+ (int)compressWithSourceStream:(struct __sFILE *)arg1 withDestination:(struct __sFILE *)arg2 withLevel:(int)arg3;
+ (id)deviceBootUUID;
+ (struct mach_timebase_info *)getMachTimebase;
+ (id)launchdNameToProcessName:(id)arg1;
+ (id)runningAsUser;
+ (id)getWhiteblacklist;
+ (id)modeForEntryKey:(id)arg1 withKeyName:(id)arg2;
+ (short)canLogMode:(id)arg1 fullMode:(_Bool)arg2;
+ (unsigned long long)dispatchTimeInSeconds:(double)arg1;
+ (void)exitWithReasonSync:(short)arg1;
+ (_Bool)runningAsMobileUser;
+ (_Bool)gasGaugeEnabled;
+ (_Bool)isHeySiriEnabled;
+ (id)hashString:(id)arg1;
+ (_Bool)shouldLogForEntryKey:(id)arg1;
+ (short)logModeForEntryKey:(id)arg1 withKey:(id)arg2 andValue:(id)arg3;
+ (void)refreshBUI;

@end
