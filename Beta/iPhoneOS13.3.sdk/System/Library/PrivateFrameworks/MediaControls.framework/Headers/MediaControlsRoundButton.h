/*
 Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

#import <UIKit/UIControl.h>

@class CCUICAPackageView, MTVisualStylingProvider, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface MediaControlsRoundButton : UIControl

{
    _Bool _labelHidden;
    NSString *_title;
    NSString *_packageName;
    NSString *_glyphState;
    MTVisualStylingProvider *_visualStylingProvider;
    long long _axis;
    CCUICAPackageView *_packageView;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) CCUICAPackageView *packageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *packageName;
@property (copy, nonatomic) NSString *glyphState;
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider;
@property (nonatomic) long long axis;
@property (nonatomic, readonly) struct CGRect imageFrame;
@property (nonatomic, getter=isLabelHidden) _Bool labelHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setSelected:(_Bool)arg1;
- (void)_contentSizeCategoryDidChange;
- (void)providedStylesDidChangeForProvider:(id)arg1;
- (void)_updateLabelVisualStyling;
- (void)_updatePackageColors;

@end
