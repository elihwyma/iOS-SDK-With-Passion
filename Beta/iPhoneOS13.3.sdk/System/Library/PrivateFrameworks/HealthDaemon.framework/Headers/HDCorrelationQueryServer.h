/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDBatchedQueryServer.h>

@class NSDictionary;

@interface HDCorrelationQueryServer : HDBatchedQueryServer

{
    _Bool _permitPartiallyFilteredCorrelations;
    _Bool _suspended;
    NSDictionary *_dataFilters;
}

@property (nonatomic, readonly) NSDictionary *dataFilters;

+ (id)requiredEntitlements;
+ (Class)queryClass;

- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)_queue_start;

@end
