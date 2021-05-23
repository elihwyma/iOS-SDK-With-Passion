/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

@class ASDAppUsageStats, NSArray;

@interface ASDAppUsageStore : NSObject

{
    _Bool _verbose;
    ASDAppUsageStats *_leastUsageCount;
    ASDAppUsageStats *_leastUsageTime;
    ASDAppUsageStats *_topUsageCount;
    ASDAppUsageStats *_topUsageTime;
    NSArray *_usageStats;
}

@property (nonatomic, readonly) ASDAppUsageStats *leastUsageCount;
@property (nonatomic, readonly) ASDAppUsageStats *leastUsageTime;
@property (nonatomic, readonly) ASDAppUsageStats *topUsageCount;
@property (nonatomic, readonly) ASDAppUsageStats *topUsageTime;
@property (nonatomic, readonly) NSArray *usageStats;
@property (nonatomic) _Bool verbose;

- (id)_sortDescriptors;
- (void)_calculateUsageForDurationInDays:(double)arg1 bundleIDs:(id)arg2;
- (id)_calculateRawUsageFromDate:(id)arg1 endDate:(id)arg2 stats:(id)arg3;
- (id)_calcluateUsageFromDate:(id)arg1 endDate:(id)arg2 bundleIDs:(id)arg3;
- (id)_calculateUsageFromDate:(id)arg1 endDate:(id)arg2 stats:(id)arg3;
- (id)initWithDurationInDays:(double)arg1 bundleIDs:(id)arg2;
- (id)calcluateUsageFromDate:(id)arg1 endDate:(id)arg2 appMetadata:(id)arg3;
- (id)calcluateUsageFromDate:(id)arg1 endDate:(id)arg2 bundleIDs:(id)arg3;

@end
