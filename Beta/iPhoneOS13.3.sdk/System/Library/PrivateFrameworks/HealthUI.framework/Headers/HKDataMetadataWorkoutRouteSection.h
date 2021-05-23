/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKDataMetadataSection.h>

@class HKDataMetadataWorkoutRouteCell, HKLocationFetcher, HKLocationReadings, HKRouteMapGenerator;

@interface HKDataMetadataWorkoutRouteSection : HKDataMetadataSection

{
    HKDataMetadataWorkoutRouteCell *_cell;
    HKLocationReadings *_locationReadings;
    HKLocationFetcher *_locationFetcher;
    HKRouteMapGenerator *_generator;
}

@property (retain, nonatomic) HKDataMetadataWorkoutRouteCell *cell;
@property (nonatomic, readonly) HKLocationReadings *locationReadings;
@property (retain, nonatomic) HKLocationFetcher *locationFetcher;
@property (retain, nonatomic) HKRouteMapGenerator *generator;

- (id)sectionTitle;
- (unsigned long long)numberOfRowsInSection;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;
- (void)generateRouteImage;
- (id)initWithLocationReadings:(id)arg1;

@end
