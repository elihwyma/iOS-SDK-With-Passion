/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKTaskConfiguration.h>

@class HKObjectType, NSString, _HKFilter;

@interface HKQueryServerConfiguration : HKTaskConfiguration

{
    _Bool _shouldDeactivateAfterInitialResults;
    _Bool _shouldSuppressDataCollection;
    HKObjectType *_objectType;
    NSString *_debugIdentifier;
    _HKFilter *_filter;
    long long _qualityOfService;
    double _activationTime;
}

@property (copy, nonatomic) HKObjectType *objectType;
@property (copy, nonatomic) NSString *debugIdentifier;
@property (retain, nonatomic) _HKFilter *filter;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) _Bool shouldDeactivateAfterInitialResults;
@property (nonatomic) _Bool shouldSuppressDataCollection;
@property (nonatomic) double activationTime;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
