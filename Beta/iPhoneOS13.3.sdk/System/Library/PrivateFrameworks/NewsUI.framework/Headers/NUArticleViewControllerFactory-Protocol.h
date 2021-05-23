/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <NewsUI/Swift-Protocol.h>

@class NSHashTable;

@protocol NUArticleViewControllerFactory <Swift>

@property (nonatomic, readonly) NSHashTable *loadingListeners;

- (unsigned short)createArticleViewControllerWithArticle:issue: /* Error: Ran out of types for this method. */;
- (unsigned short)createArticleViewControllerWithArticle: /* Error: Ran out of types for this method. */;
- (unsigned short)createArticleWebViewControllerWithArticle: /* Error: Ran out of types for this method. */;
- (unsigned short)createArticleExcerptViewControllerWithArticle:traits: /* Error: Ran out of types for this method. */;

@end
