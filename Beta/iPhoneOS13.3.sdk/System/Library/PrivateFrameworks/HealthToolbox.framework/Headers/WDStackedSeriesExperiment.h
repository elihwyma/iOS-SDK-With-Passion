/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKDateGraphViewController.h>

@class NSArray, WDProfile;

__attribute__((visibility("hidden")))
@interface WDStackedSeriesExperiment : HKDateGraphViewController

{
    WDProfile *_profile;
    NSArray *_series;
}

@property (nonatomic, readonly) WDProfile *profile;
@property (retain, nonatomic) NSArray *series;

- (id)initWithProfile:(id)arg1;
- (void)viewDidLoad;
- (long long)stackCountForGraphView:(id)arg1;
- (id)graphView:(id)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3;
- (id)seriesSelectionLineColorForGraphView:(id)arg1;
- (void)_buildSeries;
- (id)testSeries:(long long)arg1 color:(id)arg2 hourOffset:(double)arg3 yAxis:(id)arg4 annotateLastValue:(_Bool)arg5;
- (void)_alignYAxes;

@end
