/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/_HKStringFilter.h>

@class NSString;

@interface _HKFHIRResourceResourceTypeFilter : _HKStringFilter

@property (copy, nonatomic, readonly) NSString *resourceType;

+ (id)_acceptedKeyPath;
+ (_Bool)_acceptsDataType:(id)arg1;

@end
