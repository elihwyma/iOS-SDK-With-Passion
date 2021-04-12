//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSDate;

#ifndef CLKCComplicationDataSourceDelegate_Protocol
#define CLKCComplicationDataSourceDelegate_Protocol

@protocol CLKCComplicationDataSourceDelegate <NSObject>
- (void)invalidateSwitcherTemplate;
- (double)minimumIntervalBetweenTimelineEntries;
- (void)appendEntries:(NSArray *)arg1 withTritiumUpdatePriority:(long long)arg2;
- (void)appendEntries:(NSArray *)arg1;
- (void)setTimelineEndDate:(NSDate *)arg1;
- (void)setTimelineStartDate:(NSDate *)arg1;
- (void)invalidateEntriesWithTritiumUpdatePriority:(long long)arg1;
- (void)invalidateEntries;
@end

#endif

