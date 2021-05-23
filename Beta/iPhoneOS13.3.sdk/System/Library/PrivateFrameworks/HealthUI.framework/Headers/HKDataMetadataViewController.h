/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKTableViewController.h>

@class HKDataMetadataWorkoutRouteSection, HKLocationFetcher, HKLocationReadings, HKSample, NSArray, NSMutableArray;

@protocol HKDataMetadataViewControllerDelegate;

@interface HKDataMetadataViewController : HKTableViewController

{
    HKSample *_sample;
    NSArray *_subSampleTypes;
    id <HKDataMetadataViewControllerDelegate> _delegate;
    NSMutableArray *_sections;
    HKLocationFetcher *_locationFetcher;
    HKLocationReadings *_locationReadings;
    HKDataMetadataWorkoutRouteSection *_workoutRouteSection;
}

@property (nonatomic, readonly) NSArray *subSampleTypes;
@property (nonatomic, readonly) id <HKDataMetadataViewControllerDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *sections;
@property (retain, nonatomic) HKLocationFetcher *locationFetcher;
@property (retain, nonatomic) HKLocationReadings *locationReadings;
@property (retain, nonatomic) HKDataMetadataWorkoutRouteSection *workoutRouteSection;
@property (retain, nonatomic) HKSample *sample;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithSample:(id)arg1 usingInsetStyling:(_Bool)arg2 delegate:(id)arg3;
- (id)defaultPredicateForSampleType:(id)arg1;
- (id)viewControllerForSampleType:(id)arg1 subSamplePredicate:(id)arg2 title:(id)arg3;
- (id)accessViewControllerForSample:(id)arg1 healthStore:(id)arg2;
- (void)_localeOrDisplayTypeChange:(id)arg1;
- (void)_loadSections;
- (_Bool)_addSectionIfNonNull:(id)arg1;
- (void)_fetchWorkoutRouteLocations;
- (void)_fetchSubSampleTypes;
- (void)_addWorkoutRouteSection;
- (void)_exportButtonAction:(id)arg1;
- (void)_updateSubSampleTypes:(id)arg1 error:(id)arg2;
- (void)_fetchRoutesWithSamplesHandler:(CDUnknownBlockType)arg1;
- (void)finishedAggregateQuery;

@end
