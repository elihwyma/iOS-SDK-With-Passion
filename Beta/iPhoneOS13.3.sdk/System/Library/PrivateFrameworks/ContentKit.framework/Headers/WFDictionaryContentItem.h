/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFGenericFileContentItem.h>

@class NSDictionary;

@interface WFDictionaryContentItem : WFGenericFileContentItem

@property (nonatomic, readonly) NSDictionary *dictionary;

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (id)itemsWithPropertyListObject:(id)arg1 preferredDictionaryType:(id)arg2;
+ (id)itemsWithJSONFileRepresentation:(id)arg1;
+ (id)itemsWithPlistFileRepresentation:(id)arg1;
+ (id)itemsWithPropertyListObject:(id)arg1 preferredDictionaryType:(id)arg2 topLevelName:(id)arg3;

- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (id)preferredFileType;
- (id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id *)arg3;

@end
