/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <CloudDocsUI/_UIContainerHuggingTableViewController.h>

@class NSArray;

@protocol _UIDocumentPickerOverviewDelegate;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerOverviewViewController : _UIContainerHuggingTableViewController

{
    _Bool _manage;
    id <_UIDocumentPickerOverviewDelegate> _delegate;
    NSArray *_allPickers;
    NSArray *_auxiliaryOptions;
    NSArray *_fileTypes;
    unsigned long long _mode;
}

@property (retain, nonatomic) NSArray *allPickers;
@property (retain, nonatomic) NSArray *auxiliaryOptions;
@property (retain, nonatomic) NSArray *fileTypes;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) _Bool manage;
@property (weak, nonatomic) id <_UIDocumentPickerOverviewDelegate> delegate;

- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updatePreferredContentSize;
- (void)updateContents;
- (id)initWithFileTypes:(id)arg1 mode:(unsigned long long)arg2 auxiliaryOptions:(id)arg3 includeManagementItem:(_Bool)arg4;

@end
