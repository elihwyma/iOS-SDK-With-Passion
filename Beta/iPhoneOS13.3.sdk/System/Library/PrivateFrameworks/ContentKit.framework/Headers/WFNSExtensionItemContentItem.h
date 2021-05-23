/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFContentItem.h>

@class NSArray, NSExtensionItem;

@interface WFNSExtensionItemContentItem : WFContentItem

{
    NSArray *_extensionSubItems;
}

@property (retain, nonatomic) NSArray *extensionSubItems;
@property (nonatomic, readonly) NSExtensionItem *extensionItem;

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (_Bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;

- (id)name;
- (id)itemProviders;
- (id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (_Bool)canGenerateRepresentationForType:(id)arg1;
- (_Bool)cachesSupportedTypes;
- (void)coerceToItemClasses:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)preloadImportantItemsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)itemProviderItems;
- (id)extensionItemName;
- (_Bool)itemProvidersSupportType:(id)arg1;

@end
