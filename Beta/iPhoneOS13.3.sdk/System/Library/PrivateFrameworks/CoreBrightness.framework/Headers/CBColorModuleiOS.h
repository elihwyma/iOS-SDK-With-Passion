/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <CoreBrightness/CBContainer.h>

@class CBColorFilter, NSMutableArray, NSMutableDictionary, NSObject, NSString;

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CBColorModuleiOS : CBContainer

{
    NSMutableArray *_relevantServices;
    NSObject<OS_dispatch_source> *_rampTimer;
    NSMutableDictionary *_properties;
    struct {
        struct ColorEffects *cfx;
        _Bool blueReductionEnabled;
        _Bool blueReductionFactor;
        _Bool nightModeSupported;
        _Bool fadeInProgress;
        _Bool enforceSlowRamps;
        float brightnessBoost;
        _Bool whitePointEnabled;
        double enablementTs;
        _Bool forceSnapping;
        float currentChromaticitySensitivity;
        _Bool harmonySupported;
        _Bool harmonyEnabled;
        _Bool harmonyActive;
        _Bool harmonyAvailable;
        float harmonyStrength;
        float harmonyFixedStrength;
    } _colorStruct;
    _Bool _fadeInProgress;
    _Bool _endRamp;
    struct {
        unsigned char firstTimerFire;
        NSObject<OS_dispatch_source> *logTimer;
        int periodS;
    } _reportContext;
    _Bool _displayOn;
    unsigned int _backlightService;
    NSMutableArray *_alsServices;
    NSMutableDictionary *_alsNodes;
    NSMutableArray *_filters;
    int _NSamples;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    _Bool _firstALSEventArrived;
    float _firstSampleTimeoutValue;
    _Bool _allALSEventsArrived;
    _Bool _forceColorUpdate;
    _Bool _potentiallyBustedALS;
    _Bool _continueWithFewerALSs;
    _Bool _sensorOverridden;
    CDStruct_6cdf1869 _overrideColorSample;
    float _preStrobeDimPeriod;
    _Bool _dropALSColorSamples;
    CBColorFilter *_colorFilter;
    int _registeredColorALSCount;
    _Bool _aggregatedConfigApplied;
    _Bool _colorEffectsEnabled;
    _Bool _ammoliteEnabledStatus;
    unsigned long long _moduleType;
}

@property (readonly) unsigned long long moduleType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)stop;
- (_Bool)start;
- (void)updateAvailability;
- (id)copyPropertyForKey:(id)arg1;
- (void)setNightShiftFactorDictionary:(id)arg1;
- (id)copyPreferenceForKey:(id)arg1 user:(id)arg2;
- (void)setPreference:(id)arg1 forKey:(id)arg2 user:(id)arg3;
- (void)handleALSEvent:(id)arg1;
- (void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2;
- (void)sendNotificationForKey:(id)arg1 andValue:(id)arg2;
- (_Bool)displayBrightnessFactorPropertyHandler:(id)arg1;
- (void)initColorStruct;
- (void)reportInitialize;
- (void)filterInitialize;
- (void)loadBacklightProperties;
- (_Bool)convertNSData:(id)arg1 toUint32:(unsigned int *)arg2;
- (void)displayBrightnessFactorUpdate:(float)arg1;
- (void)processColorSample:(id)arg1 forceUpdate:(_Bool)arg2;
- (void)armFirstALSSampleTimer;
- (void)cancelFirstSampleTimeout;
- (void)reportCommitWithStop:(_Bool)arg1;
- (void)BLRFactorUpdate:(float)arg1;
- (void)BLRFactorUpdate:(float)arg1 withPeriod:(float)arg2 shouldForceUpdate:(_Bool)arg3;
- (void)setPreferences:(id)arg1 forKey:(id)arg2;
- (void)updateActivity;
- (void)CAStrengthUpdate:(float)arg1 withPeriod:(float)arg2;
- (_Bool)parseAdaptationModeMappingDictionary:(id)arg1 strengths:(float *)arg2 strengthNum:(int)arg3;
- (id)newAdaptationModeMappingDictionary:(float *)arg1 strengthNum:(int)arg2;
- (id)newAdaptationModeMappingArray:(float *)arg1 strengthNum:(int)arg2;
- (_Bool)BLRFactorPropertyHandler:(id)arg1;
- (_Bool)BLRCCTTargetPropertyHandler:(id)arg1;
- (_Bool)BLRCCTRangePropertyHandler:(id)arg1;
- (_Bool)CALabShiftPropertyHandler:(id)arg1;
- (_Bool)CAEnabledPropertyHandler:(id)arg1;
- (_Bool)CAStrengthPropertyHandler:(id)arg1;
- (_Bool)CAFixedStrengthPropertyHandler:(id)arg1;
- (_Bool)CAWeakestColorAdaptationModePropertyHandler:(id)arg1;
- (_Bool)CAWeakestColorAdaptationModeAnimatedPropertyHandler:(id)arg1;
- (_Bool)CAModeMappingHandler:(id)arg1;
- (_Bool)CAStrengthRampPeriodTweakPropertyHandler:(id)arg1;
- (_Bool)CAFadesEnabledHandler:(id)arg1;
- (_Bool)CoreBrightnessFeaturesDisabledPropertyHandler:(id)arg1;
- (_Bool)CAAABSensorOverridePropertyHandler:(id)arg1;
- (_Bool)preStrobePropertyHandler:(id)arg1;
- (_Bool)preStrobeDimPeriodPropertyHandler:(id)arg1;
- (_Bool)ammolitePropertyHandler:(id)arg1 key:(id)arg2;
- (_Bool)colorFilterModeHandler:(id)arg1;
- (_Bool)serializedAggregatedConfigPropertyHandler:(id)arg1;
- (_Bool)applyAggregatedConfigPropertyHandler:(id)arg1;
- (_Bool)carryLogEnabledHandler:(id)arg1;
- (_Bool)carryLogCommentHandler:(id)arg1;
- (_Bool)carryLogCommitHandler:(id)arg1;
- (_Bool)colorRampPeriodOverrideHandler:(id)arg1;
- (void)inputAmbientColorSample:(CDStruct_6cdf1869 *)arg1 force:(_Bool)arg2 trust:(_Bool)arg3;
- (_Bool)handleHIDEvent:(struct __IOHIDEvent *)arg1 from:(struct __IOHIDServiceClient *)arg2;
- (void)handleHIDEventInternal:(struct __IOHIDEvent *)arg1 from:(struct __IOHIDServiceClient *)arg2;
- (id)getRegistryIDForHIDServiceClient:(struct __IOHIDServiceClient *)arg1;
- (void)handleFilterNotificationForKey:(id)arg1 withProperty:(id)arg2;
- (void)activateColorAdaptation;
- (_Bool)addHIDServiceClient:(struct __IOHIDServiceClient *)arg1;
- (_Bool)removeHIDServiceClient:(struct __IOHIDServiceClient *)arg1;
- (id)copyPropertyInternalForKey:(id)arg1;
- (_Bool)setPropertyInternal:(id)arg1 forKey:(id)arg2;
- (void)handleDisplayBrightnessFactorZero:(id)arg1;
- (_Bool)startNewTimerWithFreq:(float)arg1;
- (id)copyPreferencesForKey:(id)arg1;
- (_Bool)parseAdaptationModeMappingArray:(id)arg1 strengths:(float *)arg2 strengthNum:(int)arg3;
- (void)timerRoutine:(id)arg1;
- (void)reportResetTimerWithStop:(_Bool)arg1;
- (void)reportToAggd:(CDStruct_97eeab40 *)arg1;
- (void)commitPowerLogReport:(CDStruct_97eeab40 *)arg1;
- (id)newArrayFromDoubles:(double *)arg1 size:(int)arg2;
- (id)newArrayFromIntegers:(int *)arg1 size:(int)arg2;
- (void)firstALSSampleTimeout;
- (id)newAggregatedConfigFromSerializedConfig:(id)arg1;
- (void)applyAggregatedConfig:(_Bool)arg1;
- (id)copyLocalAggregatedConfig;
- (id)copyIdentifiers;
- (id)initWithBacklight:(unsigned int)arg1 andModuleType:(unsigned long long)arg2;
- (void)debugPrintColorSampleAsRGB:(id)arg1;
- (int)getVid:(struct __IOHIDServiceClient *)arg1;
- (int)getPid:(struct __IOHIDServiceClient *)arg1;
- (void)colorRampRoutine:(const CDStruct_c693ffc9 *)arg1;

@end
