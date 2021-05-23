/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/Swift-Protocol.h>

@class NSData, NSDateInterval, NSUUID;

@protocol HDCollectedSensorDatum <Swift>

@property (copy, nonatomic, readonly) NSUUID *datumIdentifier;
@property (copy, nonatomic, readonly) NSDateInterval *dateInterval;
@property (copy, nonatomic, readonly) NSData *resumeContext;

@end
