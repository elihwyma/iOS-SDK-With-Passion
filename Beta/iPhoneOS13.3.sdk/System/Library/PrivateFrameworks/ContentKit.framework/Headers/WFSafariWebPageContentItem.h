/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFContentItem.h>

@class WFSafariWebPage;

@interface WFSafariWebPageContentItem : WFContentItem

@property (nonatomic, readonly) WFSafariWebPage *webPage;

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (_Bool)canLowercaseTypeDescription;
+ (id)ownedPasteboardTypes;
+ (_Bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;

- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (void)generateObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (_Bool)canGenerateRepresentationForType:(id)arg1;
- (id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)getSerializedItem:(CDUnknownBlockType)arg1;

@end
