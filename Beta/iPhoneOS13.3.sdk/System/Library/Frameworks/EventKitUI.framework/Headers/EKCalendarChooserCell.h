/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKUITableViewCell.h>

@class NSString, NSTextAttachment, UIColor, UIImage, UIImageView;

@interface EKCalendarChooserCell : EKUITableViewCell

{
    _Bool _showCheckmarksOnLeft;
    _Bool _checked;
    _Bool _shouldAnimate;
    _Bool _showsColorDot;
    UIImage *_colorDot;
    UIImage *_colorDotHighlighted;
    UIImageView *_colorDotView;
    UIImageView *_checkmarkView;
    UIColor *_checkMarkColor;
    NSTextAttachment *_colorDotAttachment;
    _Bool _showingSelectionCheckmark;
    _Bool _multiSelectStyle;
    NSString *_textLabelText;
    UIColor *_selectionCheckmarkColor;
}

@property (nonatomic) _Bool showingSelectionCheckmark;
@property (nonatomic) _Bool multiSelectStyle;
@property (nonatomic) _Bool showCheckmarksOnLeft;
@property (nonatomic) _Bool checked;
@property (nonatomic) _Bool shouldAnimate;
@property (nonatomic) _Bool showsColorDot;
@property (retain, nonatomic) NSString *textLabelText;
@property (retain, nonatomic) UIColor *selectionCheckmarkColor;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setContentAlpha:(double)arg1;
- (void)setAccessoryType:(long long)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)_multiselectBackgroundColor;
- (void)_updateTextLabelTextWithColorDot;
- (void)updateSelectionCheckmark;
- (void)setColorDotImage:(id)arg1;
- (void)setColorDotHighlightedImage:(id)arg1;
- (double)textLeadingIndent;

@end
