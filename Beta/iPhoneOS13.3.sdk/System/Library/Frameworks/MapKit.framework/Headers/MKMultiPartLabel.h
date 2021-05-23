/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

@class MKMultiPartAttributedString, NSDictionary, NSString, UIColor, UIFont, UITextView, _MKMultiPartLabelMetrics;

@interface MKMultiPartLabel : UIView

{
    UITextView *_textView;
    struct CGRect _previousBounds;
    NSDictionary *_cachedTextAttributes;
    MKMultiPartAttributedString *_multiPartString;
    UIFont *_font;
    UIColor *_textColor;
    long long _textAlignment;
    _MKMultiPartLabelMetrics *_data;
}

@property (retain, nonatomic) _MKMultiPartLabelMetrics *data;
@property (retain, nonatomic) MKMultiPartAttributedString *multiPartString;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) long long textAlignment;
@property (nonatomic) struct UIEdgeInsets textInset;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setContentHuggingPriority:(float)arg1 forAxis:(long long)arg2;
- (void)setContentCompressionResistancePriority:(float)arg1 forAxis:(long long)arg2;
- (void)layoutSubviews;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_textAttributes;
- (void)_updateStrings;
- (void)_setupTextView;
- (id)_attributedAdjustedMultiPartStringFromString:(id)arg1;
- (void)_updateTextViewTextAndInvalidateLayout:(id)arg1;
- (id)_addDefaultAttributesToAttributedString:(id)arg1;

@end
