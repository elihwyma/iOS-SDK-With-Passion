/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HKNaturalScaleDistanceMeasurementFormatter : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)stringFromNumber:(id)arg1 displayType:(id)arg2 unitController:(id)arg3;
- (_Bool)returnsUnitWithValueForDisplay;
- (long long)_precisionWithDisplayType:(id)arg1 unit:(id)arg2 andNumber:(double)arg3;
- (void)adjustedFormatInformationForUnit:(id)arg1 number:(id)arg2 displayType:(id)arg3 handler:(CDUnknownBlockType)arg4;

@end
