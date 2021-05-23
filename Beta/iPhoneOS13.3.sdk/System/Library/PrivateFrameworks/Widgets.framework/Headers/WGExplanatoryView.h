/*
 Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

#import <UIView.h>

@class MTVisualStylingProvider, UIImageView, UILabel, UITapGestureRecognizer;

@interface WGExplanatoryView : UIView

{
    UIImageView *_glyphView;
    UILabel *_label;
    MTVisualStylingProvider *_visualStylingProvider;
    UITapGestureRecognizer *_tapGesture;
}

- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (void)_updateVisualStylingIfNecessary;
- (void)_invalidateVisualStyling;
- (void)_configureGlyphViewWithGlyph:(id)arg1;
- (void)_configureExplanationLabelWithExplanation:(id)arg1;
- (id)initWithGlyph:(id)arg1 andExplanation:(id)arg2;

@end
