/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol FIUIChartDataSetDataSource;

@interface FIUIChartDataSet : NSObject

{
    NSArray *_points;
    NSArray *_labels;
    id <FIUIChartDataSetDataSource> _dataSource;
    long long _tag;
}

@property (weak, nonatomic) id <FIUIChartDataSetDataSource> dataSource;
@property (nonatomic) long long tag;

- (id)description;
- (id)points;
- (void)reloadData;
- (id)minYValue;
- (id)maxYValue;
- (id)maxXValue;
- (id)minXValue;
- (id)labelsForSet;

@end
