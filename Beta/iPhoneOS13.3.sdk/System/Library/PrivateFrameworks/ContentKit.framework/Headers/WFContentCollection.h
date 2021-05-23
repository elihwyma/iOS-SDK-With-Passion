/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

#import <ContentKit/Swift-Protocol.h>

@class NSArray, NSLock, NSMutableArray, WFCoercionOptions;

@interface WFContentCollection : NSObject <Swift>

{
    WFCoercionOptions *_defaultCoercionOptions;
    NSMutableArray *_mutableItems;
    NSLock *_itemWriteLock;
}

@property (retain, nonatomic) NSMutableArray *mutableItems;
@property (retain, nonatomic) NSLock *itemWriteLock;
@property (nonatomic, readonly) long long numberOfItems;
@property (nonatomic, readonly) NSArray *items;
@property (retain, nonatomic) WFCoercionOptions *defaultCoercionOptions;

+ (_Bool)supportsSecureCoding;
+ (id)collectionWithItems:(id)arg1;
+ (void)generateCollectionFromPasteboard:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)generateCollectionFromDragItems:(id)arg1 allowedItemClasses:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)getContentItemsForPasteboardItems:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)removeItem:(id)arg1;
- (void)addFile:(id)arg1;
- (void)addItem:(id)arg1;
- (id)extensionItems;
- (void)getFileRepresentations:(CDUnknownBlockType)arg1 forType:(id)arg2;
- (void)getStringRepresentation:(CDUnknownBlockType)arg1;
- (void)getObjectRepresentations:(CDUnknownBlockType)arg1 forClass:(Class)arg2;
- (id)collectionByFilteringToItemClass:(Class)arg1 excludedItems:(id *)arg2;
- (void)getObjectRepresentation:(CDUnknownBlockType)arg1 forClass:(Class)arg2;
- (void)generateCollectionByCoercingToItemClasses:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getFileRepresentation:(CDUnknownBlockType)arg1 forType:(id)arg2;
- (void)generateCollectionByCoercingToItemClass:(Class)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getStringRepresentations:(CDUnknownBlockType)arg1;
- (void)performCoercion:(id)arg1;
- (void)copyToPasteboard:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)collectionByFilteringItemsWithBlock:(CDUnknownBlockType)arg1 excludedItems:(id *)arg2;
- (void)generateCollectionByEvaluatingQuery:(id)arg1 forContentItemClass:(Class)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)minimalExtensionItems;
- (id)initWithDefaultCoercionOptions:(id)arg1;
- (id)initWithItems:(id)arg1 defaultCoercionOptions:(id)arg2;
- (void)addObject:(id)arg1 named:(id)arg2;
- (void)enumerateObjectRepresentations:(CDUnknownBlockType)arg1 forClass:(Class)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)enumerateFileRepresentations:(CDUnknownBlockType)arg1 forType:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)canPerformCoercion:(id)arg1;
- (id)effectiveCoercionOptionsForRequest:(id)arg1;
- (void)getObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)getFileRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (void)generateCollectionByCoercingToItemClasses:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)isCoercibleToItemClass:(Class)arg1;
- (_Bool)isCoercibleToItemClasses:(id)arg1;

@end
