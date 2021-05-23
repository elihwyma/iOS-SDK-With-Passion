/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface IMPowerWifiUsageCollector : NSObject

{
    _Bool _shouldCollectInternalStats;
}

@property (nonatomic, readonly) _Bool shouldCollectInternalStats;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (_Bool)_isOnPower;
- (void)cutWiFiManagerLinkDidChange:(id)arg1 context:(id)arg2;
- (void)cutPowerMonitorBatteryConnectedStateDidChange:(id)arg1;
- (void)clearConnectedToPowerWifiOver20Hours;
- (_Bool)_isWifiUsable;
- (id)todaysKey;
- (id)createTodaysStatisticDictionaryIfNeeded;
- (id)_getPowerAndWifiDictionaryForKey:(id)arg1;
- (void)reconnectToResourceForTotalDurationKey:(id)arg1 dateKey:(id)arg2 powerWifiDict:(id)arg3;
- (void)disconnectFromResourceForTotalDurationKey:(id)arg1 dateKey:(id)arg2 powerWifiDict:(id)arg3;
- (double)_getExternalTotalDuration;
- (id)_getExternalLastConnectedDate;
- (void)_setExternalTotalDuration:(id)arg1;
- (void)_setExternalLastConnectedDate:(id)arg1;
- (_Bool)_shouldWriteDownPowerWifiChanges;
- (void)_notePowerDidChangeForInternalCollection:(_Bool)arg1 isOnWifi:(_Bool)arg2;
- (void)reconnectedToBothResources_ExternalCollection;
- (void)disconnectedFromAResource_ExternalCollection;
- (void)_noteWifiLinkDidChangeForInternalCollection:(_Bool)arg1 isOnPower:(_Bool)arg2;
- (void)updateConnectedToPowerWifiIntervalIfConnected;
- (_Bool)connectedToPowerAndWifiForOver20Hours;

@end
