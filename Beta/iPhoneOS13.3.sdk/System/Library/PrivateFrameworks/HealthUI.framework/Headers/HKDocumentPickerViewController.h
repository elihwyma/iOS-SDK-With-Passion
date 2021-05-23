/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKTableViewController.h>

@class HKHealthStore, HKSource, HKTitledIconHeaderView, NSMutableArray, NSMutableSet, NSSet, NSString;

@protocol HKDocumentPickerViewControllerDelegate;

@interface HKDocumentPickerViewController : HKTableViewController

{
    NSMutableArray *_samplesList;
    long long _presentationStyle;
    HKHealthStore *_healthStore;
    _Bool _hasPendingDocumentFetch;
    HKSource *_source;
    _Bool _showCheckboxes;
    HKTitledIconHeaderView *_tableHeaderView;
    NSSet *_allSamples;
    NSMutableSet *_enabledSamples;
    id <HKDocumentPickerViewControllerDelegate> _delegate;
}

@property (retain, nonatomic) NSMutableSet *enabledSamples;
@property (retain, nonatomic) HKSource *source;
@property (nonatomic, readonly) NSSet *allSamples;
@property (weak, nonatomic) id <HKDocumentPickerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) HKHealthStore *healthStore;

- (id)initWithCoder:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_tableHeaderView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_finishWithError:(id)arg1;
- (void)_updateForCurrentSizeCategory;
- (void)_cancel:(id)arg1;
- (void)_done:(id)arg1;
- (id)initWithDocuments:(id)arg1 presentationStyle:(long long)arg2;
- (_Bool)_isPrompting;
- (void)_addCancelAndDoneButtons;
- (void)_enableDocumentSample:(id)arg1 enabled:(_Bool)arg2;
- (void)configureHeaderView:(id)arg1;
- (_Bool)_needsSampleRequestDescription;
- (id)dataMetadataViewControllerForSample:(id)arg1;
- (void)cdaDocumentTableViewCellDidChangeValue:(id)arg1;
- (id)initWithDocumentAuthorizations:(id)arg1;
- (void)pushDetailForDocumentSample:(id)arg1;

@end
