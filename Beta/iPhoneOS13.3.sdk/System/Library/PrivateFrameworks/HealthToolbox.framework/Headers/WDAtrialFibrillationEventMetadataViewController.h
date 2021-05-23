/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKTableViewController.h>

@class HKCategorySample, NSMutableArray;

@protocol HKDataMetadataViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WDAtrialFibrillationEventMetadataViewController : HKTableViewController

{
    HKCategorySample *_event;
    NSMutableArray *_sections;
    id <HKDataMetadataViewControllerDelegate> _delegate;
}

@property (retain, nonatomic) HKCategorySample *event;
@property (retain, nonatomic) NSMutableArray *sections;
@property (weak, nonatomic) id <HKDataMetadataViewControllerDelegate> delegate;

- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithEvent:(id)arg1 delegate:(id)arg2;
- (void)_loadSections;
- (id)_shortVersionNumberFromString:(id)arg1;
- (_Bool)_addSectionIfNonNull:(id)arg1;
- (void)_reloadAtrialFibrillationEducationTableHeaderView;
- (id)_atrialFibrillationEducationContainerView;
- (void)heartbeatSequecesListQueryComplete:(id)arg1;

@end
