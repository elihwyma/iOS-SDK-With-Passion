/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIIndexBarEntryListController.h>

@class IKViewElementStyle, NSSet, SKUIIndexBarEntryListViewElement;

__attribute__((visibility("hidden")))
@interface SKUIIndexBarLocaleStandardEntryListController : SKUIIndexBarEntryListController

{
    SKUIIndexBarEntryListViewElement *_entryListViewElement;
    NSSet *_requiredVisibilitySet;
    IKViewElementStyle *_style;
}

- (id)entryDescriptorAtIndex:(long long)arg1;
- (long long)numberOfEntryDescriptors;
- (id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)arg1 returningRelativeSectionIndex:(out long long *)arg2;
- (void)reloadViewElementData;
- (id)initWithSKUIIndexBarEntryListViewElement:(id)arg1;

@end
