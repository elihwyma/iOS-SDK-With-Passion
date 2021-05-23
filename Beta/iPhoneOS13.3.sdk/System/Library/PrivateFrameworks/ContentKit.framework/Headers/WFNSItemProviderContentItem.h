/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFContentItem.h>

@class NSItemProvider, NSString, WFFileType;

@interface WFNSItemProviderContentItem : WFContentItem

{
    _Bool _useNewLoadingAPI;
    NSString *_contentName;
    WFFileType *_fileURLType;
}

@property (retain, nonatomic) WFFileType *fileURLType;
@property (nonatomic, readonly) NSItemProvider *itemProvider;
@property (copy, nonatomic) NSString *contentName;
@property (nonatomic) _Bool useNewLoadingAPI;

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (id)itemProviderTypeIdentifierOverridesWithFileURLType:(id)arg1;
+ (id)itemProviderTypeIdentifierOverrides;

- (id)name;
- (id)outputTypes;
- (void)generateObjectRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)generateFileRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (_Bool)cachesSupportedTypes;
- (void)generateFileRepresentationWithNewAPI:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (void)generateObjectRepresentationWithNewAPI:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)preloadImportantItemsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
