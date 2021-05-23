/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@protocol WFContentItemClass

+ (unsigned short)typeDescription;
+ (unsigned short)localizedTypeDescription;
+ (unsigned short)ownedTypes;
+ (unsigned short)outputTypes;
+ (unsigned short)contentCategories;
+ (unsigned short)pluralTypeDescription;
+ (unsigned short)countDescription;
+ (unsigned short)localizedPluralTypeDescription;
+ (unsigned short)filterDescription;
+ (unsigned short)localizedFilterDescription;
+ (unsigned short)pluralFilterDescription;
+ (unsigned short)localizedPluralFilterDescription;

+ (unsigned short)propertyBuilders;
+ (unsigned short)ownedPasteboardTypes;
+ (unsigned short)itemWithSerializedItem:forType:named: /* Error: Ran out of types for this method. */;
+ (unsigned short)supportedTypeMustBeDeterminedByInstance: /* Error: Ran out of types for this method. */;
+ (unsigned short)filterRepresentationsForAllowedContent: /* Error: Ran out of types for this method. */;

- (unsigned short)generateFileRepresentationsForType:options:error: /* Error: Ran out of types for this method. */;
- (unsigned short)generateObjectRepresentationsForClass:options:error: /* Error: Ran out of types for this method. */;
- (unsigned short)generateFileRepresentationForType:error: /* Error: Ran out of types for this method. */;
- (unsigned short)generateObjectRepresentationForClass:options:error: /* Error: Ran out of types for this method. */;
- (unsigned short)generateObjectRepresentation:options:forClass: /* Error: Ran out of types for this method. */;
- (unsigned short)generateObjectRepresentations:options:forClass: /* Error: Ran out of types for this method. */;
- (unsigned short)generateFileRepresentation:options:forType: /* Error: Ran out of types for this method. */;
- (unsigned short)generateFileRepresentations:options:forType: /* Error: Ran out of types for this method. */;
- (unsigned short)getPreferredFileExtension: /* Error: Ran out of types for this method. */;
- (unsigned short)getPreferredFileSize: /* Error: Ran out of types for this method. */;
- (unsigned short)additionalRepresentationsForSerialization;
- (unsigned short)getFileRepresentationsForSerialization: /* Error: Ran out of types for this method. */;
- (unsigned short)includesFileRepresentationInSerializedItem;
- (unsigned short)internalRepresentationForCopying;
- (unsigned short)preferredFileType;
- (unsigned short)preferredObjectType;
- (unsigned short)canGenerateRepresentationForType: /* Error: Ran out of types for this method. */;
- (unsigned short)cachesSupportedTypes;

@end
