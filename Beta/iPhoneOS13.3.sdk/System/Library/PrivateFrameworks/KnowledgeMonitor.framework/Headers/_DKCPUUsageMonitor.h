/*
 Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

#import <KnowledgeMonitor/_DKMonitor.h>

@class NSObject;

@protocol OS_dispatch_source;

@interface _DKCPUUsageMonitor : _DKMonitor

{
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _lastUserTick;
    unsigned long long _lastIdleTick;
    unsigned long long _lastSysTick;
    unsigned long long _lastCPUUsageLevel;
}

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) unsigned long long lastUserTick;
@property (nonatomic) unsigned long long lastIdleTick;
@property (nonatomic) unsigned long long lastSysTick;
@property (nonatomic) unsigned long long lastCPUUsageLevel;

+ (id)entitlements;
+ (id)eventStream;

- (void)stop;
- (void)start;
- (void)synchronouslyReflectCurrentValue;
- (id)loadState;
- (void)saveState;
- (void)getCPUTicksForUser:(unsigned long long *)arg1 system:(unsigned long long *)arg2 idle:(unsigned long long *)arg3;
- (unsigned long long)getCurrentCPUUsageLevel;
- (void)setCurrentCPUUsageLevel:(unsigned long long)arg1;
- (_Bool)updateCPUUsagePercentage:(unsigned long long *)arg1;
- (unsigned long long)getCPUUsageLevelFromPercentage:(unsigned long long)arg1;

@end
