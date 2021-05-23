/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <UIKit/UIViewController.h>

@class DOCAddTagView, NSArray, NSDictionary, NSLayoutConstraint, NSMutableOrderedSet, NSMutableSet, NSOrderedSet, NSString, UIBarButtonItem, UICollectionView, UIInterfaceActionGroupView, UIView;

@protocol DOCTagEditorDelegate;

@interface DOCTagEditorViewController : UIViewController

{
    _Bool _showAddTagConfirmButtons;
    _Bool _useCompactColorPicker;
    _Bool _pinTextFieldToTopBound;
    _Bool _delayResizingUntilAppeared;
    _Bool _isExtremelyVerticallyCompact;
    _Bool _isInfoInPopoverMode;
    _Bool _inTagListMode;
    _Bool _addingTag;
    _Bool _userChangedTags;
    id <DOCTagEditorDelegate> _delegate;
    NSArray *_items;
    NSOrderedSet *_userTags;
    UICollectionView *_collectionView;
    UIView *_addTagTextFieldViewWrapper;
    DOCAddTagView *_addTagTextFieldView;
    UIInterfaceActionGroupView *_confirmButtons;
    NSDictionary *_sizingCells;
    NSLayoutConstraint *_collectionViewHeightConstraint;
    NSMutableOrderedSet *_discoveredTags;
    NSMutableSet *_intersectionSelectedTags;
    NSMutableSet *_unionSelectedTags;
    NSString *_tagsTitle;
    NSString *_addTagTitle;
    NSString *_addNewTagTitle;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_cancelButton;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *addTagTextFieldViewWrapper;
@property (retain, nonatomic) DOCAddTagView *addTagTextFieldView;
@property (retain, nonatomic) UIInterfaceActionGroupView *confirmButtons;
@property (nonatomic, readonly) NSDictionary *sizingCells;
@property (nonatomic, readonly) NSLayoutConstraint *collectionViewHeightConstraint;
@property (nonatomic, getter=isAddingTag) _Bool addingTag;
@property (nonatomic, readonly) NSOrderedSet *userTags;
@property (nonatomic, readonly) NSMutableOrderedSet *discoveredTags;
@property (retain, nonatomic) NSMutableSet *intersectionSelectedTags;
@property (retain, nonatomic) NSMutableSet *unionSelectedTags;
@property (nonatomic) _Bool userChangedTags;
@property (retain, nonatomic) NSString *tagsTitle;
@property (retain, nonatomic) NSString *addTagTitle;
@property (retain, nonatomic) NSString *addNewTagTitle;
@property (retain, nonatomic) UIBarButtonItem *doneButton;
@property (retain, nonatomic) UIBarButtonItem *cancelButton;
@property (nonatomic) _Bool isInfoInPopoverMode;
@property (nonatomic) _Bool inTagListMode;
@property (nonatomic, readonly) _Bool isCreatingTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool showAddTagConfirmButtons;
@property (nonatomic) _Bool useCompactColorPicker;
@property (nonatomic) _Bool pinTextFieldToTopBound;
@property (nonatomic) _Bool delayResizingUntilAppeared;
@property (nonatomic) _Bool isExtremelyVerticallyCompact;
@property (weak, nonatomic) id <DOCTagEditorDelegate> delegate;
@property (retain, nonatomic) NSArray *items;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (double)collectionView:(id)arg1 tableLayout:(id)arg2 heightForRowAtIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (id)contentScrollView;
- (void)_updateNavigationItem;
- (id)_tagForIndexPath:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (void)_updateSelection;
- (void)addTagTextFieldDidBeginEditing:(id)arg1;
- (void)addTagTextFieldDidEndEditing:(id)arg1;
- (void)addTagTextFieldDidChange:(id)arg1;
- (_Bool)addTagTextField:(id)arg1 userDidCreateTagWithName:(id)arg2;
- (void)setupCells:(id)arg1;
- (void)tagRegistryDidUpdate;
- (void)_updatePreferredContentSize:(_Bool)arg1;
- (void)scheduleSetTagsOperationWithTag:(id)arg1 adding:(_Bool)arg2;
- (void)updateDiscoveredTags;
- (void)_updateSelectionForSection:(unsigned long long)arg1 withTags:(id)arg2;
- (void)_updateMixedSelectionForCell:(id)arg1;
- (void)updateSelectedTags;
- (id)createConfirmButtons;
- (void)tagEditor:(id)arg1 userDidSelectTag:(id)arg2;
- (void)tagEditor:(id)arg1 userDidDeselectTag:(id)arg2;
- (id)cellForIndexPath:(id)arg1 dequeueCell:(CDUnknownBlockType)arg2;
- (double)topEdgeSpacing;
- (double)bottomEdgeSpacing;
- (void)tagEditor:(id)arg1 userDidCreateTag:(id)arg2;

@end
