/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <UIKit/UIView.h>

@class UIColor;

@interface DKDrawableView : UIView

{
    _Bool _isDrawing;
    UIColor *_rectangleEdgeColor;
    UIColor *_rectangleFillColor;
    UIView *_shapeView;
}

@property (retain, nonatomic) UIColor *rectangleEdgeColor;
@property (retain, nonatomic) UIColor *rectangleFillColor;
@property (retain, nonatomic) UIView *shapeView;
@property (nonatomic) _Bool isDrawing;

- (void)endDrawing;
- (void)updateDrawing:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 rectangleFillColor:(id)arg2 rectangleEdgeColor:(id)arg3;

@end
