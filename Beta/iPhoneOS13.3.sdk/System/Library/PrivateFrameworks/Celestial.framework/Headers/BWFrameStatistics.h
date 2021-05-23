/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSDictionary, NSString;

@interface BWFrameStatistics : NSObject

{
    NSString *_portType;
    NSDictionary *_aeStatistics;
    CDStruct_252df2d9 *_storage;
}

@property (nonatomic, readonly) NSString *portType;
@property (nonatomic, readonly) unsigned int luxLevel;
@property (nonatomic, readonly) unsigned int conversionGain;
@property (nonatomic, readonly) unsigned int readNoise_1x;
@property (nonatomic, readonly) unsigned int readNoise_8x;
@property (nonatomic, readonly) float normalizedSNR;
@property (nonatomic, readonly) double integrationTime;
@property (nonatomic, readonly) unsigned int agc;
@property (nonatomic, readonly) unsigned int ispDGain;
@property (nonatomic, readonly) unsigned int sensorDGain;
@property (nonatomic, readonly) float ispDGainRangeExpansionFactor;
@property (nonatomic, readonly) float gain;
@property (nonatomic, readonly) float baseISO;
@property (nonatomic, readonly) double exposureBias;
@property (nonatomic, readonly) unsigned int aeAverage;
@property (nonatomic, readonly) unsigned int aeTarget;
@property (nonatomic, readonly) _Bool aeLimitsReached;
@property (nonatomic, readonly) _Bool aeStable;
@property (nonatomic, readonly) _Bool aeLocked;
@property (nonatomic, readonly) int motionFromAEMatrix;
@property (nonatomic, readonly) NSDictionary *aeStatistics;
@property (nonatomic, readonly) _Bool hrEnabled;
@property (nonatomic, readonly) float sifrGain;
@property (nonatomic, readonly) int afStatus;
@property (nonatomic, readonly) _Bool afLocked;
@property (nonatomic, readonly) int afStationaryCount;
@property (nonatomic, readonly) int focusingMethod;
@property (nonatomic, readonly) int focusPosition;
@property (nonatomic, readonly) int logicalFocusLensPosition;
@property (nonatomic, readonly) float focusDistance;
@property (nonatomic, readonly) float lensMakersFocusDistance;
@property (nonatomic, readonly) unsigned int motionDataStatus;
@property (nonatomic, readonly) float motionDataBiasErrorEstimate;
@property (nonatomic, readonly) int ltmCurve;

- (void)dealloc;
- (id)description;
- (id)initWthPortType:(id)arg1 storage:(CDStruct_252df2d9 *)arg2;
- (CDStruct_252df2d9 *)frameStatisticsStorage;
- (void)_setAEStatistics:(id)arg1;

@end
