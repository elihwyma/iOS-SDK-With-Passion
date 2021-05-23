/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQueryServerConfiguration.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _HKDocumentQueryServerConfiguration : HKQueryServerConfiguration

{
    _Bool _includeDocumentData;
    NSArray *_sortDescriptors;
    unsigned long long _limit;
}

@property (copy, nonatomic) NSArray *sortDescriptors;
@property (nonatomic) unsigned long long limit;
@property (nonatomic) _Bool includeDocumentData;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
