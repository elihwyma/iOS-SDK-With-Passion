/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKDisplayType, HKUnitPreferenceController;

@interface HKChartAxisDimensionUsingTable : NSObject

{
    struct HKStepSizeTableEntryDefn *_stepSizeTable;
    long long _stepSizeTableSize;
    HKDisplayType *_displayType;
    HKUnitPreferenceController *_unitController;
}

@property (readonly) struct HKStepSizeTableEntryDefn *stepSizeTable;
@property (readonly) long long stepSizeTableSize;
@property (readonly) HKDisplayType *displayType;
@property (readonly) HKUnitPreferenceController *unitController;

- (id)stringForLocation:(id)arg1;
- (double)niceStepSizeLargerThan:(double)arg1;
- (double)ticksPerStepSize:(double)arg1;
- (void)setStepSizeForLabels:(double)arg1;
- (struct HKStepSizeTableEntryDefn *)_findStepSize:(double)arg1 allowEqual:(_Bool)arg2;
- (id)initWithStepSizeTable:(struct HKStepSizeTableEntryDefn *)arg1 stepSizeTableSize:(long long)arg2 displayType:(id)arg3 unitController:(id)arg4;

@end
