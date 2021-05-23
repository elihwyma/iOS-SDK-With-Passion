/*
 Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

#import <UIKit/UIView.h>

@class NSArray, NSLayoutManager, NSMutableArray, NSMutableSet, NSString, NSTextContainer, NSTextStorage, UIColor, UIFont;

@interface SUICStreamingTextView : UIView

{
    NSLayoutManager *_layoutManager;
    NSTextStorage *_textStorage;
    NSTextContainer *_textContainer;
    NSMutableArray *_words;
    NSMutableArray *_wordsToShow;
    NSMutableSet *_wordsToDelete;
    _Bool _animatedInternal;
    _Bool _animated;
    UIFont *_font;
    double _hyphenationFactor;
    UIColor *_startTextColor;
    UIColor *_endTextColor;
    double _animationDuration;
    UIColor *_textColor;
}

@property (retain, nonatomic) UIFont *font;
@property (nonatomic) double hyphenationFactor;
@property (retain, nonatomic) UIColor *startTextColor;
@property (retain, nonatomic) UIColor *endTextColor;
@property (nonatomic) double animationDuration;
@property (nonatomic) _Bool animated;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSArray *words;
@property (nonatomic, readonly) NSString *text;

- (id)initWithCoder:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_resetState;
- (void)_sharedInit;
- (void)_updateText:(id)arg1;
- (void)_updateAnimatedInternal;
- (void)_layoutFrames;
- (id)_glyphImageForWord:(id)arg1 frame:(struct CGRect)arg2 glyphRange:(struct _NSRange)arg3 textColor:(id)arg4;
- (void)_animateLayers;
- (void)_animateWordIn:(id)arg1;
- (void)_animateWordOut:(id)arg1;
- (id)_createGlyphImage:(struct CGRect)arg1 glyphRange:(struct _NSRange)arg2 layoutManager:(id)arg3;

@end
