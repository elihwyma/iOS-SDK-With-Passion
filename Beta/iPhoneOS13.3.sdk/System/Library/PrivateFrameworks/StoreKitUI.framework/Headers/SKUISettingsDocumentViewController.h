/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewController.h>

@class NSString, SKUIResourceLoader, SKUISettingsContext, SKUISettingsEditTransaction, SKUISettingsGroupsDescription, SKUISettingsTemplateViewElement, SKUIViewElementLayoutContext, SKUIViewElementTextLayoutCache, UIBarButtonItem, UITableView;

__attribute__((visibility("hidden")))
@interface SKUISettingsDocumentViewController : SKUIViewController

{
    UIBarButtonItem *_barButtonItemCancel;
    UIBarButtonItem *_barButtonItemDone;
    UIBarButtonItem *_barButtonItemEdit;
    SKUISettingsEditTransaction *_editTransaction;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUIResourceLoader *_resourceLoader;
    SKUISettingsContext *_settingsContext;
    SKUISettingsGroupsDescription *_settingsGroupsDescription;
    UITableView *_tableView;
    SKUISettingsTemplateViewElement *_templateElement;
    SKUIViewElementTextLayoutCache *_textLayoutCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_settingsGroupsFromTemplateElement:(id)arg1 withDelegate:(id)arg2 settingsContext:(id)arg3;
+ (double)_heightThatFitsWidth:(double)arg1 withSettingsHeaderFooterDescription:(id)arg2 context:(id)arg3;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_reloadData;
- (id)_tableView;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_invalidateLayout;
- (id)_resourceLoader;
- (void)_cancelButtonAction:(id)arg1;
- (id)_layoutContext;
- (void)documentDidUpdate:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)_textLayoutCache;
- (void)_doneButtonAction:(id)arg1;
- (void)settingsDocumentViewDidChangeTintColor:(id)arg1;
- (id)initWithTemplateElement:(id)arg1 clientContext:(id)arg2;
- (void)_deselectItemsAnimated:(_Bool)arg1;
- (id)_viewForSettingsHeaderFooterDescription:(id)arg1;
- (void)_showEditBarButtonItemAnimated:(_Bool)arg1;
- (id)_barButtonItemDone;
- (void)_showEditingBarButtonItemsEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_editButtonAction:(id)arg1;
- (id)_barButtonItemEdit;
- (void)_showBarItemLeft:(id)arg1 right:(id)arg2 animated:(_Bool)arg3;
- (id)_barButtonItemCancel;
- (id)_dequeueHeaderFooterViewWithReuseIdentifier:(id)arg1;
- (void)settingsEditTransactionDidCompleteTransaction:(id)arg1;
- (void)settingsEditTransactionDidFailTransaction:(id)arg1;
- (void)settingsEditTransactionWillBeginTransaction:(id)arg1;
- (void)settingsEditTransactionWillCommitTransaction:(id)arg1;
- (id)owningViewControllerForSettingsGroupsDescription:(id)arg1;
- (void)settingsGroupsDescription:(id)arg1 deletedSettingAtIndexPath:(id)arg2;
- (void)settingsGroupsDescription:(id)arg1 deletedSettingsGroupAtIndex:(unsigned long long)arg2;
- (void)settingsGroupsDescription:(id)arg1 didUpdateSettingsDescription:(id)arg2;
- (void)settingsGroupsDescription:(id)arg1 dismissViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)settingsGroupsDescription:(id)arg1 presentViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)settingsGroupsDescription:(id)arg1 viewForSettingAtIndexPath:(id)arg2;
- (void)settingsGroupsDescriptionDidUpdateValidity:(id)arg1;
- (void)settingsEditTransaction:(id)arg1 isValid:(_Bool)arg2;

@end
