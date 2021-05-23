/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSArray, NSString, SKUIColorScheme, SKUIQuicklinksView, UICollectionView;

@protocol SKUIQuicklinksViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIQuicklinksViewController : UIViewController <Swift>

{
    UICollectionView *_collectionView;
    SKUIColorScheme *_colorScheme;
    id <SKUIQuicklinksViewControllerDelegate> _delegate;
    NSArray *_links;
    SKUIQuicklinksView *_quicklinksView;
}

@property (weak, nonatomic) id <SKUIQuicklinksViewControllerDelegate> delegate;
@property (nonatomic, readonly) NSArray *indexPathsForVisibleItems;
@property (copy, nonatomic) NSArray *links;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setTitle:(id)arg1;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)_numberOfRows;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (struct CGRect)frameForLinkAtIndex:(long long)arg1;

@end
