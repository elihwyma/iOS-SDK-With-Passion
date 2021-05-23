/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@interface NTKSolarRichComplicatonCircularPath : NSObject

+ (id)_cachedSolarPathForDiameter:(double)arg1 horizonLineTop:(double)arg2 horizonLineHeight:(double)arg3 maxCurveHeight:(double)arg4 solarTimeModel:(id)arg5 sunriseWaypoint:(id)arg6 sunsetWayPoint:(id)arg7 cacheMissBlock:(CDUnknownBlockType)arg8;
+ (id)_cachedSolarPathKeyForDiameter:(double)arg1 horizonLineTop:(double)arg2 horizonLineHeight:(double)arg3 maxCurveHeight:(double)arg4 solarTimeModel:(id)arg5 sunriseWaypoint:(id)arg6 sunsetWayPoint:(id)arg7;
+ (id)_solarPathCache;
+ (id)pathWithDiameter:(double)arg1 horizonLineTop:(double)arg2 horizonLineHeight:(double)arg3 maxCurveHeight:(double)arg4 solarTimeModel:(id)arg5 sunriseWaypoint:(id)arg6 sunsetWayPoint:(id)arg7;

@end
