/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@class UIColor, UILabel, UIWindow, _TVInspectorHighlightMetadataView;

@interface _TVInspectorHighlightView : UIView

{
    UIView *_highlightView;
    _TVInspectorHighlightMetadataView *_metadataView;
    UIWindow *_targetWindow;
    UIColor *_borderColor;
}

@property (weak, nonatomic) UIWindow *targetWindow;
@property (retain, nonatomic) UIColor *contentColor;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic, readonly) UILabel *descriptionLabel;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)highlightView:(id)arg1;

@end
