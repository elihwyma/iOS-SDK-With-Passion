/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPasteboard.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIConcretePasteboard : UIPasteboard

{
    NSString *_name;
}

@property (copy, nonatomic) NSString *name;

+ (id)generalPasteboard;
+ (void)_pinItemProviders:(id)arg1 forPasteboardNamed:(id)arg2 withExpirationDate:(id)arg3;
+ (void)_clearPinnedItemProvidersForPasteboardNamed:(id)arg1;
+ (id)_pasteboardWithName:(id)arg1 create:(_Bool)arg2;
+ (id)_pasteboardWithUniqueName;
+ (void)removePasteboardWithName:(id)arg1;
+ (id)pasteboardWithName:(id)arg1 create:(_Bool)arg2;
+ (id)pasteboardWithUniqueName;
+ (id)_pasteboardNamed:(id)arg1 createIfNotFound:(_Bool)arg2;

- (id)string;
- (void)setString:(id)arg1;
- (void)setURLs:(id)arg1;
- (id)URLs;
- (long long)changeCount;
- (void)setURL:(id)arg1;
- (id)URL;
- (id)color;
- (id)image;
- (void)setImage:(id)arg1;
- (id)images;
- (void)setColor:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (void)setImages:(id)arg1;
- (_Bool)isPersistent;
- (void)setPersistent:(_Bool)arg1;
- (void)setColors:(id)arg1;
- (id)itemProviders;
- (void)setItemProviders:(id)arg1;
- (long long)numberOfItems;
- (void)_pinItemProviders:(id)arg1 expirationDate:(id)arg2;
- (void)_clearPinnedItemProviders;
- (id)availableTypes;
- (_Bool)hasStrings;
- (long long)_changeCountIgnoringPinningActivity;
- (id)pasteboardTypes;
- (_Bool)containsPasteboardTypes:(id)arg1;
- (id)dataForPasteboardType:(id)arg1;
- (id)valueForPasteboardType:(id)arg1;
- (void)setValue:(id)arg1 forPasteboardType:(id)arg2;
- (void)setData:(id)arg1 forPasteboardType:(id)arg2;
- (id)pasteboardTypesForItemSet:(id)arg1;
- (_Bool)containsPasteboardTypes:(id)arg1 inItemSet:(id)arg2;
- (id)itemSetWithPasteboardTypes:(id)arg1;
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (void)addItems:(id)arg1;
- (void)setItems:(id)arg1 options:(id)arg2;
- (id)strings;
- (void)setStrings:(id)arg1;
- (id)colors;
- (_Bool)hasURLs;
- (_Bool)hasImages;
- (_Bool)hasColors;
- (void)setItemProviders:(id)arg1 options:(id)arg2;
- (void)setItemProviders:(id)arg1 localOnly:(_Bool)arg2 expirationDate:(id)arg3;
- (void)setObjects:(id)arg1 options:(id)arg2;
- (void)setObjects:(id)arg1;
- (void)setObjects:(id)arg1 localOnly:(_Bool)arg2 expirationDate:(id)arg3;
- (id)itemProvidersForInstantiatingObjectsOfClass:(Class)arg1;
- (_Bool)canInstantiateObjectsOfClass:(Class)arg1;
- (_Bool)_pasteboardCacheQueue_saveItemCollection:(id)arg1 currentNotificationState:(unsigned long long)arg2 outNewNotificationState:(unsigned long long *)arg3;
- (_Bool)_pasteboardCacheQueue_isPersistent;
- (id)_initWithName:(id)arg1;
- (_Bool)_pasteboardCacheQueue_setPersistent:(_Bool)arg1 currentNotificationState:(unsigned long long)arg2 outNewNotificationState:(unsigned long long *)arg3;
- (void)_setPersistent:(_Bool)arg1;
- (void)_setItemsAndSave:(id)arg1 options:(id)arg2 coerceStringsToURLs:(_Bool)arg3;
- (void)_setItemsAndSave:(id)arg1 options:(id)arg2;
- (void)_pinItemCollection:(id)arg1;
- (void)_saveItemCollection:(id)arg1;
- (void)_sendPasteboardTypesChangedNotificationOldTypes:(id)arg1 newTypes:(id)arg2;
- (id)_itemsCoercibleToClass:(Class)arg1;
- (void)_setItemsAndSaveFromObjects:(id)arg1 ofClass:(Class)arg2;

@end
