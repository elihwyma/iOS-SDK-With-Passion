//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXNavigationListDataSectionManagerObserver-Protocol.h>

@class NSUserActivity, PXNavigationListDataSection, PXNavigationListDataSectionManager, UITableView;
@protocol PXNavigationListContainer;

@interface PXNavigationListController : UIViewController <UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate, PXNavigationListDataSectionManagerObserver>
{
    BOOL __needsUpdateRowHeight;
    BOOL _isTableViewUpdating;
    UITableView *_tableView;
    PXNavigationListDataSectionManager *_dataSectionManager;
    id <PXNavigationListContainer> _container;
    PXNavigationListDataSection *_dataSection;
    NSUserActivity *_siriActionActivity;
    double _rowHeight;
}

+ (id)navigateToListItem:(id)arg1 sourceViewController:(id)arg2 animated:(BOOL)arg3 completion:(id /* CDUnknownBlockType */)arg4;
@property(nonatomic) BOOL isTableViewUpdating; // @synthesize isTableViewUpdating=_isTableViewUpdating;
@property(nonatomic, setter=_setNeedsUpdateRowHeight:) BOOL _needsUpdateRowHeight; // @synthesize _needsUpdateRowHeight=__needsUpdateRowHeight;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(retain, nonatomic) NSUserActivity *siriActionActivity; // @synthesize siriActionActivity=_siriActionActivity;
@property(retain, nonatomic) PXNavigationListDataSection *dataSection; // @synthesize dataSection=_dataSection;
@property(nonatomic) __weak id <PXNavigationListContainer> container; // @synthesize container=_container;
@property(readonly, nonatomic) PXNavigationListDataSectionManager *dataSectionManager; // @synthesize dataSectionManager=_dataSectionManager;
// - (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (id)_navigateTolistItem:(id)arg1 animated:(BOOL)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_updateCellSeparatorStyle:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)_updateCell:(id)arg1 atIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableViewContentSizeDidChange;
- (void)_preferredContentSizeChanged:(id)arg1;
- (double)_rowHeightForCurrentFont;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)_updateTableView;
@property(nonatomic) BOOL allowsNavigation;
@property(readonly, nonatomic) double contentHeight;
- (id)_createTransparentFullWidthViewOfHeight:(double)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithDataSectionManager:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

