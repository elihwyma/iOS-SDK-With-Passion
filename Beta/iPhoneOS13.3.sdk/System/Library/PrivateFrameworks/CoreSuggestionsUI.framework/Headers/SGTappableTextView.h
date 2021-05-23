/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

#import <UIKit/UITextView.h>

@class NSAttributedString, NSMutableIndexSet, UIColor;

@protocol SGTappableTextViewDelegate;

@interface SGTappableTextView : UITextView

{
    UIColor *_activeRangeNormalColor;
    UIColor *_activeRangeHighlightedColor;
    NSAttributedString *_clientText;
    NSMutableIndexSet *_activeRanges;
    struct _NSRange _trackingRange;
    _Bool _trackingRangeHighlighted;
    _Bool _needsLabelUpdate;
    long long _currentStyle;
    id <SGTappableTextViewDelegate> _tappableDelegate;
}

@property (weak, nonatomic) id <SGTappableTextViewDelegate> tappableDelegate;
@property (retain, nonatomic) UIColor *activeRangeNormalColor;
@property (retain, nonatomic) UIColor *activeRangeHighlightedColor;
@property (nonatomic, readonly) _Bool hasActiveRanges;
@property (nonatomic, readonly) struct CGRect activeRangesRect;

- (id)initWithCoder:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)tintColorDidChange;
- (void)setAttributedText:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_textColor;
- (_Bool)isTracking;
- (void)_updateCurrentAppearance;
- (void)addActiveRange:(struct _NSRange)arg1;
- (void)removeActiveRange:(struct _NSRange)arg1;
- (void)removeAllActiveRanges;
- (void)setTrackingRange:(struct _NSRange)arg1;
- (struct _NSRange)trackingRange;
- (void)_highlightTrackingRange:(_Bool)arg1;
- (void)_updateAttributedTextColor;
- (void)_setNeedUpdateLabel;
- (void)_updateLabelIfNeeded;
- (unsigned long long)_characterIndexAtPoint:(struct CGPoint)arg1;
- (struct _NSRange)_rangeAtPoint:(struct CGPoint)arg1;

@end
