/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSString, UICollectionView, UICollectionViewFlowLayout, UIView, WFDatabase, WFDatabaseResult, WFLibraryResultsController, WFLibraryRunCoordinator;

@interface WFLibraryViewController : UIViewController <Swift>

{
    _Bool _needsDelayWhenPresented;
    _Bool _handlesDropsOntoWorkflows;
    WFDatabase *_database;
    UICollectionView *_collectionView;
    WFLibraryResultsController *_resultsController;
    UICollectionViewFlowLayout *_collectionViewLayout;
    WFDatabaseResult *_collection;
    struct UIEdgeInsets _previousLayoutMargins;
}

@property (nonatomic, readonly) WFDatabaseResult *collection;
@property (nonatomic) struct UIEdgeInsets previousLayoutMargins;
@property (nonatomic, readonly) WFDatabase *database;
@property (nonatomic, readonly) UICollectionView *collectionView;
@property (nonatomic, readonly) WFLibraryRunCoordinator *runCoordinator;
@property (nonatomic, readonly) WFLibraryResultsController *resultsController;
@property (nonatomic, readonly) UICollectionViewFlowLayout *collectionViewLayout;
@property (nonatomic, readonly) _Bool needsDelayWhenPresented;
@property (nonatomic, readonly) _Bool needsTopPadding;
@property (nonatomic) _Bool handlesDropsOntoWorkflows;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIViewController *viewController;
@property (nonatomic, readonly) UIView *view;

+ (Class)resultsControllerClass;
+ (Class)collectionViewLayoutClass;

- (id)init;
- (void)dealloc;
- (id)initWithCollection:(id)arg1;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 canHandleDropSession:(id)arg2;
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (id)keyCommands;
- (void)viewLayoutMarginsDidChange;
- (void)willPresentSearchController:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2;
- (void)presentAlert:(id)arg1;
- (void)invalidateLayoutMetrics;
- (void)resultsController:(id)arg1 didChangeRunningStateForWorkflow:(id)arg2;
- (void)keyboardFrameWillChange;
- (id)workflowAtIndexPath:(id)arg1;
- (void)handleDropOfItems:(id)arg1 ontoWorkflow:(id)arg2;
- (void)endSearching;
- (void)beginSearching;

@end
