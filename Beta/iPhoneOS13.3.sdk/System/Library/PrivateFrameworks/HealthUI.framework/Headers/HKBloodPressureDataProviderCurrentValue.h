/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKQuantity, NSDate, NSString;

@interface HKBloodPressureDataProviderCurrentValue : NSObject

{
    NSDate *_date;
    HKQuantity *_systolicValue;
    HKQuantity *_diastolicValue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)date;
- (id)attributedStringWithDisplayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 dateCache:(id)arg5;
- (id)lastUpdatedDescriptionWithDateCache:(id)arg1;
- (id)initWithCorrelation:(id)arg1;
- (id)_quantityForType:(id)arg1 correlation:(id)arg2;
- (id)initWithSystolicValue:(id)arg1 diastolicValue:(id)arg2 date:(id)arg3;

@end
