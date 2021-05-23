/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFContentItem.h>

@interface WFGenericFileContentItem : WFContentItem

+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3;

- (void)generateObjectRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)generateFileRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (_Bool)canGenerateRepresentationForType:(id)arg1;
- (_Bool)isContent;

@end
