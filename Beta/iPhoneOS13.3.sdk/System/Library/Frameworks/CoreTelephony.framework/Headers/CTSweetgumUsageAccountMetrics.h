/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString;

@interface CTSweetgumUsageAccountMetrics : NSObject

{
    _Bool _localDevice;
    NSString *_networkUsageLabel;
    long long _deviceType;
    NSString *_subscriptionStatus;
    NSString *_planType;
    NSDate *_billingCycleEndDate;
    NSArray *_applicablePlans;
}

@property (retain, nonatomic) NSString *networkUsageLabel;
@property (nonatomic) long long deviceType;
@property (nonatomic) _Bool localDevice;
@property (retain, nonatomic) NSString *subscriptionStatus;
@property (retain, nonatomic) NSString *planType;
@property (retain, nonatomic) NSDate *billingCycleEndDate;
@property (retain, nonatomic) NSArray *applicablePlans;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
