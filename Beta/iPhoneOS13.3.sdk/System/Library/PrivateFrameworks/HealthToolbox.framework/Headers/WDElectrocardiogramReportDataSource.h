/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <Foundation/NSObject.h>

@class HKElectrocardiogram, HKHealthStore, NSDateComponents, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface WDElectrocardiogramReportDataSource : NSObject

{
    HKElectrocardiogram *_sample;
    UIColor *_tintColor;
    HKHealthStore *_healthStore;
    NSString *_firstName;
    NSString *_lastName;
    NSDateComponents *_dateOfBirthComponents;
}

@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSDateComponents *dateOfBirthComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) HKElectrocardiogram *sample;
@property (nonatomic, readonly) UIColor *tintColor;

- (id)initWithSample:(id)arg1 healthStore:(id)arg2;
- (void)_fetchDemographicInformation;

@end
