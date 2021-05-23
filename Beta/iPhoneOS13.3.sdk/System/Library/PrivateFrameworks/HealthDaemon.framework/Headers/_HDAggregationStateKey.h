/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HKDevice, NSString;

@interface _HDAggregationStateKey : NSObject <Swift>

{
    NSString *_collectorIdentifier;
    HKDevice *_device;
}

@property (copy, nonatomic, readonly) NSString *collectorIdentifier;
@property (copy, nonatomic, readonly) HKDevice *device;

+ (id)keyForCollector:(id)arg1 device:(id)arg2 aggregator:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
