/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class WKContentView;

__attribute__((visibility("hidden")))
@interface WKColorPicker : NSObject

{
    WKContentView *_view;
    struct RetainPtr<UIView> _colorPicker;
    struct RetainPtr<UIView> _colorSelectionIndicator;
    struct RetainPtr<CAShapeLayer> _colorSelectionIndicatorBorder;
    struct RetainPtr<WKColorMatrixView> _topColorMatrix;
    struct RetainPtr<WKColorMatrixView> _mainColorMatrix;
    struct WeakObjCPtr<WKColorButton> _selectedColorButton;
    struct RetainPtr<UIPanGestureRecognizer> _colorPanGR;
}

+ (id)defaultTopColorMatrix;

- (id).cxx_construct;
- (id)initWithView:(id)arg1;
- (id)controlView;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (void)colorMatrixViewDidLayoutSubviews:(id)arg1;
- (void)colorMatrixView:(id)arg1 didTapColorButton:(id)arg2;
- (void)didPanColors:(id)arg1;
- (void)drawSelectionIndicatorForColorButton:(id)arg1;
- (void)setControlValueFromUIColor:(id)arg1;

@end
