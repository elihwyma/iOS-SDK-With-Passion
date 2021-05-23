/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNPhotoPickerProviderItem, NSArray, NSMutableDictionary, NSString;

@protocol CNPhotoPickerProviderGroupDelegate, CNScheduler;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerProviderGroup : NSObject

{
    _Bool _allowAddItem;
    _Bool _showCircleMask;
    long long _groupType;
    id <CNPhotoPickerProviderGroupDelegate> _delegate;
    unsigned long long _itemsPerRow;
    NSArray *_providers;
    NSArray *_displayItems;
    NSArray *_addedItems;
    NSArray *_removedItems;
    NSMutableDictionary *_itemsGroupedByProvider;
    NSArray *_availablePaddingItems;
    NSArray *_paddingItems;
    CNPhotoPickerProviderItem *_addItem;
    id <CNScheduler> _workQueue;
    id <CNScheduler> _callbackQueue;
}

@property (retain, nonatomic) NSArray *providers;
@property (retain, nonatomic) NSArray *displayItems;
@property (retain, nonatomic) NSArray *addedItems;
@property (retain, nonatomic) NSArray *removedItems;
@property (retain, nonatomic) NSMutableDictionary *itemsGroupedByProvider;
@property (retain, nonatomic) NSArray *availablePaddingItems;
@property (retain, nonatomic) NSArray *paddingItems;
@property (retain, nonatomic) CNPhotoPickerProviderItem *addItem;
@property (nonatomic, readonly) id <CNScheduler> workQueue;
@property (nonatomic, readonly) id <CNScheduler> callbackQueue;
@property (nonatomic, readonly) long long groupType;
@property (nonatomic, readonly) _Bool allowAddItem;
@property (nonatomic, readonly) _Bool showCircleMask;
@property (weak, nonatomic) id <CNPhotoPickerProviderGroupDelegate> delegate;
@property (nonatomic) unsigned long long itemsPerRow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)suggestionsGroupWithProviders:(id)arg1 environment:(id)arg2 allowAddItem:(_Bool)arg3;
+ (id)animojiGroupWithProviders:(id)arg1 environment:(id)arg2 allowAddItem:(_Bool)arg3;

- (long long)numberOfItems;
- (void)providerItemDidUpdate:(id)arg1;
- (id)initWithProviders:(id)arg1 groupType:(long long)arg2 environment:(id)arg3 allowAddItem:(_Bool)arg4;
- (void)loadProvidersItemsForSize:(struct CGSize)arg1 itemsPerRow:(double)arg2 scale:(double)arg3 RTL:(_Bool)arg4;
- (id)itemsForProviderIdentifier:(id)arg1;
- (void)reloadDisplayItemsNotifyDelegate:(_Bool)arg1;
- (void)prepareDisplayItems:(id)arg1;
- (id)addSymbolImageName;
- (id)providerItemAtIndex:(long long)arg1;
- (long long)addProviderItem:(id)arg1;
- (long long)removeProviderItem:(id)arg1;

@end
