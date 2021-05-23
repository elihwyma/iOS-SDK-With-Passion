/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VideosExtrasTemplateViewController.h>

@class NSArray, NSIndexPath, NSMapTable, NSString, UIImageView, UITableView, VideosExtrasViewElementViewController;

__attribute__((visibility("hidden")))
@interface VideosExtrasListTemplateViewController : VideosExtrasTemplateViewController

{
    UITableView *_tableView;
    _Bool _tableViewLeft;
    UIImageView *_vignetteView;
    _Bool _relatedContentEmbedded;
    NSArray *_masterViewConstraints;
    NSArray *_detailViewConstraints;
    NSMapTable *_relatedContentViewControllerMap;
    NSIndexPath *_autohighlightIndexPath;
    VideosExtrasViewElementViewController *_relatedContentViewController;
}

@property (retain, nonatomic) VideosExtrasViewElementViewController *relatedContentViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)relatedContentViewControllerForElement:(id)arg1;

- (void)dealloc;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)templateElement;
- (_Bool)showsPlaceholder;
- (void)_prepareLayout;
- (_Bool)shouldUpdateByReplacingViewControllerWithTemplate:(id)arg1;
- (id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;
- (void)_configureBannerWithElement:(id)arg1;
- (void)_updateForTemplate:(id)arg1;
- (void)_updateRelatedContent:(id)arg1 forListItem:(id)arg2;
- (void)_embedRelatedContentViewController;
- (void)_unembedRelatedContent;
- (void)_pushRelatedViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_setDetailContraints;
- (void)_setRelatedContentEmbedded:(_Bool)arg1;
- (void)_addConstraintsToTableView:(id)arg1;
- (void)_configureVignette:(_Bool)arg1;
- (void)_setNavigationConstraints;

@end
