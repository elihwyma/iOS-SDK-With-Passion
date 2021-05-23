/*
 Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

#import <KnowledgeMonitor/_DKMonitor.h>

@class NSDictionary;

@interface _DKBatteryMonitor : _DKMonitor

{
    unsigned int _powerService;
    unsigned int _batteryNotification;
    struct IONotificationPort *_notifyPort;
    _Bool _hasInternalBattery;
    _Bool _previouslyFullyCharged;
    int _immediateShutdownThreshold;
    NSDictionary *_previousBatteryState;
    double _previousPercentage;
}

@property (nonatomic) int immediateShutdownThreshold;
@property (nonatomic) _Bool hasInternalBattery;
@property (retain, nonatomic) NSDictionary *previousBatteryState;
@property (nonatomic) double previousPercentage;
@property (nonatomic) _Bool previouslyFullyCharged;

+ (id)entitlements;
+ (id)eventStream;
+ (void)setCurrentBatteryPercentage:(double)arg1;
+ (id)_eventWithBatteryPercentage:(double)arg1 isFullyCharged:(_Bool)arg2;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void)synchronouslyReflectCurrentValue;
- (void)deactivate;
- (id)getBatteryProperties;
- (double)batteryPercentageFromPowerSourceDictionary:(id)arg1;
- (_Bool)fullyChargedFromPowerSourceDictionary:(id)arg1;
- (_Bool)newBatteryState:(id)arg1 differsSignificantlyFromState:(id)arg2;
- (void)updateBatteryStateDictionary:(id)arg1;
- (void)postImminentShutdownNotification:(double)arg1;
- (_Bool)percentage:(id)arg1 differsFrom:(id)arg2;
- (_Bool)temperature:(id)arg1 differsFrom:(id)arg2;
- (_Bool)voltage:(id)arg1 differsFrom:(id)arg2;
- (_Bool)fullyCharged:(id)arg1 differsFrom:(id)arg2;
- (_Bool)isCharging:(id)arg1 differsFrom:(id)arg2;
- (_Bool)externalConnected:(id)arg1 differsFrom:(id)arg2;
- (_Bool)adapterType:(id)arg1 differsFrom:(id)arg2;
- (void)_handleBatteryNotification;
- (double)currentBatteryPercentage;

@end
