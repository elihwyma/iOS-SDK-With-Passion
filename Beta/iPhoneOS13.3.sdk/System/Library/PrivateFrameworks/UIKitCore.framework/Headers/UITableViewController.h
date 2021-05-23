/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIAutoRespondingScrollViewControllerKeyboardSupport, UIRefreshControl, UIScrollView, UITableView, UITableViewDataSource, _UIFilteredDataSource;

@protocol _UIKeyboardAutoRespondingScrollView;

@interface UITableViewController : UIViewController <Swift>

{
    long long _tableViewStyle;
    UIAutoRespondingScrollViewControllerKeyboardSupport *_keyboardSupport;
    UITableViewDataSource *_staticDataSource;
    struct {
        unsigned int clearsSelectionOnViewWillAppear:1;
        unsigned int insetsApplied:1;
        unsigned int adjustingInsets:1;
    } _tableViewControllerFlags;
    _UIFilteredDataSource *_filteredDataSource;
    long long _filteredDataType;
}

@property (retain, nonatomic, getter=_staticDataSource, setter=_setStaticDataSource:) UITableViewDataSource *staticDataSource;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) _Bool clearsSelectionOnViewWillAppear;
@property (retain, nonatomic) UIRefreshControl *refreshControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic, readonly, getter=_scrollView) UIScrollView<_UIKeyboardAutoRespondingScrollView> *scrollView;

- (id)init;
- (void)dealloc;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;
- (_Bool)_viewControllerWasSelected;
- (_Bool)_shouldRespondToPreviewingMethods;
- (id)previewViewControllerForLocation:(struct CGPoint)arg1 inSourceView:(id)arg2;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(id)arg3;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (void)willPresentPreviewViewController:(id)arg1 forPosition:(struct CGPoint)arg2 inSourceView:(id)arg3;
- (id)_existingTableView;
- (void)_applyDefaultDataSourceToTable:(id)arg1;
- (void)_refreshFilteredDataSourceFilterTypeForScreen:(id)arg1;
- (void)_limitedUIDidChange;
- (long long)_resolvedDataSourceFilterTypeForScreen:(id)arg1;
- (id)previewViewControllerForRowAtIndexPath:(id)arg1;
- (void)willPresentPreviewViewController:(id)arg1 forRowAtIndexPath:(id)arg2;
- (long long)_filteredDataType;
- (void)_setFilteredDataType:(long long)arg1;

@end
