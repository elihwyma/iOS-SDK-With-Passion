/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKDateGraphViewController.h>

@class HKValueRange, NSMutableArray;

@interface _HKStaticDateGraphViewController : HKDateGraphViewController

{
    NSMutableArray *_allStackedSeries;
    HKValueRange *_fixedRange;
}

@property (retain, nonatomic) NSMutableArray *allStackedSeries;
@property (nonatomic, readonly) HKValueRange *fixedRange;

- (void)viewDidLoad;
- (long long)stackCountForGraphView:(id)arg1;
- (id)graphView:(id)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3;
- (void)graphView:(id)arg1 didUpdateSeries:(id)arg2 newDataArrived:(_Bool)arg3;
- (id)initWithFixedRange:(id)arg1;
- (void)addStackedSeries:(id)arg1;

@end
