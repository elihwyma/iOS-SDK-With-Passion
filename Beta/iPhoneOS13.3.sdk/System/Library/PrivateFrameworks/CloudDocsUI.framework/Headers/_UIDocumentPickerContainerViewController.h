/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <UIKit/UIViewController.h>

#import <CloudDocsUI/Swift-Protocol.h>

@class NSArray, NSString, _UIDocumentPickerContainerModel, _UIDocumentPickerSearchPaletteView, _UIDocumentPickerSortOrderView, _UIDocumentSearchListController;

@protocol _UIDocumentPickerContainedViewController, _UIDocumentPickerServiceViewController;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerContainerViewController : UIViewController <Swift>

{
    long long _explicitDisplayMode;
    id <_UIDocumentPickerServiceViewController> _serviceViewController;
    _UIDocumentPickerContainerModel *_model;
    _UIDocumentSearchListController *_resultsController;
    UIViewController<_UIDocumentPickerContainedViewController> *_childViewController;
    _UIDocumentPickerSortOrderView *_sortView;
    _UIDocumentPickerSearchPaletteView *_searchView;
}

@property (retain, nonatomic) UIViewController<_UIDocumentPickerContainedViewController> *childViewController;
@property (retain, nonatomic) _UIDocumentPickerContainerModel *model;
@property (retain, nonatomic) _UIDocumentPickerSortOrderView *sortView;
@property (retain, nonatomic) _UIDocumentPickerSearchPaletteView *searchView;
@property (weak, nonatomic) id <_UIDocumentPickerServiceViewController> serviceViewController;
@property (retain, nonatomic) NSArray *indexPathsForSelectedItems;
@property (nonatomic) long long explicitDisplayMode;
@property (nonatomic) struct CGPoint contentOffset;
@property (retain, nonatomic) _UIDocumentSearchListController *resultsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)userDefaults;

- (void)dealloc;
- (void)invalidate;
- (id)initWithModel:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (_Bool)isEditing;
- (void)_updateTraitCollection;
- (void)setEditing:(_Bool)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (long long)displayMode;
- (int)sortOrder;
- (void)setSortOrder:(int)arg1;
- (void)setupSearchController;
- (long long)defaultDisplayMode;
- (void)setChildViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_startSearchWithQueryString:(id)arg1 becomeFirstResponder:(_Bool)arg2;
- (void)displayModeChanged;
- (void)_sortOrderViewChanged:(id)arg1;
- (void)ensureChildViewController;
- (void)setDefaultDisplayMode:(long long)arg1;

@end
