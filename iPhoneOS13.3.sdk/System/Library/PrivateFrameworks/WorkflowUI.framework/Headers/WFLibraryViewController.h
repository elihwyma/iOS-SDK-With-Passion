//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <WorkflowUI/WFApplicationStateObserver-Protocol.h>
#import <WorkflowUI/WFLibraryWorkflowCellDelegate-Protocol.h>
#import <WorkflowUI/WFRunnableLibraryResultsControllerDelegate-Protocol.h>
#import <WorkflowUI/WFUIKitUserInterface-Protocol.h>

@class UICollectionView, UICollectionViewFlowLayout, WFDatabase, WFDatabaseResult, WFLibraryResultsController, WFLibraryRunCoordinator;

@interface WFLibraryViewController : UIViewController <UISearchResultsUpdating, UISearchControllerDelegate, UICollectionViewDelegateFlowLayout, WFLibraryWorkflowCellDelegate, UICollectionViewDropDelegate, WFRunnableLibraryResultsControllerDelegate, WFApplicationStateObserver, WFUIKitUserInterface>
{
    BOOL _needsDelayWhenPresented;
    BOOL _handlesDropsOntoWorkflows;
    WFDatabase *_database;
    UICollectionView *_collectionView;
    WFLibraryResultsController *_resultsController;
    UICollectionViewFlowLayout *_collectionViewLayout;
    WFDatabaseResult *_collection;
    UIEdgeInsets _previousLayoutMargins;
}

+ (Class)collectionViewLayoutClass;
+ (Class)resultsControllerClass;
@property(nonatomic) UIEdgeInsets previousLayoutMargins; // @synthesize previousLayoutMargins=_previousLayoutMargins;
@property(readonly, nonatomic) WFDatabaseResult *collection; // @synthesize collection=_collection;
@property(nonatomic) BOOL handlesDropsOntoWorkflows; // @synthesize handlesDropsOntoWorkflows=_handlesDropsOntoWorkflows;
@property(readonly, nonatomic) BOOL needsDelayWhenPresented; // @synthesize needsDelayWhenPresented=_needsDelayWhenPresented;
@property(readonly, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(readonly, nonatomic) WFLibraryResultsController *resultsController; // @synthesize resultsController=_resultsController;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) WFDatabase *database; // @synthesize database=_database;
// - (void).cxx_destruct;
- (id)keyCommands;
- (void)beginSearching;
- (void)endSearching;
- (void)resultsController:(id)arg1 didChangeRunningStateForWorkflow:(id)arg2;
- (void)presentAlert:(id)arg1;
@property(readonly, nonatomic) UIViewController *viewController;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)handleDropOfItems:(id)arg1 ontoWorkflow:(id)arg2;
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 canHandleDropSession:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)workflowAtIndexPath:(id)arg1;
@property(readonly, nonatomic) BOOL needsTopPadding;
- (void)keyboardFrameWillChange;
- (void)viewLayoutMarginsDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2;
- (BOOL)canBecomeFirstResponder;
- (void)invalidateLayoutMetrics;
@property(readonly, nonatomic) WFLibraryRunCoordinator *runCoordinator;
- (void)loadView;
- (void)dealloc;
- (id)initWithCollection:(id)arg1;
- (id)init;

@end

