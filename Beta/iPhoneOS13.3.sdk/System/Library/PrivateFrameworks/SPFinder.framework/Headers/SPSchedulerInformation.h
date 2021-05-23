/*
 Image: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
 */

#import <Foundation/NSObject.h>

@interface SPSchedulerInformation : NSObject

{
    long long _advertisementCount;
    long long _priorityCount;
    long long _lowBatteryCount;
}

@property (nonatomic) long long advertisementCount;
@property (nonatomic) long long priorityCount;
@property (nonatomic) long long lowBatteryCount;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
