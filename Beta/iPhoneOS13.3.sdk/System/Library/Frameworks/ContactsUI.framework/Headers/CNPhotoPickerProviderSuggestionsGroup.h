/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPhotoPickerProviderGroup.h>

__attribute__((visibility("hidden")))
@interface CNPhotoPickerProviderSuggestionsGroup : CNPhotoPickerProviderGroup

- (void)providerItemDidUpdate:(id)arg1;
- (id)itemsForProviderIdentifier:(id)arg1;
- (void)prepareDisplayItems:(id)arg1;
- (id)addSymbolImageName;
- (long long)addProviderItem:(id)arg1;
- (long long)removeProviderItem:(id)arg1;
- (id)initWithProviders:(id)arg1 environment:(id)arg2 allowAddItem:(_Bool)arg3;
- (id)providerOfClass:(Class)arg1;
- (long long)indexForDefaultMonogram;
- (id)dedupedSuggestionItemsGroupedByProvider;
- (id)providerItems:(id)arg1 withMaxRecentsAndMonogramsCount:(unsigned long long)arg2;
- (id)paddedDisplayItems:(id)arg1;
- (unsigned long long)maxRecentsAndMonogramsCount;
- (id)defaultMonogramItem;

@end
