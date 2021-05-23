/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIViewController.h>

@class HKHealthStore, HKLocationReadings, HKRouteView, HKWorkout, NSArray, NSString;

@interface HKWorkoutRouteViewController : UIViewController

{
    HKLocationReadings *_locationReadings;
    HKWorkout *_workout;
    _Bool _showUnsmoothedRoute;
    _Bool _sharingEnabled;
    HKRouteView *_routeView;
    HKLocationReadings *_unsmoothedLocationReadings;
    HKHealthStore *_healthStore;
    NSString *_shareText;
    NSArray *_excludedActivityTypes;
}

@property (retain, nonatomic) HKRouteView *routeView;
@property (retain, nonatomic) HKLocationReadings *unsmoothedLocationReadings;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (nonatomic) _Bool sharingEnabled;
@property (retain, nonatomic) NSString *shareText;
@property (retain, nonatomic) NSArray *excludedActivityTypes;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_shareButtonPressed:(id)arg1;
- (id)initWithLocationReadings:(id)arg1 title:(id)arg2 sharingEnabled:(_Bool)arg3 shareText:(id)arg4 excludedActivityTypes:(id)arg5;
- (void)_toggleRouteViewMapType:(id)arg1;
- (void)_internalDebuggingOnly_toggleUnsmoothedLocations:(id)arg1;
- (void)_internalDebuggingOnly_fetchUnsmoothedRoutesFromDatabase;

@end
