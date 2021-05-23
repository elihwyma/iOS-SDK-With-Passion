/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSString, NSURL, _UIDocumentPickerContainerViewController, _UIDocumentSearchListController;

@protocol _UIDocumentListControllerDelegate;

@interface _UIDocumentListController : UIViewController

{
    _UIDocumentListController *_rootListController;
    _UIDocumentPickerContainerViewController *_containerViewController;
    int _sortOrderIfNotDeferred;
    long long _displayModeIfNotDeferred;
    long long _availableActionsIfNotDeferred;
    id <_UIDocumentListControllerDelegate> _delegateIfNotDeferred;
    _UIDocumentSearchListController *_searchController;
    struct CGPoint _stateRestoredContentOffset;
    _Bool _hideSearchField;
    _Bool _editing;
}

@property (weak, nonatomic) _UIDocumentListController *rootListController;
@property (weak, nonatomic) id <_UIDocumentListControllerDelegate> delegate;
@property (nonatomic) _Bool hideSearchField;
@property (nonatomic, readonly) NSURL *presentedURL;
@property (nonatomic, readonly) NSArray *containedItems;
@property (retain, nonatomic) NSArray *selectedItems;
@property (nonatomic) _Bool editing;
@property (nonatomic) long long availableActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
+ (id)_listControllerHierarchyForURL:(id)arg1 withConstructorBlock:(CDUnknownBlockType)arg2;
+ (id)listControllerHierarchyForURL:(id)arg1;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)model;
- (id)initWithModel:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (long long)displayMode;
- (int)sortOrder;
- (void)setSortOrder:(int)arg1;
- (void)setDisplayMode:(long long)arg1;
- (void)updateTitle;
- (_Bool)shouldShowAction:(long long)arg1;
- (void)performAction:(long long)arg1 item:(id)arg2 view:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setContainerViewController:(id)arg1;
- (void)createSearchControllerWithModel:(id)arg1;
- (void)_commonInitWithModel:(id)arg1;
- (Class)_classForChildren;
- (void)_updateScrollPositionForStateRestoration;
- (void)didSelectItem:(id)arg1;
- (_Bool)shouldHighlightItem:(id)arg1;
- (void)didHighlightItem:(id)arg1;
- (void)didUnhighlightItem:(id)arg1;
- (_Bool)shouldSelectItem:(id)arg1;
- (void)itemsOrSelectionDidChange:(_Bool)arg1;
- (id)previewViewControllerForItem:(id)arg1;
- (void)startSearchWithQueryString:(id)arg1 becomeFirstResponder:(_Bool)arg2;
- (void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 listMode:(long long)arg4;

@end
