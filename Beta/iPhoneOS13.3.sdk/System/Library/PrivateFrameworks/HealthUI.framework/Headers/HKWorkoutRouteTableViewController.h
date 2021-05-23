/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKDataMetadataViewController.h>

@class HKHealthStore, HKMapRouteTableViewCell, HKWorkoutRoute, NSMutableArray;

@interface HKWorkoutRouteTableViewController : HKDataMetadataViewController

{
    HKHealthStore *_healthStore;
    HKMapRouteTableViewCell *_mapRouteTableViewCell;
    NSMutableArray *_routeData;
}

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKMapRouteTableViewCell *mapRouteTableViewCell;
@property (retain, nonatomic) NSMutableArray *routeData;
@property (readonly) HKWorkoutRoute *workoutRoute;

- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithSample:(id)arg1 usingInsetStyling:(_Bool)arg2 delegate:(id)arg3;
- (id)initWithWorkoutRoute:(id)arg1 healthStore:(id)arg2 usingInsetStyling:(_Bool)arg3 delegate:(id)arg4;
- (void)addRouteData:(id)arg1 hasFinishedQuery:(_Bool)arg2;
- (void)parseAndDisplayRouteData;
- (void)loadRoute;
- (id)_convertIndexPathToSuper:(id)arg1;

@end
