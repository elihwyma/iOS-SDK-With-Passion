/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDBatchedQueryServer.h>

@class NSArray;

@interface HDSampleQueryServer : HDBatchedQueryServer

{
    _Bool _suspended;
    _Bool _includeAutomaticTimeZones;
    unsigned long long _limit;
    NSArray *_sortDescriptors;
}

@property (nonatomic, readonly) unsigned long long limit;
@property (copy, nonatomic, readonly) NSArray *sortDescriptors;
@property (nonatomic, readonly) _Bool includeAutomaticTimeZones;

+ (id)requiredEntitlements;
+ (Class)queryClass;
+ (_Bool)supportsAnchorBasedAuthorization;

- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)_queue_start;
- (_Bool)validateConfiguration:(id *)arg1;

@end
