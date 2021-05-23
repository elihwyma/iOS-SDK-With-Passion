/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/_HKStringFilter.h>

@class NSString;

@interface _HKFHIRResourceIdentifierFilter : _HKStringFilter

@property (copy, nonatomic, readonly) NSString *identifier;

+ (id)_acceptedKeyPath;
+ (_Bool)_acceptsDataType:(id)arg1;

@end
