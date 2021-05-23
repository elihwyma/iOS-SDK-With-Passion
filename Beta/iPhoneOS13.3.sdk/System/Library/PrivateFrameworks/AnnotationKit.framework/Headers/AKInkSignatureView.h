/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIView.h>

@class NSString, PKCanvasView, PKDrawing, PKInk, UIColor;

@interface AKInkSignatureView : UIView

{
    _Bool _hasStrokes;
    UIColor *_strokeColor;
    PKCanvasView *_canvasView;
    PKInk *_ink;
    PKDrawing *_latestDrawing;
}

@property (retain) PKCanvasView *canvasView;
@property (copy) PKInk *ink;
@property (retain) PKDrawing *latestDrawing;
@property _Bool hasStrokes;
@property (retain, nonatomic) UIColor *strokeColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)clear;
- (id)initWithCoder:(id)arg1;
- (void)teardown;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateInk;
- (struct CGPath *)copyPotracedPathAndReturnDrawing:(id *)arg1;
- (void)canvasViewDrawingDidChange:(id)arg1;

@end
