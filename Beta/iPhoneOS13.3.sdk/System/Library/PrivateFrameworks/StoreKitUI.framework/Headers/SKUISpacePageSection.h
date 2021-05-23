/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIStorePageSection.h>

@class SKUISpacePageComponent;

__attribute__((visibility("hidden")))
@interface SKUISpacePageSection : SKUIStorePageSection

@property (nonatomic, readonly) SKUISpacePageComponent *pageComponent;

- (id)initWithPageComponent:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (long long)numberOfCells;

@end
