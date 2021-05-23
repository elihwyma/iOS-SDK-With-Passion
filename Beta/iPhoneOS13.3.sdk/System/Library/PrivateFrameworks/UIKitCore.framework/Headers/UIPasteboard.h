/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSURL, UIColor, UIImage;

@interface UIPasteboard : NSObject

@property (copy, nonatomic, readonly) NSArray *availableTypes;
@property (nonatomic, readonly) long long _changeCountIgnoringPinningActivity;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly, getter=isPersistent) _Bool persistent;
@property (nonatomic, readonly) long long changeCount;
@property (copy, nonatomic) NSArray *itemProviders;
@property (nonatomic, readonly) NSArray *pasteboardTypes;
@property (nonatomic, readonly) long long numberOfItems;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSString *string;
@property (copy, nonatomic) NSArray *strings;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSArray *URLs;
@property (copy, nonatomic) UIImage *image;
@property (copy, nonatomic) NSArray *images;
@property (copy, nonatomic) UIColor *color;
@property (copy, nonatomic) NSArray *colors;
@property (nonatomic, readonly) _Bool hasStrings;
@property (nonatomic, readonly) _Bool hasURLs;
@property (nonatomic, readonly) _Bool hasImages;
@property (nonatomic, readonly) _Bool hasColors;

+ (id)generalPasteboard;
+ (void)_pinItemProviders:(id)arg1 forPasteboardNamed:(id)arg2 withExpirationDate:(id)arg3;
+ (void)_clearPinnedItemProvidersForPasteboardNamed:(id)arg1;
+ (id)_pasteboardWithName:(id)arg1 create:(_Bool)arg2;
+ (id)_pasteboardWithUniqueName;
+ (void)removePasteboardWithName:(id)arg1;
+ (id)pasteboardWithName:(id)arg1 create:(_Bool)arg2;
+ (id)pasteboardWithUniqueName;

- (void)setName:(id)arg1;
- (void)setPersistent:(_Bool)arg1;
- (void)_pinItemProviders:(id)arg1 expirationDate:(id)arg2;
- (void)_clearPinnedItemProviders;
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
- (_Bool)_hasStrings;
- (void)setItemProviders:(id)arg1 options:(id)arg2;
- (void)setItemProviders:(id)arg1 localOnly:(_Bool)arg2 expirationDate:(id)arg3;
- (void)setObjects:(id)arg1 options:(id)arg2;
- (void)setObjects:(id)arg1;
- (void)setObjects:(id)arg1 localOnly:(_Bool)arg2 expirationDate:(id)arg3;
- (id)itemProvidersForInstantiatingObjectsOfClass:(Class)arg1;
- (_Bool)canInstantiateObjectsOfClass:(Class)arg1;

@end
