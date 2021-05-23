/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <UIKit/UIView.h>

@class NFMultiDelegate, NSString, NUArticleExcerptReadMoreButton, NUArticleExcerptTraits, UIImageView, UILabel, UIScrollView, WKWebView;

@protocol UIScrollViewDelegate;

@interface NUArticleExcerptView : UIView

{
    NUArticleExcerptTraits *_traits;
    UIImageView *_headlineImageView;
    UILabel *_headlineTitleLabel;
    UILabel *_headlineDateLabel;
    WKWebView *_excerptWebView;
    NUArticleExcerptReadMoreButton *_readMoreButton;
    id <UIScrollViewDelegate> _delegate;
    UIScrollView *_imageScrollView;
    UIScrollView *_contentScrollView;
    UIView *_hairlineSeparatorView;
    UIView *_contentView;
    NFMultiDelegate *_multiDelegate;
}

@property (nonatomic, readonly) UIView *hairlineSeparatorView;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) NFMultiDelegate *multiDelegate;
@property (copy, nonatomic) NUArticleExcerptTraits *traits;
@property (nonatomic, readonly) UIImageView *headlineImageView;
@property (nonatomic, readonly) UILabel *headlineTitleLabel;
@property (nonatomic, readonly) UILabel *headlineDateLabel;
@property (nonatomic, readonly) WKWebView *excerptWebView;
@property (nonatomic, readonly) NUArticleExcerptReadMoreButton *readMoreButton;
@property (weak, nonatomic) id <UIScrollViewDelegate> delegate;
@property (nonatomic, readonly) UIScrollView *imageScrollView;
@property (nonatomic, readonly) UIScrollView *contentScrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)webViewConfiguration;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (id)initWithTraits:(id)arg1;

@end
