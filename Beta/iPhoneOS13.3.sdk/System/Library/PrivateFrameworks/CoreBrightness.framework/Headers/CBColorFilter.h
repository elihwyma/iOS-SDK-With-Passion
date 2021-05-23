/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <CoreBrightness/CBModule.h>

@class CBColorSample, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CBColorFilter : CBModule

{
    NSMutableArray *_services;
    NSMutableArray *_validServices;
    unsigned long long _sensorPolicy;
    unsigned long long _mode;
    CBColorSample *_sample;
}

@property (nonatomic) unsigned long long sensorPolicy;
@property (nonatomic) unsigned long long mode;
@property (readonly) CBColorSample *sample;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)calculateCCTForChromaticity:(CDStruct_34734122)arg1;
+ (double)calculateCCTForTristimulus:(CDStruct_6f955ef8)arg1;
+ (CDStruct_6f955ef8)calculateTristimulusForChromaticity:(CDStruct_34734122)arg1 andLux:(double)arg2;

- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (void)registerNotificationBlock:(CDUnknownBlockType)arg1;
- (void)unregisterNotificationBlock;
- (void)sendNotificationForKey:(id)arg1 withValue:(id)arg2;
- (_Bool)forceSampleUpdate;
- (_Bool)handleHIDEvent:(struct __IOHIDEvent *)arg1 from:(struct __IOHIDServiceClient *)arg2;
- (_Bool)addHIDServiceClient:(struct __IOHIDServiceClient *)arg1;
- (_Bool)removeHIDServiceClient:(struct __IOHIDServiceClient *)arg1;
- (void)updateSample;
- (void)updateValidServices;
- (_Bool)hasExtRearSensor;
- (_Bool)hasExtFrontSensor;
- (id)newColorSampleLinearWeightedForServices:(id)arg1;
- (id)newColorSampleLinearWeightedForSamples:(id)arg1;
- (id)newColorSampleLogWeightedForSamples:(id)arg1;
- (unsigned long long)evaluatedFilterMode;
- (id)newColorSampleLogWeighted;
- (id)newColorSampleWinnerTakesAll;
- (id)newColorSampleConditionWeighted;
- (void)reportSampleUpdate;
- (_Bool)ALSServiceConformsToPolicy:(id)arg1;

@end
