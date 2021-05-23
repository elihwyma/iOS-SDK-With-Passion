/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <UIKit/UIViewController.h>

#import <NewsUI/Swift-Protocol.h>

@class FCArticle, NSString, NUArticleExcerptTraits, NUArticleExcerptView;

@protocol NULoadingDelegate;

@interface NUArticleExcerptViewController : UIViewController <Swift>

{
    id <NULoadingDelegate> _loadingDelegate;
    FCArticle *_article;
    NUArticleExcerptTraits *_traits;
    NUArticleExcerptView *_excerptView;
}

@property (nonatomic, readonly) FCArticle *article;
@property (retain, nonatomic) NUArticleExcerptTraits *traits;
@property (nonatomic, readonly) NUArticleExcerptView *excerptView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <NULoadingDelegate> loadingDelegate;

- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithArticle:(id)arg1 traits:(id)arg2;
- (void)loadHeadlineImageFromArticle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadExcerptFromArticle:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
