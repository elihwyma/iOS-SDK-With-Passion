/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@protocol NUArticleActivityFactory, NUArticleFactory, NUArticleHostViewControllerFactory;

@interface NUArticlePageFactory : NSObject

{
    id <NUArticleFactory> _articleFactory;
    id <NUArticleHostViewControllerFactory> _articleHostViewControllerFactory;
    id <NUArticleActivityFactory> _articleActivityFactory;
}

@property (nonatomic, readonly) id <NUArticleFactory> articleFactory;
@property (nonatomic, readonly) id <NUArticleHostViewControllerFactory> articleHostViewControllerFactory;
@property (nonatomic, readonly) id <NUArticleActivityFactory> articleActivityFactory;

- (id)initWithArticleFactory:(id)arg1 articleActivityFactory:(id)arg2 articleHostViewControllerFactory:(id)arg3;
- (id)createPagesForArticleIDs:(id)arg1;

@end
