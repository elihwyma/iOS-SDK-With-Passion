/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol FIUIChartDataGroupDataSource;

@interface FIUIChartDataGroup : NSObject

{
    id <FIUIChartDataGroupDataSource> _dataSource;
    NSArray *_dataSets;
}

@property (retain, nonatomic) NSArray *dataSets;
@property (weak, nonatomic) id <FIUIChartDataGroupDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)reloadData;
- (id)dataSetAtIndex:(unsigned long long)arg1;
- (id)minYValue;
- (id)maxYValue;
- (unsigned long long)numberOfDataPointsForDataSet:(id)arg1;
- (id)dataSet:(id)arg1 chartPointForIndex:(unsigned long long)arg2;
- (id)labelsForSet:(id)arg1;
- (id)maxXValue;
- (id)minXValue;
- (unsigned long long)_numberOfDataSets;
- (id)_dataSetAtIndexCreateIfNecessary:(unsigned long long)arg1;
- (unsigned long long)_numberOfDataPointsInSetAtIndex:(unsigned long long)arg1;
- (id)_pointForSetAtIndex:(unsigned long long)arg1 pointIndex:(unsigned long long)arg2;
- (id)_labelsForSetAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfDataSets;

@end
