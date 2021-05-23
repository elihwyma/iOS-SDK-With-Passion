/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@interface NTKNumeralsAnalogElementsPlacement : NSObject

+ (double)edgeVerticalAdjustmentDistanceForDevice:(id)arg1;
+ (id)_elementsPositionsForHour:(long long)arg1 forDevice:(id)arg2;
+ (struct CGPoint)hourViewPositionForHour:(long long)arg1 complicationHidden:(_Bool)arg2 utilitySlot:(long long)arg3 forDevice:(id)arg4;
+ (struct CGPoint)centerPointFor10NumeralInImageForStyle:(unsigned long long)arg1 forDevice:(id)arg2;
+ (long long)complicationPlacementForHour:(long long)arg1 forDevice:(id)arg2;

@end
