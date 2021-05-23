/*
 Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import <UIKit/UIView.h>

@class NSArray, UIColor;

@interface QSSelectionHighlightView : UIView

{
    _Bool _sentenceHighlight;
    NSArray *_highlightSelectionRects;
    UIColor *_selectionColor;
    UIColor *_underlineColor;
}

@property (retain, nonatomic) NSArray *highlightSelectionRects;
@property (retain, nonatomic) UIColor *selectionColor;
@property (retain, nonatomic) UIColor *underlineColor;
@property (nonatomic) _Bool sentenceHighlight;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end
