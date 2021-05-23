/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthKit/HKHeartbeatSeriesSample.h>

@interface HKHeartbeatSeriesSample (HDCodingSupport)

+ (Class)hd_dataEntityClass;

- (id)codableRepresentationForSync;

@end
