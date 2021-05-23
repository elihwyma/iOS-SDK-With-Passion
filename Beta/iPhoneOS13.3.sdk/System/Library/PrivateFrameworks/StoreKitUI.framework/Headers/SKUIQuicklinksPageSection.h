/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIStorePageSection.h>

@class NSString, SKUIQuicklinksPageComponent, SKUIQuicklinksViewController;

__attribute__((visibility("hidden")))
@interface SKUIQuicklinksPageSection : SKUIStorePageSection

{
    SKUIQuicklinksViewController *_quicklinksViewController;
}

@property (nonatomic, readonly) SKUIQuicklinksPageComponent *pageComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (long long)numberOfCells;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)_quicklinksViewController;
- (void)quicklinksViewController:(id)arg1 didSelectLink:(id)arg2 atIndex:(long long)arg3;

@end
