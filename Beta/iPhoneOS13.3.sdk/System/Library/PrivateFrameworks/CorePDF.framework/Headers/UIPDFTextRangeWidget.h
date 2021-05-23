/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class CALayer, UIPDFPageView;

__attribute__((visibility("hidden")))
@interface UIPDFTextRangeWidget : NSObject

{
    CALayer *_startSelectionGrabber;
    CALayer *_startBar;
    CALayer *_endSelectionGrabber;
    CALayer *_endBar;
    CALayer *_startHandle;
    CALayer *_endHandle;
    CALayer *_fixedSelectionGrabber;
    UIPDFPageView *_pageView;
    double _handleHeight;
    double _handleWidth;
    struct CGPoint _initialSelectionPointOnPage;
    double _offsetX;
    double _offsetY;
    unsigned long long _startIndex;
    unsigned long long _endIndex;
    struct CGColor *_grabberColor;
    long long _startRectangle;
    long long _endRectangle;
    _Bool _startLeft;
    _Bool _endRight;
    double _startX;
    double _endX;
}

@property (nonatomic) UIPDFPageView *pageView;
@property (nonatomic, readonly) struct CGPoint initialSelectionPointOnPage;
@property (nonatomic, readonly) struct CGPoint currentSelectionPointOnPage;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)remove;
- (void)layout;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)hide;
- (void)setSelection:(id)arg1;
- (_Bool)hitTest:(struct CGPoint)arg1 fixedPoint:(struct CGPoint *)arg2 preceeds:(_Bool *)arg3;
- (struct CGPoint)selectedPointFor:(struct CGPoint)arg1;
- (struct CGPoint)viewOffset;
- (void)track:(struct CGPoint)arg1;
- (void)endTracking;
- (struct CGRect)selectionRectangle;
- (void)setSelectedGrabber:(unsigned long long)arg1;
- (void)layoutStartSelectionGrabber:(struct CGRect)arg1 transform:(struct CGAffineTransform *)arg2 width:(double)arg3 extraHeight:(double)arg4 unitSize:(struct CGSize)arg5;
- (void)layoutEndSelectionGrabber:(struct CGRect)arg1 transform:(struct CGAffineTransform *)arg2 width:(double)arg3 extraHeight:(double)arg4 unitSize:(struct CGSize)arg5;
- (void)layoutWidget;

@end
