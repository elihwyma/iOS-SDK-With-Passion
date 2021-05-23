/*
 Image: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
 */

#import <Foundation/NSObject.h>

@interface AXPIFingerUtilities : NSObject

+ (id)defaultLocationsForNumberOfFingers:(unsigned long long)arg1 aroundPoint:(struct CGPoint)arg2 withinBounds:(struct CGRect)arg3;
+ (id)_points:(id)arg1 adjustedForBounds:(struct CGRect)arg2;
+ (id)defaultLocationsForNumberOfFingers:(unsigned long long)arg1 aroundPoint:(struct CGPoint)arg2;
+ (id)defaultPinchLocationsAroundPoint:(struct CGPoint)arg1 withinBounds:(struct CGRect)arg2;
+ (void)updateFirstLocation:(struct CGPoint *)arg1 secondLocation:(struct CGPoint *)arg2 forPinchWithRadiusDelta:(double)arg3 angleDelta:(double)arg4;
+ (id)fingerModelsForPointStrings:(id)arg1;
+ (id)pointStringsForFingerModels:(id)arg1;
+ (unsigned long long)fingerShapeForCorner:(unsigned long long)arg1;

@end
