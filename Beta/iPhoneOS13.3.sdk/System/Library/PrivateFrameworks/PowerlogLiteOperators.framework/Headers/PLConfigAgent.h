/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLAgent.h>

@interface PLConfigAgent : PLAgent

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventNoneDefinitionConfig;
+ (id)entryEventNoneDefinitionPairedDeviceConfig;
+ (id)railDefinitions;
+ (id)accountingGroupDefinitions;

- (id)init;
- (void)dealloc;
- (void)log;
- (id)deviceName;
- (id)buildVersion;
- (id)crashReporterKey;
- (id)seedGroup;
- (id)bootArgs;
- (void)initOperatorDependancies;
- (void)pairStatusDidChange:(id)arg1;
- (void)logEventNoneConfig;
- (void)logEventNonePairedDeviceConfig;
- (id)hardwareModelConfig;
- (int)getDeviceType;
- (id)logAndUpdateLastUpgradeTime:(id)arg1;
- (id)logAndUpdateLastBuild:(id)arg1;
- (long long)autolockTime;
- (id)baseband;
- (id)basebandFirmware;
- (_Bool)noWatchdogs;
- (_Bool)disableCABlanking;
- (id)logAutomatedDeviceGroup;
- (id)deviceShutdownReasons;
- (id)hwConfig;
- (id)hwBoardRevision;
- (double)logDeviceDiskSize;
- (id)logLastBackupTime;
- (id)logIcloudAccountType;
- (void)logEntryToAggD:(id)arg1;
- (unsigned long long)getEnclosureMaterial;

@end
