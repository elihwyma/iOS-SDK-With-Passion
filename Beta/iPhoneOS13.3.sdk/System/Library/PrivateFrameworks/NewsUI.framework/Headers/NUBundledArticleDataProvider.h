/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class FCArticle, NSString;

@interface NUBundledArticleDataProvider : NSObject

{
    FCArticle *_article;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *articleID;
@property (nonatomic, readonly) FCArticle *article;

- (CDUnknownBlockType)loadImagesForImageRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)fileURLForURL:(id)arg1 onCompletion:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (id)translateURL:(id)arg1;
- (id)initWithArticle:(id)arg1;
- (id)embedForType:(id)arg1;
- (void)registerFontsWithCompletion:(CDUnknownBlockType)arg1;
- (void)prefetchAssets;
- (void)cancelAssetPrefetch;
- (void)loadContextWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)performBlockForFontsInBundle:(CDUnknownBlockType)arg1;
- (id)fileURLForBundleURL:(id)arg1;

@end
