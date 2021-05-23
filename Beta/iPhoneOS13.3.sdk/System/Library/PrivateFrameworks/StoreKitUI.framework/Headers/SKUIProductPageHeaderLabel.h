/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSString, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface SKUIProductPageHeaderLabel : UIView

{
    NSString *_text;
    UIColor *_textColor;
    NSString *_contentRating;
    UIImage *_contentRatingImage;
    NSArray *_secondaryContentRatingImages;
    UIColor *_ratingColor;
    _Bool _isPad;
}

@property (nonatomic) _Bool isPad;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) NSString *contentRating;
@property (retain, nonatomic) NSArray *secondaryContentRatingImages;
@property (retain, nonatomic) UIColor *ratingColor;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (id)_textAttributes;
- (id)_imageForContentRating:(id)arg1;
- (struct __CTFramesetter *)_newTextFramesetter;
- (double)secondaryImageWidth;

@end
