/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <NewsUI/Swift-Protocol.h>

@class FCArticle, NSString;

@protocol NUArticleDataProvider <Swift>

@property (copy, nonatomic, readonly) NSString *articleID;
@property (nonatomic, readonly) FCArticle *article;

- (unsigned short)prefetchAssets;
- (unsigned short)cancelAssetPrefetch;
- (unsigned short)loadContextWithCompletionBlock: /* Error: Ran out of types for this method. */;

@end
