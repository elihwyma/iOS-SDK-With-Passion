/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/Swift-Protocol.h>

@class HKSample;

@protocol HDSampleIterator <Swift>

@property (nonatomic, readonly) HKSample *sample;
@property (nonatomic, readonly) long long objectID;

@end
