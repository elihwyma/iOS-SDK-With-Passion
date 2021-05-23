/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

@class NSAttributedString, NSLayoutManager, NSString, NSTextContainer, NSTextStorage, UIColor, UIFont, UITapGestureRecognizer, UITextView, _MKUILabel;

@interface MKExpandingLabel : UIView

{
    unsigned long long _expansionMode;
    NSTextContainer *_textContainer;
    NSTextStorage *_textStorage;
    NSLayoutManager *_textLayoutManager;
    _MKUILabel *_showMoreLabel;
    UITapGestureRecognizer *_showMoreTapRecognizer;
    _Bool _isPerformingLayout;
    UITextView *_textView;
    UIColor *_showMoreTextColor;
    unsigned long long _numberOfLinesWhenCollapsed;
    CDUnknownBlockType _labelResizedBlock;
}

@property (retain, nonatomic) UITextView *textView;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long textAlignment;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (copy, nonatomic) NSString *showMoreText;
@property (retain, nonatomic) UIFont *showMoreFont;
@property (retain, nonatomic) UIColor *showMoreTextColor;
@property (nonatomic) unsigned long long numberOfLinesWhenCollapsed;
@property (nonatomic, getter=isExpanded) _Bool expanded;
@property (copy, nonatomic) CDUnknownBlockType labelResizedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)layoutSubviews;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)infoCardThemeChanged;
- (void)_expand;
- (void)_mkExpandingLabelComonInit;
- (_Bool)isShowingExpanded;
- (_Bool)_canShowAllText;
- (void)_setExpansionMode:(unsigned long long)arg1;
- (void)_setTextExclusionPath;

@end
