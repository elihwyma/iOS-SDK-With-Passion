/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

#import <UIKit/UIControl.h>

@class CCUICAPackageDescription, CCUICAPackageView, MTVisualStylingProvider, NSString, UIColor, UIImage, UIImageView, UILongPressGestureRecognizer, UIView;

@interface CCUIRoundButton : UIControl

{
    MTVisualStylingProvider *_visualStylingProvider;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    _Bool _useAlternateBackground;
    CCUICAPackageDescription *_glyphPackageDescription;
    UIImage *_glyphImage;
    NSString *_glyphState;
    UIColor *_highlightColor;
    UIView *_normalStateBackgroundView;
    UIView *_selectedStateBackgroundView;
    UIView *_alternateSelectedStateBackgroundView;
    UIImageView *_glyphImageView;
    UIImageView *_selectedGlyphView;
    CCUICAPackageView *_glyphPackageView;
}

@property (retain, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) UIView *normalStateBackgroundView;
@property (retain, nonatomic) UIView *selectedStateBackgroundView;
@property (retain, nonatomic) UIView *alternateSelectedStateBackgroundView;
@property (retain, nonatomic) UIImageView *glyphImageView;
@property (retain, nonatomic) UIImageView *selectedGlyphView;
@property (retain, nonatomic) CCUICAPackageView *glyphPackageView;
@property (retain, nonatomic) CCUICAPackageDescription *glyphPackageDescription;
@property (retain, nonatomic) UIImage *glyphImage;
@property (copy, nonatomic) NSString *glyphState;
@property (nonatomic) _Bool useAlternateBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (struct CGSize)intrinsicContentSize;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (double)_cornerRadius;
- (void)didMoveToWindow;
- (void)_setCornerRadius:(double)arg1;
- (void)_updateForStateChange;
- (id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2 useLightStyle:(_Bool)arg3;
- (id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2 useLightStyle:(_Bool)arg3;
- (id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2;
- (id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2;
- (void)_primaryActionPerformed:(id)arg1;
- (void)_deactivateReachability:(id)arg1;
- (id)initWithHighlightColor:(id)arg1 useLightStyle:(_Bool)arg2;
- (void)_updateVisualStylingOfGlyphView:(id)arg1;

@end
