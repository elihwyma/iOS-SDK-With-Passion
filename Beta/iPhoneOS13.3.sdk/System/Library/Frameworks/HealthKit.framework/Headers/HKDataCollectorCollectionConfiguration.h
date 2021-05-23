/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@interface HKDataCollectorCollectionConfiguration : NSObject <Swift>

{
    double _collectionInterval;
    double _maxUnsentDatumAge;
}

@property (nonatomic) double collectionInterval;
@property (nonatomic) double maxUnsentDatumAge;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionInterval:(double)arg1 maxUnsentDatumAge:(double)arg2;

@end
