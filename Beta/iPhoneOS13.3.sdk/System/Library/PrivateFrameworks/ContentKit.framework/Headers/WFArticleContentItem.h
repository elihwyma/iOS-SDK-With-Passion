/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFContentItem.h>

@class WFArticle;

@interface WFArticleContentItem : WFContentItem

@property (nonatomic, readonly) WFArticle *article;

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (id)attributedStringWithHTML:(id)arg1 named:(id)arg2;
+ (id)fileWithHTML:(id)arg1 named:(id)arg2;
+ (_Bool)supportedTypesMustBeDeterminedByInstance;

- (_Bool)getListSubtitle:(CDUnknownBlockType)arg1;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (void)generateObjectRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (_Bool)canGenerateRepresentationForType:(id)arg1;
- (id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id *)arg3;

@end
