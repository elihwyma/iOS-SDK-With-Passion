/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class NSString, NSUserActivity, PXNavigationListDataSection, PXNavigationListDataSectionManager, UITableView;

@protocol PXNavigationListContainer;

@interface PXNavigationListController : UIViewController

{
    _Bool __needsUpdateRowHeight;
    _Bool _isTableViewUpdating;
    UITableView *_tableView;
    PXNavigationListDataSectionManager *_dataSectionManager;
    id <PXNavigationListContainer> _container;
    PXNavigationListDataSection *_dataSection;
    NSUserActivity *_siriActionActivity;
    double _rowHeight;
}

@property (retain, nonatomic) PXNavigationListDataSection *dataSection;
@property (retain, nonatomic) NSUserActivity *siriActionActivity;
@property (nonatomic) double rowHeight;
@property (nonatomic, setter=_setNeedsUpdateRowHeight:) _Bool _needsUpdateRowHeight;
@property (nonatomic) _Bool isTableViewUpdating;
@property (nonatomic, readonly) PXNavigationListDataSectionManager *dataSectionManager;
@property (weak, nonatomic) id <PXNavigationListContainer> container;
@property (nonatomic, readonly) double contentHeight;
@property (nonatomic, readonly) UITableView *tableView;
@property (nonatomic) _Bool allowsNavigation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)navigateToListItem:(id)arg1 sourceViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;

- (id)initWithCoder:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_updateTableView;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)_createTransparentFullWidthViewOfHeight:(double)arg1;
- (id)initWithDataSectionManager:(id)arg1;
- (double)_rowHeightForCurrentFont;
- (void)_preferredContentSizeChanged:(id)arg1;
- (void)tableViewContentSizeDidChange;
- (void)_updateCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateCellSeparatorStyle:(id)arg1 forRowAtIndexPath:(id)arg2;
- (id)_navigateTolistItem:(id)arg1 animated:(_Bool)arg2;

@end
