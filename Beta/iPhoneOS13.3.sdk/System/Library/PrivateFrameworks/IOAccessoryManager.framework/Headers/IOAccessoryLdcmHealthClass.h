/*
 Image: /System/Library/PrivateFrameworks/IOAccessoryManager.framework/IOAccessoryManager
 */

#import <Foundation/NSObject.h>

@interface IOAccessoryLdcmHealthClass : NSObject

{
    _Bool _isHealthy;
    unsigned int _version;
    unsigned long long _leakagePassedCount;
    unsigned long long _dryCount;
    unsigned long long _wetCount;
    unsigned long long _overVoltageCount;
    unsigned long long _outOfProfileCount;
    unsigned long long _lastSeenTimestamp;
    unsigned long long _rsvd0;
    unsigned long long _rsvd1;
    unsigned long long _rsvd2;
    unsigned long long _rsvd3;
    unsigned long long _overVoltageTimestamp;
}

@property unsigned int version;
@property _Bool isHealthy;
@property unsigned long long leakagePassedCount;
@property unsigned long long dryCount;
@property unsigned long long wetCount;
@property unsigned long long overVoltageCount;
@property unsigned long long outOfProfileCount;
@property unsigned long long lastSeenTimestamp;
@property unsigned long long rsvd0;
@property unsigned long long rsvd1;
@property unsigned long long rsvd2;
@property unsigned long long rsvd3;
@property unsigned long long overVoltageTimestamp;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
