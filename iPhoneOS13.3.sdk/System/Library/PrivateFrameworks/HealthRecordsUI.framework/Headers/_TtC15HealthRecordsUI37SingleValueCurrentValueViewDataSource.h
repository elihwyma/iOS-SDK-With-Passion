//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKCurrentValueViewDataSource.h>

@class MISSING_TYPE;

@interface _TtC15HealthRecordsUI37SingleValueCurrentValueViewDataSource : HKCurrentValueViewDataSource
{
    MISSING_TYPE *lastCachedNumberOfChartPoints;
}

- (id)init;
- (id)initWithDateCache:(id)arg1 displayCategoryController:(id)arg2 healthStore:(id)arg3 selectedRangeFormatter:(id)arg4;
- (void)updateDataSourceWithGraphView:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3;
- (id)attributedTitleStringForCurrentValueView:(id)arg1;

@end

