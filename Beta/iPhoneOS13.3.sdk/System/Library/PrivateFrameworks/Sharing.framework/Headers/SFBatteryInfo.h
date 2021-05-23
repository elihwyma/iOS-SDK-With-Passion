/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@interface SFBatteryInfo : NSObject

{
    double _batteryLevel;
    long long _batteryState;
    long long _batteryType;
}

@property (nonatomic) double batteryLevel;
@property (nonatomic) long long batteryState;
@property (nonatomic) long long batteryType;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
