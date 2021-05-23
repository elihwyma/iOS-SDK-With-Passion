/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewController.h>

@class IKAppDocument, NSArray, NSMapTable, NSString, SKUIIndexBarControlController, SKUIResourceLoader, SKUIStackTemplateElement, SKUIStorePageSectionsViewController;

__attribute__((visibility("hidden")))
@interface SKUIStackDocumentViewController : SKUIViewController

{
    IKAppDocument *_document;
    NSArray *_entryListControllers;
    _Bool _hasResetState;
    SKUIIndexBarControlController *_indexBarControlController;
    long long _lastNeedsMoreCount;
    long long _layoutStyle;
    SKUIResourceLoader *_resourceLoader;
    SKUIStackTemplateElement *_templateElement;
    NSMapTable *_viewElementToEntryListController;
    SKUIStorePageSectionsViewController *_sectionsViewController;
}

@property (nonatomic, readonly) SKUIStorePageSectionsViewController *sectionsViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_shouldForwardViewWillTransitionToSize;

- (void)dealloc;
- (void)loadView;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)_resourceLoader;
- (void)_resetState;
- (void)documentDidUpdate:(id)arg1;
- (id)_colorScheme;
- (id)impressionableViewElements;
- (void)documentMediaQueriesDidUpdate:(id)arg1;
- (void)sectionsViewController:(id)arg1 willScrollToOffset:(struct CGPoint)arg2 visibleRange:(struct SKUIIndexPathRange)arg3;
- (void)refresh:(id)arg1 refreshControl:(id)arg2;
- (void)skui_viewWillAppear:(_Bool)arg1;
- (_Bool)performTestWithName:(id)arg1 options:(id)arg2;
- (long long)_pinningTransitionStyle;
- (void)_updateEntryListControllersWithReload:(_Bool)arg1;
- (void)_resetStateForDocumentNotification:(id)arg1;
- (id)_indexBarViewElement;
- (void)_configureIndexBarControl:(id)arg1;
- (void)_updateIndexBarVisibility;
- (id)_pageSplitsDescription;
- (id)_pullToRefreshElement;
- (void)documentDidUpdate:(id)arg1 withTemplate:(id)arg2;
- (void)resourceLoader:(id)arg1 didLoadAllForReason:(long long)arg2;
- (_Bool)_tryToScrollToSectionAtIndexPath:(id)arg1;
- (long long)_globalIndexFromIndexPath:(id)arg1;
- (long long)_maxGlobalIndex;
- (id)_indexPathFromGlobalIndex:(long long)arg1;
- (void)resourceLoaderDidBeginLoading:(id)arg1;
- (id)_pageComponentsWithViewElements:(id)arg1;
- (_Bool)_shouldShowIndexBar;
- (id)_indexBarControlController;
- (long long)indexBarControlController:(id)arg1 numberOfEntryDescriptorsInSection:(long long)arg2;
- (id)indexBarControlController:(id)arg1 entryDescriptorAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInIndexBarControlController:(id)arg1;
- (void)indexBarControlController:(id)arg1 didSelectEntryDescriptorAtIndexPath:(id)arg2;
- (void)indexBarControlControllerDidSelectBeyondBottom:(id)arg1;
- (void)indexBarControlControllerDidSelectBeyondTop:(id)arg1;
- (void)indexBarEntryListControllerDidInvalidate:(id)arg1;
- (void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithTemplateElement:(id)arg1 layoutStyle:(long long)arg2;

@end
