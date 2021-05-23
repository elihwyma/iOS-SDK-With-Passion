/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <UIKit/UIButton.h>

@class NSURL, UIImageView, UILabel;

@interface NUArticleExcerptReadMoreButton : UIButton

{
    unsigned long long _excerptLenthType;
    NSURL *_domainURL;
    UILabel *_readStoryLabel;
    UILabel *_domainLabel;
    UIImageView *_arrowImageView;
}

@property (nonatomic, readonly) UILabel *readStoryLabel;
@property (nonatomic, readonly) UILabel *domainLabel;
@property (nonatomic, readonly) UIImageView *arrowImageView;
@property (nonatomic) unsigned long long excerptLenthType;
@property (retain, nonatomic) NSURL *domainURL;

+ (double)readMoreButtonHeight;
+ (id)arrowImage;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
