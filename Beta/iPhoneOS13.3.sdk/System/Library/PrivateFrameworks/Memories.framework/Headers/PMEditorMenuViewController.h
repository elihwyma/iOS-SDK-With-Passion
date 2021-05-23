/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/PMEditorBasePlayerViewController.h>

@class NSIndexPath, NSString, PMTitleEditorProvider, UITableView, VEKProduction;

@protocol PMEditorMenuViewControllerDelegate;

@interface PMEditorMenuViewController : PMEditorBasePlayerViewController

{
    _Bool _showingActivityIndicatorForContentEditor;
    VEKProduction *_production;
    PMTitleEditorProvider *_titleProvider;
    id <PMEditorMenuViewControllerDelegate> _menuDelegate;
    UITableView *_tableView;
    NSIndexPath *_selectedIndexPath;
}

@property (retain, nonatomic) VEKProduction *production;
@property (retain, nonatomic) PMTitleEditorProvider *titleProvider;
@property (weak, nonatomic) id <PMEditorMenuViewControllerDelegate> menuDelegate;
@property (nonatomic) _Bool showingActivityIndicatorForContentEditor;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_updateFonts;
- (void)popFromNavigationController;
- (id)_normalizedIndexPathForRow:(long long)arg1 inSection:(long long)arg2;
- (id)_getTimeStringFromSeconds:(double)arg1;

@end
