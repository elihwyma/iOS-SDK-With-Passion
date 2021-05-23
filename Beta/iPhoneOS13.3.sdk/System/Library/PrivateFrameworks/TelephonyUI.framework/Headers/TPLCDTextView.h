/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UIView.h>

@class NSString, TPLCDTextViewScrollingView, UIColor, UIFont, UIFrameAnimation;

@interface TPLCDTextView : UIView

{
    NSString *_text;
    UIFont *_font;
    UIColor *_shadowColor;
    UIColor *_textColor;
    TPLCDTextViewScrollingView *_scrollingView;
    double _fontSize;
    struct CGRect _textRect;
    UIFrameAnimation *_animation;
    id _delegate;
    double _minFontSize;
    unsigned int _textRectIsValid:1;
    unsigned int _centerText:1;
    unsigned int _animates:1;
    unsigned int _isAnimating:1;
    unsigned int _leftTruncates:1;
}

+ (double)defaultMinimumFontSize;

- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTextColor:(id)arg1;
- (void)setFont:(id)arg1;
- (struct CGSize)sizeToFit;
- (void)drawRect:(struct CGRect)arg1;
- (void)startAnimating;
- (void)stopAnimating;
- (void)_tearDownAnimation;
- (_Bool)animates;
- (struct CGRect)textRect;
- (void)setMinimumFontSize:(double)arg1;
- (void)_setupForAnimationIfNecessary;
- (void)setLCDTextFont:(id)arg1;
- (void)_drawTextInRect:(struct CGRect)arg1 verticallyOffset:(_Bool)arg2;
- (void)_startScrolling;
- (void)_scheduleStartScrolling;
- (void)_finishedScrolling;
- (void)setCenterText:(_Bool)arg1;
- (void)setLeftTruncatesText:(_Bool)arg1;
- (void)setAnimatesIfTruncated:(_Bool)arg1;
- (void)resetAnimation;

@end
