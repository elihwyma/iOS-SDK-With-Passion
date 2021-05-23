/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CTSweetgumUsagePlanItemData : NSObject

{
    long long _units;
    NSString *_capacity;
    NSString *_maxDataBeforeThrottling;
    NSString *_thisDeviceDataUsed;
    NSString *_sharedDataUsed;
    NSString *_sharedPlanIdentifier;
}

@property (nonatomic) long long units;
@property (retain, nonatomic) NSString *capacity;
@property (retain, nonatomic) NSString *maxDataBeforeThrottling;
@property (retain, nonatomic) NSString *thisDeviceDataUsed;
@property (retain, nonatomic) NSString *sharedDataUsed;
@property (retain, nonatomic) NSString *sharedPlanIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
