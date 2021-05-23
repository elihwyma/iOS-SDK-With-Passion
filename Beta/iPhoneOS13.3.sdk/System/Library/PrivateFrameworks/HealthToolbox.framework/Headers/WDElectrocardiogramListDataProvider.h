/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthToolbox/WDSampleListDataProvider.h>

__attribute__((visibility("hidden")))
@interface WDElectrocardiogramListDataProvider : WDSampleListDataProvider

{
    _Bool _shouldConsiderRequeryDueToDeletedObjects;
    unsigned long long _recentSampleLimit;
}

@property (nonatomic) _Bool shouldConsiderRequeryDueToDeletedObjects;
@property (nonatomic) unsigned long long recentSampleLimit;

- (unsigned long long)numberOfSections;
- (long long)cellStyle;
- (id)titleForSection:(unsigned long long)arg1;
- (id)sampleTypes;
- (void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4;
- (id)textForObject:(id)arg1;
- (double)customCellHeight;
- (double)customEstimatedCellHeight;
- (id)customCellForObject:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3;
- (id)createQueryForSampleType:(id)arg1 predicate:(id)arg2 limit:(long long)arg3 sortDescriptors:(id)arg4 resultsHandler:(CDUnknownBlockType)arg5;
- (unsigned long long)numberOfObjectsForSection:(unsigned long long)arg1;
- (void)customizeTableView:(id)arg1;
- (id)_cellForSample:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3;
- (void)refineSamplesWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)calendarDateSelectorVisible;
- (_Bool)canEditRowAtIndexPath:(id)arg1;
- (id)queryDateForSelectedDate:(id)arg1;
- (id)placeholderCellAtIndexPath:(id)arg1 tableView:(id)arg2;
- (id)customLoadingCellForRowAtIndexPath:(id)arg1 tableView:(id)arg2;
- (id)viewControllerForItemAtIndexPath:(id)arg1;

@end
