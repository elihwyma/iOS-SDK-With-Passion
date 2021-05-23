/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIIndexBarEntryListController.h>

@class SKUIDynamicPageSectionIndexMapper, SKUIIndexBarEntryListViewElement, SKUIIndexBarEntryViewElement, SKUIViewElement;

@protocol SKUIEntityProviding;

__attribute__((visibility("hidden")))
@interface SKUIIndexBarDynamicElementEntryListController : SKUIIndexBarEntryListController

{
    SKUIDynamicPageSectionIndexMapper *_dynamicIndexMapper;
    id <SKUIEntityProviding> _entityProvider;
    SKUIIndexBarEntryViewElement *_indexBarEntryViewElement;
    SKUIViewElement *_templateElement;
    SKUIIndexBarEntryListViewElement *_entryListViewElement;
}

@property (nonatomic, readonly) SKUIIndexBarEntryListViewElement *entryListViewElement;

- (void)dealloc;
- (void)_entityProviderDidInvalidateNotification:(id)arg1;
- (id)entryDescriptorAtIndex:(long long)arg1;
- (long long)numberOfEntryDescriptors;
- (_Bool)hidesIndexBar;
- (id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)arg1 returningRelativeSectionIndex:(out long long *)arg2;
- (_Bool)needsRootTargetViewElement;
- (id)rootTargetIndexBarEntryID;
- (void)setRootTargetViewElement:(id)arg1;
- (void)reloadViewElementData;
- (id)initWithEntryListViewElement:(id)arg1;

@end
