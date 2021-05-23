/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKQuantity, NSDate;

@interface HKElectrocardiogramBuilder : NSObject

{
    struct map<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead, std::__1::less<binarysample::ElectrocardiogramLead_Name>, std::__1::allocator<std::__1::pair<const binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>>> _leads;
    NSDate *_startDate;
    HKQuantity *_frequency;
}

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) HKQuantity *frequency;

- (id).cxx_construct;
- (id)initWithStartDate:(id)arg1 frequency:(id)arg2;
- (void)addValue:(float)arg1 lead:(unsigned long long)arg2;
- (id)finishWithDevice:(id)arg1 metadata:(id)arg2;

@end
