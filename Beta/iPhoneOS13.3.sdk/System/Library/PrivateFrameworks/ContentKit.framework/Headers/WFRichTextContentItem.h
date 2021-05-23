/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFGenericFileContentItem.h>

@interface WFRichTextContentItem : WFGenericFileContentItem

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (_Bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (_Bool)typeRequiresMainThread:(id)arg1;
+ (id)attributedStringFromHTMLFile:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
+ (id)attributesDictionaryForType:(id)arg1;
+ (id)documentTypeForType:(id)arg1;
+ (id)htmlHeader;
+ (id)htmlFooter;
+ (id)normalizedHTMLDocumentFromHTML:(id)arg1;
+ (id)normalizedHTMLDocumentFromHTMLData:(id)arg1;

- (void)generateObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)generateFileRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (void)getFileRepresentationsForSerialization:(CDUnknownBlockType)arg1;
- (id)preferredFileType;
- (_Bool)canGenerateRepresentationForType:(id)arg1;
- (id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (_Bool)isContent;
- (void)generateRTFDRepresentation:(CDUnknownBlockType)arg1 fromAttributedString:(id)arg2 forType:(id)arg3;
- (void)generateDataRepresentation:(CDUnknownBlockType)arg1 fromAttributedString:(id)arg2 forType:(id)arg3;
- (void)generateAttributedString:(CDUnknownBlockType)arg1 fromFile:(id)arg2 forClass:(Class)arg3;

@end
