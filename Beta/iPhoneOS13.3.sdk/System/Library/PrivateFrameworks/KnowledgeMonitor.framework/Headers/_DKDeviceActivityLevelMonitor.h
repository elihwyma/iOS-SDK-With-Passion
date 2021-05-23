/*
 Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

#import <KnowledgeMonitor/_DKMonitor.h>

@class NSDate, NSObject, _CDContextualKeyPath;

@protocol OS_dispatch_source, _CDLocalContext;

@interface _DKDeviceActivityLevelMonitor : _DKMonitor

{
    _Bool _enabled;
    _Bool _initialized;
    _Bool _limitsImposed;
    _Bool _limitsInitialized;
    int _siriToken;
    unsigned long long _lastInUseStatus;
    unsigned long long _currentInUseStatus;
    NSDate *_lastSetActiveDate;
    id <_CDLocalContext> _context;
    _CDContextualKeyPath *_lastUseDate;
    _CDContextualKeyPath *_inUseStatus;
    NSObject<OS_dispatch_source> *_debounceTimer;
    unsigned long long _userActivityNotificationHandle;
    _CDContextualKeyPath *_keyPathForReducedPerfStateStatus;
    _CDContextualKeyPath *_keyPathForDeviceToppingOff;
}

@property (nonatomic) _Bool enabled;
@property (nonatomic) _Bool initialized;
@property (nonatomic) unsigned long long lastInUseStatus;
@property (nonatomic) unsigned long long currentInUseStatus;
@property (retain, nonatomic) NSDate *lastSetActiveDate;
@property (retain, nonatomic) id <_CDLocalContext> context;
@property (retain, nonatomic) _CDContextualKeyPath *lastUseDate;
@property (retain, nonatomic) _CDContextualKeyPath *inUseStatus;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *debounceTimer;
@property (nonatomic) unsigned long long userActivityNotificationHandle;
@property (nonatomic) int siriToken;
@property (nonatomic) _Bool limitsImposed;
@property (nonatomic) _Bool limitsInitialized;
@property (retain, nonatomic) _CDContextualKeyPath *keyPathForReducedPerfStateStatus;
@property (retain, nonatomic) _CDContextualKeyPath *keyPathForDeviceToppingOff;

+ (void)initialize;
+ (id)entitlements;
+ (id)eventStream;
+ (id)_eventWithState:(unsigned long long)arg1;
+ (_Bool)shouldMergeUnchangedEvents;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void)synchronouslyReflectCurrentValue;
- (void)deactivate;
- (void)handleUserActivity:(int)arg1;
- (void)updatePerformanceThrottleStatusWithLevel:(unsigned long long)arg1;
- (void)updateActivityDateAndInUseState:(unsigned long long)arg1;
- (void)setLastActivityDate:(id)arg1;
- (void)updateActivityInUseState:(unsigned long long)arg1;

@end
