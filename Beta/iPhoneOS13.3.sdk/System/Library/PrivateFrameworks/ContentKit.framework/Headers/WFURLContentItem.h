/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFContentItem.h>

@class NSURL;

@interface WFURLContentItem : WFContentItem

@property (nonatomic, readonly) NSURL *URL;

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (id)ownedPasteboardTypes;
+ (id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3;
+ (_Bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)filterRepresentationsForAllowedContent:(id)arg1;
+ (void)rediscoverURLCoercionClassesIfNeeded;
+ (id)URLCoercions;
+ (id)mutableURLCoercions;
+ (void)registerURLCoercion:(Class)arg1;

- (id)description;
- (id)outputTypes;
- (void)generateObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)generateFileRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (void)getPreferredFileExtension:(CDUnknownBlockType)arg1;
- (void)getPreferredFileSize:(CDUnknownBlockType)arg1;
- (id)additionalRepresentationsForSerialization;
- (_Bool)includesFileRepresentationInSerializedItem;
- (_Bool)canGenerateRepresentationForType:(id)arg1;
- (void)getHeadersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getContentsOfURLWithHandler:(CDUnknownBlockType)arg1;
- (void)getContentsWithRequest:(id)arg1 expectedByteCountHandler:(CDUnknownBlockType)arg2 writtenByteCountHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)getContentsWithRequest:(id)arg1 cacheResult:(_Bool)arg2 expectedByteCountHandler:(CDUnknownBlockType)arg3 writtenByteCountHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)getTitle:(CDUnknownBlockType)arg1;
- (void)generateObjectRepresentationForPrintHandler:(CDUnknownBlockType)arg1;
- (id)intermediaryTypesForCoercionToItemClass:(Class)arg1;

@end
