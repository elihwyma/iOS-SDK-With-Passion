/*
 Image: /System/Library/PrivateFrameworks/LoginUILogViewer.framework/LoginUILogViewer
 */

#import <UIKitCore/UIViewController.h>

#import <LoginUILogViewer/Swift-Protocol.h>

@class LUILogFilterView, NSString;

@protocol LUILogFilterViewControllerDelegate;

@interface LUILogFilterViewController : UIViewController <Swift>

{
    id <LUILogFilterViewControllerDelegate> _delegate;
    LUILogFilterView *_filterView;
}

@property (retain, nonatomic) LUILogFilterView *filterView;
@property (weak, nonatomic) id <LUILogFilterViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)_canShowWhileLocked;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)_setupButtons;
- (void)addButtonTapped:(id)arg1;
- (void)_setupCollectionView;
- (void)_setupTableView;
- (void)predicateDataUpdated;
- (void)predicateTableViewCellDeleteButtonTapped:(id)arg1;
- (void)applyButtonTapped:(id)arg1;
- (id)predicateValueCandidates;
- (id)sizeArrayWithStrings:(id)arg1;
- (id)predicateKeyCandidates;
- (id)predicateComparisonCandidates;
- (void)_clearCellsSelection;
- (void)_shakeInputView:(id)arg1;
- (void)_clearPredicateInput;
- (void)_updatePredicateText;
- (id)predicateValueCandidatesSize;

@end
