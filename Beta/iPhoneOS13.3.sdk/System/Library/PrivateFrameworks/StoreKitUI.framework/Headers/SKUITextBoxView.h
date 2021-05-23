/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIControl.h>

@class NSString, SKUIColorScheme, UIImageView, UILabel;

@interface SKUITextBoxView : UIControl

{
    SKUIColorScheme *_colorScheme;
    struct UIEdgeInsets _contentInsets;
    UILabel *_moreButtonLabel;
    long long _numberOfVisibleLines;
    double _rating;
    UIImageView *_ratingImageView;
    UILabel *_ratingLabel;
    UILabel *_subtitleLabel;
    struct __CTFrame *_textFrame;
    struct UIEdgeInsets _titleInsets;
    UILabel *_titleLabel;
    struct __CTFrame *_titleTextFrame;
    struct __CTLine *_truncationToken;
    long long _truncationStyle;
    NSString *_underlyingText;
    _Bool _titleTextIsNaturallyRTL;
    _Bool _textIsNaturallyRTL;
}

@property (retain, nonatomic) SKUIColorScheme *colorScheme;
@property (nonatomic) struct UIEdgeInsets contentInsets;
@property (nonatomic) struct UIEdgeInsets titleInsets;
@property (nonatomic) long long numberOfVisibleLines;
@property (nonatomic) long long truncationStyle;
@property (copy, nonatomic) NSString *moreButtonTitle;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) double rating;
@property (copy, nonatomic) NSString *ratingText;
@property (nonatomic) _Bool textIsNaturallyRTL;

- (void)dealloc;
- (void)reset;
- (void)setTitle:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (struct __CTFrame *)_textFrame;
- (void)setFixedWidthTextFrame:(struct __CTFrame *)arg1;
- (void)setFixedWidthTitleTextFrame:(struct __CTFrame *)arg1;
- (id)_moreButtonLabel;
- (struct CGSize)_textSizeToFitSize:(struct CGSize)arg1;
- (void)setTextFrameWithText:(id)arg1;

@end
