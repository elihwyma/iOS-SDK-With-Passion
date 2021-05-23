/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKTableViewController.h>

@class HKElectrocardiogram, HRElectrocardiogramReportGenerator, NSMutableArray, WDElectrocardiogramReportDataSource;

@protocol HKDataMetadataViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WDElectrocardiogramDataMetadataViewController : HKTableViewController

{
    _Bool _actionsEnabled;
    HKElectrocardiogram *_sample;
    id <HKDataMetadataViewControllerDelegate> _delegate;
    NSMutableArray *_sections;
    WDElectrocardiogramReportDataSource *_reportDataSource;
    HRElectrocardiogramReportGenerator *_reportGenerator;
}

@property (retain, nonatomic) HKElectrocardiogram *sample;
@property (weak, nonatomic) id <HKDataMetadataViewControllerDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *sections;
@property (retain, nonatomic) WDElectrocardiogramReportDataSource *reportDataSource;
@property (retain, nonatomic) HRElectrocardiogramReportGenerator *reportGenerator;
@property (nonatomic) _Bool actionsEnabled;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithSample:(id)arg1 delegate:(id)arg2;
- (void)_localeOrDisplayTypeChange:(id)arg1;
- (void)_loadSections;
- (void)shareButtonTapped:(id)arg1;
- (void)_reloadElectrocardiogramMetadataTableHeaderView;
- (id)_shortVersionNumberFromString:(id)arg1;
- (_Bool)_addSectionIfNonNull:(id)arg1;
- (id)_electrocardiogramMetadataContainerView;
- (void)deleteSampleTriggeredBySection:(id)arg1;
- (void)presentPDFViewController;
- (void)deletionSectionDidSelectRow:(id)arg1;
- (void)electrocardiogramMetadataViewDidTapDetailButton:(id)arg1;
- (id)electrocardiogramMetadataView:(id)arg1 regulatedBodyTextForSample:(id)arg2;
- (_Bool)electrocardiogramMetadataViewShouldShowShareRow:(id)arg1;
- (void)electrocardiogramMetadataViewDidSelectShareRow:(id)arg1;

@end
