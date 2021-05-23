/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIItem.h>

@class NSArray, NSMutableDictionary, SKUIScreenshot;

@interface SKUISearchItem : SKUIItem

{
    SKUIScreenshot *_primaryScreenshot;
    NSArray *_screenshots;
    NSArray *_childItemIdentifiers;
    NSMutableDictionary *_loadedChildItems;
}

@property (nonatomic, readonly) SKUIScreenshot *primaryScreenshot;
@property (nonatomic, readonly) NSArray *screenshots;

- (id)initWithLookupDictionary:(id)arg1;
- (id)childItemIdentifiers;
- (id)loadedChildItems;
- (id)childItemForIdentifier:(id)arg1;
- (void)setChildItem:(id)arg1 forIdentifier:(id)arg2;

@end
