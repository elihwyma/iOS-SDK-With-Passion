/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFGenericFileContentItem.h>

@class WFContact;

@interface WFContactContentItem : WFGenericFileContentItem

@property (nonatomic, readonly) WFContact *contact;

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (_Bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (_Bool)hasLibrary;
+ (void)runQuery:(id)arg1 withItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)cachedContactGroups;

- (_Bool)getListSubtitle:(CDUnknownBlockType)arg1;
- (_Bool)getListThumbnail:(CDUnknownBlockType)arg1 forSize:(struct CGSize)arg2;
- (id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (_Bool)canGenerateRepresentationForType:(id)arg1;
- (id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)objectRepresentationsFromLabeledValues:(id)arg1;
- (id)unnamedObjectRepresentationsFromLabeledValues:(id)arg1;

@end
