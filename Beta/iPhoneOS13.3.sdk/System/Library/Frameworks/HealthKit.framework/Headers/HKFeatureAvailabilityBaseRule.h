/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@protocol HKFeatureAvailabilityDataSource;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityBaseRule : NSObject

{
    id <HKFeatureAvailabilityDataSource> _dataSource;
}

@property (weak, nonatomic) id <HKFeatureAvailabilityDataSource> dataSource;

+ (Class)ruleClassForRawValue:(id)arg1;

- (_Bool)evaluate;
- (id)initWithRawValue:(id)arg1 dataSource:(id)arg2;
- (void)processUserInfo:(id)arg1;

@end
