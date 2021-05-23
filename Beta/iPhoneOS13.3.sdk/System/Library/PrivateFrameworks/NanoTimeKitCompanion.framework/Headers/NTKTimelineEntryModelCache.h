/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableArray;

@protocol NTKTimelineEntryModelCacheDataSource;

@interface NTKTimelineEntryModelCache : NSObject

{
    NSMutableArray *_cachedEntryModels;
    NSDate *_cacheStartDate;
    NSDate *_cacheEndDate;
    id <NTKTimelineEntryModelCacheDataSource> _dataSource;
}

@property (nonatomic, readonly) NSDate *cacheStartDate;
@property (nonatomic, readonly) NSDate *cacheEndDate;
@property (weak, nonatomic) id <NTKTimelineEntryModelCacheDataSource> dataSource;

+ (id)_startOfDayBeforeDate:(id)arg1;
+ (id)_startOfDayAfterDate:(id)arg1;
+ (id)_startOfDayForDate:(id)arg1;
+ (id)_endOfDayForDate:(id)arg1;

- (id)init;
- (void)invalidate;
- (id)calendar;
- (id)_cachedEntryModelForDate:(id)arg1;
- (void)_extendCacheTowardDate:(id)arg1;
- (id)_cachedEntryModelBeforeDate:(id)arg1 limit:(unsigned long long)arg2;
- (id)_cachedEntryModelAfterDate:(id)arg1 limit:(unsigned long long)arg2;
- (_Bool)hasEntryModelForDate:(id)arg1;
- (id)entryModelForDate:(id)arg1;
- (id)entryModelsBeforeDate:(id)arg1 limit:(unsigned long long)arg2;
- (id)entryModelsAfterDate:(id)arg1 limit:(unsigned long long)arg2;

@end
