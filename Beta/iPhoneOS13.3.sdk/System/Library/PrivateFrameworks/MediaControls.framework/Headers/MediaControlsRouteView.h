/*
 Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

#import <UIKit/UIView.h>

@class CCUICAPackageView, MTVisualStylingProvider, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface MediaControlsRouteView : UIView

{
    _Bool _labelHidden;
    NSString *_title;
    NSString *_packageName;
    MTVisualStylingProvider *_visualStylingProvider;
    UILabel *_titleLabel;
    CCUICAPackageView *_packageView;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CCUICAPackageView *packageView;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *packageName;
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider;
@property (nonatomic, getter=isLabelHidden) _Bool labelHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_contentSizeCategoryDidChange;
- (void)providedStylesDidChangeForProvider:(id)arg1;
- (void)setGlyphState:(id)arg1;
- (void)_updateLabelVisualStyling;

@end
