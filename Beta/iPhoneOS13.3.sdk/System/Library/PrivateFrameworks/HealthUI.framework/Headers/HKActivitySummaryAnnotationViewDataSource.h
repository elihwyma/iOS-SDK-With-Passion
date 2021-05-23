/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKActivitySummary, HKDisplayTypeController, HKUnitPreferenceController, NSString, _HKWheelchairUseCharacteristicCache;

@interface HKActivitySummaryAnnotationViewDataSource : NSObject

{
    _Bool _currentValueViewContext;
    HKActivitySummary *_activitySummary;
    long long _timeScope;
    HKDisplayTypeController *_displayTypeController;
    HKUnitPreferenceController *_unitController;
    _HKWheelchairUseCharacteristicCache *_wheelchairUseCharacteristicCache;
}

@property (retain, nonatomic) HKDisplayTypeController *displayTypeController;
@property (retain, nonatomic) HKUnitPreferenceController *unitController;
@property (retain, nonatomic) _HKWheelchairUseCharacteristicCache *wheelchairUseCharacteristicCache;
@property (nonatomic) _Bool currentValueViewContext;
@property (retain, nonatomic) HKActivitySummary *activitySummary;
@property (nonatomic) long long timeScope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_bodyColor;
- (id)valueViewForColumnAtIndex:(long long)arg1 orientation:(long long)arg2;
- (long long)numberOfValuesForAnnotationView:(id)arg1;
- (_Bool)showSeparators;
- (id)dateViewWithOrientation:(long long)arg1;
- (id)leftMarginViewWithOrientation:(long long)arg1;
- (id)_dateColumnWithDateComponents:(id)arg1 calendar:(id)arg2 orientation:(long long)arg3;
- (_Bool)_hasRingView;
- (id)_ringColumn;
- (id)_moveColumn;
- (id)_exerciseColumn;
- (id)_standColumn;
- (id)_valueUnitAttributedStringWithValueString:(id)arg1 unitString:(id)arg2;
- (id)_standColumnValueString;
- (id)activityStandTitle;
- (id)_columnViewWithTitle:(id)arg1 titleColor:(id)arg2 body:(id)arg3 bodyColor:(id)arg4 alignment:(long long)arg5;
- (id)_exerciseColumnValueString;
- (id)activityExerciseTitle;
- (id)_energyColumnValueString;
- (id)activityMoveTitle;
- (id)_energyColumn;
- (id)_energyColumnAsNumber;
- (id)_moveColumnValueString;
- (id)_moveColumnAsNumber;
- (id)_valueWithTitle:(id)arg1 attributedValue:(id)arg2 valueAsNumber:(id)arg3;
- (id)_exerciseColumnAsNumber;
- (id)_standColumnAsNumber;
- (id)initWithDisplayTypeController:(id)arg1 unitController:(id)arg2 wheelchairUseCharacteristicCache:(id)arg3 currentValueViewContext:(_Bool)arg4;
- (id)_percentStringWithQuantity:(id)arg1 goalQuantity:(id)arg2;
- (id)descriptionsForActivitySummary;

@end
