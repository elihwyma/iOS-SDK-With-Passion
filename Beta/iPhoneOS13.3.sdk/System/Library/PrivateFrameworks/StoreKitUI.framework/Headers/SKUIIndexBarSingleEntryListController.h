/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIIndexBarEntryListController.h>

@class SKUIIndexBarEntryDescriptor, SKUIIndexBarEntryViewElement, SKUIViewElement;

__attribute__((visibility("hidden")))
@interface SKUIIndexBarSingleEntryListController : SKUIIndexBarEntryListController

{
    SKUIIndexBarEntryDescriptor *_entryDescriptor;
    SKUIViewElement *_descriptiveViewElement;
    SKUIIndexBarEntryViewElement *_entryViewElement;
}

@property (nonatomic, readonly) SKUIIndexBarEntryViewElement *entryViewElement;

- (id)entryDescriptorAtIndex:(long long)arg1;
- (long long)numberOfEntryDescriptors;
- (_Bool)hidesIndexBar;
- (id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)arg1 returningRelativeSectionIndex:(out long long *)arg2;
- (_Bool)needsRootTargetViewElement;
- (void)reloadViewElementData;
- (id)initWithEntryViewElement:(id)arg1;

@end
