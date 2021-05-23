/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIButton.h>

@class UIColor, UIView;

__attribute__((visibility("hidden")))
@interface UISwipeActionButton : UIButton

{
    _Bool _autosizes;
    UIColor *_defaultBackgroundColor;
    UIColor *_highlightedBackgroundColor;
    UIView *_backgroundView;
}

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIColor *defaultBackgroundColor;
@property (retain, nonatomic) UIColor *highlightedBackgroundColor;
@property (nonatomic, readonly) double buttonWidth;
@property (nonatomic) _Bool autosizes;
@property (nonatomic, readonly) UIView *sourceView;

+ (id)titleFont;
+ (double)defaultButtonWidth;
+ (id)titleFontOfSize:(double)arg1;

- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (unsigned long long)_defaultLayoutForHeight:(double)arg1;
- (long long)_numberOfLinesForTitle:(id)arg1;
- (struct CGRect)_allowableContentRectForContentRect:(struct CGRect)arg1;
- (_Bool)_heightDemandsCompactLayout;

@end
