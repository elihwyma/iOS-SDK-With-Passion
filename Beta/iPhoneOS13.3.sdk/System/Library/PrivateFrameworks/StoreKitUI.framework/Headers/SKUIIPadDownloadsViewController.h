/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSArray, NSString, SKUIClientContext, UICollectionView, _UIContentUnavailableView;

@protocol SKUIDownloadsChildViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIIPadDownloadsViewController : UIViewController <Swift>

{
    UICollectionView *_collectionView;
    NSArray *_downloads;
    _UIContentUnavailableView *_noContentView;
    id <SKUIDownloadsChildViewControllerDelegate> _delegate;
    _Bool _editing;
    SKUIClientContext *_clientContext;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (retain, nonatomic) NSArray *downloads;
@property (weak, nonatomic) id <SKUIDownloadsChildViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)_cancelAction:(id)arg1;
- (void)_reload;
- (void)reloadDownloadsAtIndexes:(id)arg1;
- (void)_reloadLayout;
- (void)_reloadNavigationItem;
- (void)_editAction:(id)arg1;
- (void)_deleteAction:(id)arg1;

@end
