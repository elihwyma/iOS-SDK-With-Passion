/*
 Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <Foundation/NSObject.h>

@class NSRunLoop, NSString, PCPersistentTimer;

@protocol OS_dispatch_queue, OS_os_log, PCConnectionManagerDelegate, PCGrowthAlgorithm;

@interface PCConnectionManager : NSObject

{
    int _connectionClass;
    id <PCConnectionManagerDelegate> _delegate;
    NSString *_serviceIdentifier;
    NSString *_duetIdentifier;
    int _prefsStyle;
    int _onlyAllowedStyle;
    _Bool _onlyAllowedStyleSet;
    long long _interfaceIdentifier;
    unsigned long long _guidancePriority;
    NSRunLoop *_delegateRunLoop;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_os_log> *_logObject;
    id <PCGrowthAlgorithm> _wwanGrowthAlgorithm[2];
    id <PCGrowthAlgorithm> _wifiGrowthAlgorithm[2];
    id <PCGrowthAlgorithm> _lastScheduledGrowthAlgorithm;
    PCPersistentTimer *_intervalTimer;
    PCPersistentTimer *_reconnectWakeTimer;
    PCPersistentTimer *_delayTimer;
    unsigned int _powerAssertionID;
    double _onTimeKeepAliveTime;
    double _lastResumeTime;
    double _lastStopTime;
    double _lastStartTime;
    double _lastReachableTime;
    double _lastReconnectTime;
    double _lastScheduledIntervalTime;
    double _timerGuidance;
    double _keepAliveGracePeriod;
    double _lastElapsedInterval;
    _Bool _minimumIntervalFallbackEnabled;
    _Bool _operatorMinimumIntervalFallbackAllowed;
    unsigned int _reconnectIteration;
    int _timerGuidanceToken;
    int _pushIsConnectedToken;
    int _prefsChangedToken;
    double _defaultPollingInterval;
    double _pollingIntervalOverride;
    _Bool _pollingIntervalOverrideSet;
    _Bool _hasStarted;
    _Bool _isRunning;
    _Bool _inCallback;
    _Bool _isInReconnectMode;
    _Bool _reconnectWithKeepAliveDelay;
    _Bool _forceManualWhenRoaming;
    _Bool _enableNonCellularConnections;
    _Bool _isReachable;
    _Bool _disableEarlyFire;
    _Bool _alwaysWantsInterfaceChangeCallbacks;
    int _lastProcessedAction;
    _Bool _deviceUnderGoodCondition;
    int _currentGrowthStage;
    id _duetContextRegistration;
    _Bool _powerOptimizationsForExpensiveNetworkingDisabled;
    double _nonCellularEarlyFireConstantInterval;
    int _currentAddressFamily;
}

@property (weak, nonatomic) id <PCConnectionManagerDelegate> delegate;
@property (copy, nonatomic) NSString *duetIdentifier;
@property (nonatomic, readonly) _Bool isRunning;
@property (nonatomic, readonly) double currentKeepAliveInterval;
@property (nonatomic) double minimumKeepAliveInterval;
@property double maximumKeepAliveInterval;
@property (nonatomic) double serverStatsMaxKeepAliveInterval;
@property (nonatomic) double serverStatsExpectedKeepAliveInterval;
@property (nonatomic) double serverStatsMinKeepAliveInterval;
@property (nonatomic) _Bool usingServerStatsAggressively;
@property (nonatomic, readonly) unsigned long long countOfGrowthActions;
@property (nonatomic) _Bool disableEarlyFire;
@property (nonatomic) _Bool minimumIntervalFallbackEnabled;
@property (nonatomic) long long interfaceIdentifier;
@property (nonatomic) _Bool alwaysWantsInterfaceChangeCallbacks;
@property (nonatomic) _Bool powerOptimizationsForExpensiveNetworkingDisabled;
@property (nonatomic) int currentAddressFamily;
@property (nonatomic, readonly) int lastProcessedAction;
@property (nonatomic) double keepAliveGracePeriod;
@property (nonatomic) double nonCellularEarlyFireConstantInterval;
@property (nonatomic, readonly) double pollingInterval;
@property (nonatomic, readonly) int currentGrowthStage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)growthAlgorithmClass;
+ (id)_keepAliveCachePath;
+ (id)intervalCacheDictionaries;
+ (_Bool)_isCachedKeepAliveIntervalStillValid:(double)arg1 date:(id)arg2;

- (void)dealloc;
- (int)currentStyle;
- (void)interfaceManagerInternetReachabilityChanged:(id)arg1;
- (void)interfaceManagerWWANInterfaceStatusChanged:(id)arg1;
- (void)interfaceManagerInHomeCountryStatusChanged:(id)arg1;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (id)_stringForAction:(int)arg1;
- (id)_getCachedWWANKeepAliveIntervalForAddressFamily:(int)arg1;
- (id)_stringForAddressFamily:(int)arg1;
- (void)_setTimerGuidance:(double)arg1;
- (id)persistentInterfaceManager;
- (void)_preferencesChanged;
- (void)_loadPreferencesGeneratingEvent:(_Bool)arg1;
- (id)_initWithConnectionClass:(int)arg1 interfaceIdentifier:(long long)arg2 guidancePriority:(unsigned long long)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 serviceIdentifier:(id)arg6;
- (id)initWithConnectionClass:(int)arg1 interfaceIdentifier:(long long)arg2 guidancePriority:(unsigned long long)arg3 delegate:(id)arg4 serviceIdentifier:(id)arg5;
- (void)_clearTimers;
- (id)_stringForStyle:(int)arg1;
- (void)_setMinimumKeepAliveInterval:(double)arg1 onInterface:(long long)arg2;
- (void)_setMaximumKeepAliveInterval:(double)arg1 onInterface:(long long)arg2;
- (void)setOperatorMinimumIntervalFallbackAllowed:(_Bool)arg1;
- (void)_adjustInterfaceAssertions;
- (void)_registerForDeviceConditionsNotifications;
- (void)_deregisterForDeviceConditionsNotifications;
- (void)_calloutWithEvent:(int)arg1 context:(id)arg2;
- (void)_handleDeviceConditionChangeCallback;
- (void)_processDeviceConditionChanges;
- (void)_setupTimerForPollForAdjustment:(_Bool)arg1;
- (void)_pauseTimers;
- (id)_currentGrowthAlgorithm;
- (void)resumeManagerWithAction:(int)arg1;
- (void)resumeManagerWithAction:(int)arg1 forceGrow:(_Bool)arg2;
- (void)_validateActionForCurrentStyle:(int)arg1;
- (void)_resolveStateWithAction:(int)arg1;
- (void)_setupTimerForPushWithKeepAliveInterval:(double)arg1;
- (void)_saveWWANKeepAliveInterval;
- (void)_setupKeepAliveForReconnect;
- (void)stopManager;
- (id)_growthAlgorithmOnInterface:(long long)arg1;
- (_Bool)_isPushConnected;
- (void)_adjustMinimumIntervalFallback;
- (void)_intervalTimerFired;
- (void)_takePowerAssertionWithTimeout:(double)arg1;
- (_Bool)_hasBudgetRemaining;
- (void)_releasePowerAssertion;
- (void)startManager;
- (void)_delayTimerFired;
- (void)_clearTimersReleasingPowerAssertion:(_Bool)arg1;
- (id)_stringForEvent:(int)arg1;
- (void)_callDelegateWithEventAndContext:(id)arg1;
- (void)_adjustPollTimerIfNecessary;
- (void)carrierBundleDidChange;
- (id)initWithConnectionClass:(int)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 serviceIdentifier:(id)arg4;
- (id)initWithConnectionClass:(int)arg1 delegate:(id)arg2 serviceIdentifier:(id)arg3;
- (void)setOnlyAllowedStyle:(int)arg1;
- (void)stopAndResetManager;
- (void)setKeepAliveOverrideOnInterface:(long long)arg1 interval:(double)arg2 timeout:(double)arg3;
- (void)setPollingIntervalOverride:(double)arg1;
- (void)cancelPollingIntervalOverride;
- (_Bool)shouldClientScheduleReconnectDueToFailure;
- (void)setEnableNonCellularConnections:(_Bool)arg1;
- (_Bool)operatorMinimumIntervalFallbackAllowed;

@end
