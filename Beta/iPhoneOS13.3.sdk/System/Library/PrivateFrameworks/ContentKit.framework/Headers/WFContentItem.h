/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

#import <ContentKit/Swift-Protocol.h>

@class NSExtensionItem, NSItemProvider, NSMutableDictionary, NSString, WFImage, WFRepresentation, WFType;

@interface WFContentItem : NSObject <Swift>

{
    NSMutableDictionary *_representationsByType;
    NSMutableDictionary *_subItemsByClass;
    WFType *_internalRepresentationType;
}

@property (nonatomic, readonly) NSItemProvider *itemProvider;
@property (nonatomic, readonly) NSExtensionItem *extensionItem;
@property (nonatomic, readonly) NSItemProvider *minimalItemProvider;
@property (nonatomic, readonly) NSExtensionItem *minimalExtensionItem;
@property (nonatomic, readonly) NSString *richListTitle;
@property (retain, nonatomic) NSMutableDictionary *representationsByType;
@property (retain, nonatomic) NSMutableDictionary *subItemsByClass;
@property (nonatomic, readonly) WFType *internalRepresentationType;
@property (nonatomic, readonly) WFRepresentation *internalRepresentation;
@property (nonatomic, readonly) WFImage *icon;
@property (nonatomic, readonly) NSString *name;

+ (_Bool)supportsSecureCoding;
+ (id)properties;
+ (id)itemWithObject:(id)arg1;
+ (id)typeDescription;
+ (id)propertyForName:(id)arg1;
+ (id)allProperties;
+ (id)supportedTypes;
+ (id)localizedTypeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (_Bool)canLowercaseTypeDescription;
+ (id)ownedPasteboardTypes;
+ (id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3;
+ (_Bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)filterRepresentationsForAllowedContent:(id)arg1;
+ (id)localizedPluralTypeDescription;
+ (id)filterDescription;
+ (id)localizedFilterDescription;
+ (id)pluralFilterDescription;
+ (id)localizedPluralFilterDescription;
+ (id)allSupportedTypes;
+ (id)supportedItemClasses;
+ (id)populateBadCoercionError:(id)arg1 withResponsibleComponent:(id)arg2;
+ (id)supportedPropertyForProperty:(id)arg1;
+ (_Bool)contentItems:(id)arg1 haveContentProperties:(id)arg2;
+ (id)itemWithFile:(id)arg1;
+ (_Bool)hasLibrary;
+ (void)runQuery:(id)arg1 withItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (_Bool)isAvailableOnPlatform:(long long)arg1;
+ (_Bool)supportedTypesMustBeDeterminedByInstance;
+ (_Bool)hasStringOutput;
+ (id)allSupportedItemClasses;
+ (id)supportedTypesExcludingInstanceSpecificTypes;
+ (id)pasteboardValueClasses;
+ (id)badCoercionErrorForItemClass:(Class)arg1;
+ (id)itemWithRepresentation:(id)arg1;
+ (id)badCoercionErrorForObjectClass:(Class)arg1;
+ (id)badCoercionErrorForType:(id)arg1;
+ (_Bool)errorIsBadCoercionError:(id)arg1;
+ (id)itemWithObject:(id)arg1 named:(id)arg2;
+ (id)itemWithRepresentation:(id)arg1 forType:(id)arg2;
+ (_Bool)isContentItemSubclass;
+ (_Bool)hasFileOutput;
+ (void)getContentItemFromSerializedItem:(id)arg1 sourceName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)itemFromSerializedItem:(id)arg1 withItemClass:(Class)arg2 forType:(id)arg3 nameIfKnown:(id)arg4 sourceName:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (CDUnknownBlockType)contentPropertySubstitutor;
+ (_Bool)supportedItemClassMustBeDeterminedByInstance:(Class)arg1;
+ (id)supportedItemClassesExcludingInstanceSpecificTypes;
+ (id)badCoercionErrorDefaultResponsibleComponent;
+ (id)badCoercionErrorWithReasonString:(id)arg1;
+ (id)badCoercionErrorForTypeDescription:(id)arg1 toTypeDescription:(id)arg2;
+ (id)badCoercionErrorForItemClasses:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)internalName;
- (id)supportedTypes;
- (id)copyWithName:(id)arg1;
- (void)getFileRepresentations:(CDUnknownBlockType)arg1 forType:(id)arg2;
- (void)getObjectRepresentations:(CDUnknownBlockType)arg1 forClass:(Class)arg2;
- (void)getObjectRepresentation:(CDUnknownBlockType)arg1 forClass:(Class)arg2;
- (id)ownedTypes;
- (id)outputTypes;
- (_Bool)getListSubtitle:(CDUnknownBlockType)arg1;
- (_Bool)getListAltText:(CDUnknownBlockType)arg1;
- (_Bool)getListThumbnail:(CDUnknownBlockType)arg1 forSize:(struct CGSize)arg2;
- (id)generateFileRepresentationsForType:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (void)generateObjectRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)generateObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)generateFileRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (void)generateFileRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (void)getPreferredFileExtension:(CDUnknownBlockType)arg1;
- (void)getPreferredFileSize:(CDUnknownBlockType)arg1;
- (id)additionalRepresentationsForSerialization;
- (void)getFileRepresentationsForSerialization:(CDUnknownBlockType)arg1;
- (_Bool)includesFileRepresentationInSerializedItem;
- (id)internalRepresentationForCopying;
- (id)preferredFileType;
- (id)preferredObjectType;
- (_Bool)canGenerateRepresentationForType:(id)arg1;
- (_Bool)cachesSupportedTypes;
- (id)objectForClass:(Class)arg1;
- (id)allSupportedTypes;
- (id)supportedItemClasses;
- (void)getFileRepresentation:(CDUnknownBlockType)arg1 forType:(id)arg2;
- (void)performCoercion:(id)arg1;
- (id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)getRepresentationsForType:(id)arg1 error:(id *)arg2;
- (id)fileRepresentationForType:(id)arg1;
- (id)copyWithName:(id)arg1 zone:(struct _NSZone *)arg2;
- (id)metadataForSerialization;
- (id)itemProviderForTypes:(id)arg1;
- (id)extensionItemWithItemProvider:(id)arg1;
- (_Bool)canPerformCoercion:(id)arg1;
- (_Bool)isCoercibleToItemClass:(Class)arg1;
- (_Bool)isCoercibleToItemClasses:(id)arg1;
- (void)getSerializedItem:(CDUnknownBlockType)arg1;
- (void)getTitle:(CDUnknownBlockType)arg1;
- (id)intermediaryTypesForCoercionToItemClass:(Class)arg1;
- (void)getRepresentationsForType:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_getRepresentationsForType:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)getRepresentationsForType:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)generateRepresentationsForType:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)generateRepresentationsForType:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (_Bool)hasStringOutput;
- (_Bool)canEncodeWithCoder:(id)arg1;
- (void)generateFirstLevelSubItemsForItemClass:(Class)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)generateFirstLevelSubItemsForItemClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (void)generateSubItemsForItemClasses:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)generateSubItemsForItemClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (id)typeForCoercionRequest:(id)arg1;
- (_Bool)coercionOptions:(id)arg1 allowCoercionsToType:(id)arg2;
- (_Bool)coercionOptions:(id)arg1 allowCoercionsToItemClass:(Class)arg2;
- (void)coerceToItemClasses:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)forceCoerceToItemClasses:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)itemsByCoercingToItemClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (id)nativePasteboardTypeForObjectRepresentationOfClass:(Class)arg1;
- (id)preferredTypeOfClass:(Class)arg1;
- (_Bool)canGenerateIntermediaryRepresentationForItemClass:(Class)arg1;
- (id)allSupportedItemClasses;
- (id)initWithRepresentation:(id)arg1 forType:(id)arg2;
- (id)representationsForType:(id)arg1;
- (id)representationForType:(id)arg1;
- (void)setRepresentations:(id)arg1 forType:(id)arg2;
- (id)fileRepresentationsForType:(id)arg1;
- (void)setFileRepresentations:(id)arg1 forType:(id)arg2;
- (id)objectRepresentationsForClass:(Class)arg1;
- (id)objectRepresentationForClass:(Class)arg1;
- (void)setObjectRepresentations:(id)arg1 forClass:(Class)arg2;
- (id)objectsForClass:(Class)arg1;
- (void)setSubItems:(id)arg1 forClass:(Class)arg2;
- (id)subItemsForClass:(Class)arg1;
- (id)subItemForClass:(Class)arg1;
- (void)coerceToItemClasses:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)coerceToItemClass:(Class)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
