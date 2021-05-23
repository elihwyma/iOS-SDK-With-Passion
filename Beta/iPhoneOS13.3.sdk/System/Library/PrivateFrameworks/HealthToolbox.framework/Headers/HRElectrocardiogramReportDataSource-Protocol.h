/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthToolbox/Swift-Protocol.h>

@class HKElectrocardiogram, NSDateComponents, NSString, UIColor;

@protocol HRElectrocardiogramReportDataSource <Swift>

@property (nonatomic, readonly) HKElectrocardiogram *sample;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSDateComponents *dateOfBirthComponents;
@property (nonatomic, readonly) UIColor *tintColor;

@end
