/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UITableViewController.h>

@class EKICSPreviewModel, NSMutableArray;

@protocol EKICSPreviewListDelegate;

__attribute__((visibility("hidden")))
@interface EKICSPreviewListController : UITableViewController

{
    EKICSPreviewModel *_model;
    NSMutableArray *_sections;
    _Bool _allowsImport;
    _Bool _allowsSubitems;
    _Bool _showWeekNumbers;
    id <EKICSPreviewListDelegate> _listDelegate;
}

@property (nonatomic) _Bool showWeekNumbers;
@property (nonatomic) _Bool allowsImport;
@property (nonatomic) _Bool allowsSubitems;
@property (weak, nonatomic) id <EKICSPreviewListDelegate> listDelegate;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithModel:(id)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_showWeekNumbersPreferenceChanged:(id)arg1;
- (void)buildSections;
- (void)updateImportButton;
- (void)importAllPressed:(id)arg1;

@end
