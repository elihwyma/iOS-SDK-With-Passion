/*
 Image: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSMutableArray, NSMutableDictionary;

@interface PLMetricsFormatterJSON : NSObject

{
    NSMutableDictionary *allMetrics;
    NSMutableArray *metricArray;
    NSArray *appTimeMapping;
    NSArray *appBGTimeMapping;
    NSArray *appBGTimeUpMapping;
    NSArray *appTimeUnpluggedMapping;
    NSArray *appTimeLocationActivityMapping;
    NSArray *appTimeCellularConditionMapping;
    NSArray *appNetworkIOWifiMapping;
    NSArray *appNetworkIOCellularMapping;
    NSArray *appDisplayAPLMapping;
    NSMutableArray *appEnergyFGMapping;
    NSMutableArray *appEnergyBGMapping;
    NSMutableArray *appEnergyTotalMapping;
    NSMutableArray *appEnergyBGAudioMapping;
    NSMutableArray *appEnergyBGLocationMapping;
    NSArray *diskIOMapping;
    NSArray *memoryMapping;
    char tmpFilePath[1024];
    NSDate *_logFileTimeStamp;
}

@property (retain) NSDate *logFileTimeStamp;

- (id)init;
- (void)test;
- (id)sanitizeDictionary:(id)arg1;
- (void)addGlobalMetaData:(id)arg1;
- (void)addAllMetrics:(id)arg1 signpostData:(id)arg2;
- (_Bool)writeSessionFile;
- (id)customRound:(int)arg1 precision:(int)arg2;
- (_Bool)checkKeyExistence:(id)arg1 secondLevel:(id)arg2 dictToCheck:(id)arg3;
- (void)addSubKeys:(id)arg1 extractFromHere:(id)arg2 deviceFirstLevelMetric:(id)arg3 firstLevelKey:(id)arg4 secondLevelKey:(id)arg5 subKeyMap:(id)arg6;
- (void)addSubKeysThirdLevel:(id)arg1 extractFromHere:(id)arg2 deviceFirstLevelMetric:(id)arg3 firstLevelKey:(id)arg4 secondLevelKey:(id)arg5 thirdLevelKey:(id)arg6 subKeyMap:(id)arg7;
- (id)roundArrayValuesToNearestX:(id)arg1 precision:(int)arg2;
- (void)addAppTime:(id)arg1 userData:(id)arg2;
- (void)addNetworkIO:(id)arg1 userData:(id)arg2;
- (void)addDisplayAPL:(id)arg1 userData:(id)arg2;
- (void)addAppEnergy:(id)arg1 userData:(id)arg2;
- (void)addDiskIO:(id)arg1 userData:(id)arg2;
- (void)addAppPerformanceKeysLaunch:(id)arg1 userData:(id)arg2 launchTimeData:(id)arg3;
- (void)addAppPerformanceKeysResume:(id)arg1 userData:(id)arg2 resumeTimeData:(id)arg3;
- (void)addAppPerformanceKeysHang:(id)arg1 userData:(id)arg2 hangTimeData:(id)arg3;
- (void)addAppPerformanceKeysGlitch:(id)arg1 scrollGlitchData:(id)arg2;
- (void)addAppMemoryKeys:(id)arg1 userData:(id)arg2;
- (void)addAppMetaData:(id)arg1 userData:(id)arg2;
- (void)addPowerMetrics:(id)arg1 userData:(id)arg2;
- (void)addPerformanceMetrics:(id)arg1 userData:(id)arg2 signpostData:(id)arg3;
- (void)addAppMetric:(id)arg1;
- (id)getOSVersion;
- (id)getCurrentTimeFormatted:(_Bool)arg1;
- (id)createHeaderForSessionsFile;
- (id)getFileHandle;
- (_Bool)moveLogFile;
- (id)metricsToStringAsJSON;
- (void)printAllMetricsToConsole;

@end
