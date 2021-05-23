/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@interface HKHealthServiceDiscovery : NSObject

{
    long long _serviceType;
    unsigned long long _discoveryIdentifier;
    CDUnknownBlockType _discoveryHandler;
}

@property (nonatomic) unsigned long long discoveryIdentifier;
@property (copy, nonatomic) CDUnknownBlockType discoveryHandler;
@property (nonatomic, readonly) long long serviceType;

- (id)initWithType:(long long)arg1;
- (id)initForAllTypes;

@end
