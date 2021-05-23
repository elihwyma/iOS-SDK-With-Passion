/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

#import <UIKit/UIControl.h>

@class CCUICAPackageDescription, CCUICAPackageView, MTVisualStylingProvider, NSString, UIColor, UIImage, UIImageView, UIView;

@interface CCUIButtonModuleView : UIControl

{
    UIView *_highlightedBackgroundView;
    UIImageView *_glyphImageView;
    CCUICAPackageView *_glyphPackageView;
    MTVisualStylingProvider *_visualStylingProvider;
    UIImage *_glyphImage;
    UIColor *_glyphColor;
    UIImage *_selectedGlyphImage;
    UIColor *_selectedGlyphColor;
    double _glyphAlpha;
    double _glyphScale;
    CCUICAPackageDescription *_glyphPackageDescription;
    NSString *_glyphState;
    struct NSDirectionalEdgeInsets _contentEdgeInsets;
}

@property (retain, nonatomic) UIImage *glyphImage;
@property (retain, nonatomic) UIColor *glyphColor;
@property (retain, nonatomic) UIImage *selectedGlyphImage;
@property (retain, nonatomic) UIColor *selectedGlyphColor;
@property (nonatomic) double glyphAlpha;
@property (nonatomic) double glyphScale;
@property (retain, nonatomic) CCUICAPackageDescription *glyphPackageDescription;
@property (copy, nonatomic) NSString *glyphState;
@property (nonatomic) struct NSDirectionalEdgeInsets contentEdgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setEnabled:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)didMoveToWindow;
- (void)setSelected:(_Bool)arg1;
- (void)_handlePressGesture:(id)arg1;
- (void)_updateForStateChange;
- (void)_setGlyphImage:(id)arg1;
- (void)_setGlyphPackageDescription:(id)arg1;
- (void)_setGlyphState:(id)arg1;
- (void)_setGlyphAlpha:(double)arg1;
- (void)_setGlyphScale:(double)arg1;
- (void)_updateGlyphImageViewVisualStyling;
- (id)_tintColorForSelectedState:(_Bool)arg1;

@end
