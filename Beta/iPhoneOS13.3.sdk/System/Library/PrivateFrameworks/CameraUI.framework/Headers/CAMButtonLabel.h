/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class NSString, UIColor, UILabel;

@interface CAMButtonLabel : UIView

{
    _Bool _wantsLegibilityShadow;
    NSString *_text;
    UILabel *__label;
    struct CGSize _contentSize;
}

@property (retain, nonatomic, readonly) UILabel *_label;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long textAlignment;
@property (nonatomic) _Bool wantsLegibilityShadow;
@property (nonatomic, readonly) struct CGSize contentSize;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setHighlightedTextColor:(id)arg1;
- (id)highlightedTextColor;
- (void)updateToContentSize:(id)arg1;
- (void)_updateAttributedText;
- (void)_updateInternalContentSize;

@end
