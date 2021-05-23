/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIProductPageTableSection.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSString, SKUIColorScheme, SKUILockupSwooshArtworkLoader, SKUILockupSwooshViewController, SKUIMissingItemLoader, SKUIResourceLoader, SKUISwooshPageComponent, UIViewController;

__attribute__((visibility("hidden")))
@interface SKUIProductPageTableSwooshSection : SKUIProductPageTableSection <Swift>

{
    CDUnknownBlockType _actionBlock;
    SKUILockupSwooshArtworkLoader *_artworkLoader;
    SKUIMissingItemLoader *_missingItemLoader;
    SKUIResourceLoader *_resourceLoader;
    SKUISwooshPageComponent *_swooshComponent;
    SKUILockupSwooshViewController *_swooshViewController;
}

@property (copy, nonatomic) CDUnknownBlockType actionBlock;
@property (retain, nonatomic) SKUIColorScheme *colorScheme;
@property (retain, nonatomic) SKUIResourceLoader *resourceLoader;
@property (nonatomic, readonly) UIViewController *swooshViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)headerViewForTableView:(id)arg1;
- (id)_missingItemLoader;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;
- (id)_swooshViewController;
- (id)_artworkLoader;
- (id)swoosh:(id)arg1 imageForCellAtIndex:(long long)arg2;
- (void)swoosh:(id)arg1 didSelectCellAtIndex:(long long)arg2;
- (id)initWithLockups:(id)arg1 title:(id)arg2;
- (id)initWithItems:(id)arg1 title:(id)arg2;

@end
