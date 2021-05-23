/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKQuantity, NSDate, NSString;

@interface HKGenericQuantityDataProviderCurrentValue : NSObject

{
    HKQuantity *_quantity;
    NSDate *_date;
}

@property (retain, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)attributedStringWithDisplayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 dateCache:(id)arg5;
- (id)lastUpdatedDescriptionWithDateCache:(id)arg1;
- (id)initWithQuantity:(id)arg1;
- (id)stringWithDisplayType:(id)arg1 unitController:(id)arg2;

@end
