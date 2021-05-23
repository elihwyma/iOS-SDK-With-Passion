/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUItemTableViewController.h>

#import <iTunesStoreUI/Swift-Protocol.h>

@class NSNumber, NSString, SUStructuredPage, UILabel;

@interface SUStructuredPageViewController : SUItemTableViewController <Swift>

{
    Class _dataSourceClass;
    UILabel *_noItemsLabel;
    SUStructuredPage *_structuredPage;
}

@property (retain, nonatomic) Class dataSourceClass;
@property (retain, nonatomic) SUStructuredPage *structuredPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSessionDuration;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentage;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;

- (id)init;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)reloadData;
- (void)viewDidAppear:(_Bool)arg1;
- (struct CGRect)documentBounds;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)setSkLoading:(_Bool)arg1;
- (id)storePageProtocol;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (_Bool)hasDisplayableContent;
- (_Bool)loadMoreWithURL:(id)arg1;
- (_Bool)canSelectRowAtIndexPath:(id)arg1;
- (_Bool)handleSelectionForIndexPath:(id)arg1 tapCount:(long long)arg2;
- (void)bannerCell:(id)arg1 tappedButtonAtIndex:(long long)arg2;
- (_Bool)_handleLoadMoreForIndexPath:(id)arg1;
- (_Bool)_gotoURLForItem:(id)arg1 withURLIndex:(long long)arg2;
- (void)_loadMoreWithURL:(id)arg1;
- (id)newDataSource;
- (void)_reloadNoItemsLabel;
- (void)_reloadTermsAndConditions;
- (void)_loadMoreOperation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)_reloadLoadMoreCellAtIndexPath:(id)arg1;
- (id)newNoItemsOverlayLabel;
- (id)newTermsAndConditionsFooter;
- (id)viewControllerForPresentingAccountAlertControllerFromTermsAndConditionsView:(id)arg1;

@end
