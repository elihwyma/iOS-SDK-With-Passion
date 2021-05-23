/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIProductPageTableSection.h>

@class NSArray, NSMapTable, NSString, SKUIMissingItemLoader, SKUIProductPageTableHeaderView, SKUIProductPageTableSeparatorView, SKUIResourceLoader, SKUIStyledImageDataConsumer, UIImage;

__attribute__((visibility("hidden")))
@interface SKUIProductPageTableLockupsSection : SKUIProductPageTableSection

{
    NSMapTable *_artworkRequests;
    SKUIProductPageTableSeparatorView *_footerView;
    SKUIProductPageTableHeaderView *_headerView;
    NSArray *_lockups;
    SKUIMissingItemLoader *_missingItemLoader;
    UIImage *_placeholderImage;
    SKUIStyledImageDataConsumer *_productImageDataConsumer;
    SKUIResourceLoader *_resourceLoader;
}

@property (retain, nonatomic) SKUIResourceLoader *resourceLoader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (long long)numberOfRowsInSection;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)headerViewForTableView:(id)arg1;
- (id)footerViewForTableView:(id)arg1;
- (id)_missingItemLoader;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;
- (id)initWithLockups:(id)arg1 title:(id)arg2;
- (id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2;
- (id)_productImageForItem:(id)arg1;

@end
