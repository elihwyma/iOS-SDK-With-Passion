/*
 Image: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface CTCarrierSpaceDataPlanMetricsItem : NSObject

{
    _Bool _capacityValid;
    NSNumber *_capacityBytes;
    long long _units;
    unsigned long long _capacity;
}

@property (retain, nonatomic) NSNumber *capacityBytes;
@property (nonatomic) _Bool capacityValid;
@property (nonatomic) long long units;
@property (nonatomic) unsigned long long capacity;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
