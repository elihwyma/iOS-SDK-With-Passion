/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFGenericFileContentItem.h>

@interface WFPDFContentItem : WFGenericFileContentItem

+ (void)initialize;
+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (id)itemWithPrintFormatters:(id)arg1 names:(id)arg2;

- (void)generateObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)generateFileRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (void)getPDF:(CDUnknownBlockType)arg1 matchingInputSize:(_Bool)arg2 withMargin:(_Bool)arg3 startingAtPage:(long long)arg4 endingAtPage:(long long)arg5;
- (void)getPageTextsWithPDFKit:(CDUnknownBlockType)arg1;
- (void)getPageTextsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
