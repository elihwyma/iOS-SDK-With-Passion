/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface HDDataCollectorConfiguration : NSObject <Swift>

{
    unsigned long long _collectionType;
    double _collectionInterval;
    double _collectionLatency;
}

@property (nonatomic, readonly) unsigned long long collectionType;
@property (nonatomic, readonly) double collectionInterval;
@property (nonatomic, readonly) double collectionLatency;

+ (id)configurationWithType:(unsigned long long)arg1 interval:(double)arg2 latency:(double)arg3;
+ (id)disabledConfiguration;
+ (id)configurationWithType:(unsigned long long)arg1 aggregatorConfiguration:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mergedConfiguration:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 interval:(double)arg2 latency:(double)arg3;

@end
