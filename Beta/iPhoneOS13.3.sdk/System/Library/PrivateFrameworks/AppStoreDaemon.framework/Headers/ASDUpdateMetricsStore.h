/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSLock;

@interface ASDUpdateMetricsStore : NSObject

{
    NSLock *_lock;
    double _averagePollTime;
    NSArray *_metrics;
    NSDate *_lastAutoPollDate;
}

@property (nonatomic, readonly) double averagePollTime;
@property (nonatomic, readonly) NSArray *metrics;
@property (nonatomic, readonly) NSDate *lastAutoPollDate;

+ (id)_updateMetrics;
+ (void)_setUpdateMetrics:(id)arg1;

- (id)init;
- (void)synchronize;
- (void)_load;
- (id)_serialableData;
- (void)addPoll:(id)arg1;

@end
