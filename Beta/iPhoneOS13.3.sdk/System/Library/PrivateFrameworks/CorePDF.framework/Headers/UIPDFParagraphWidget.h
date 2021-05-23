/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class CALayer, CAShapeLayer, UIPDFPageView;

__attribute__((visibility("hidden")))
@interface UIPDFParagraphWidget : NSObject

{
    CAShapeLayer *_trackingBorder;
    struct CGRect _initialRect;
    _Bool _tracking;
    struct CGRect _currentTrackingRect;
    CALayer *_leftGrabber;
    CALayer *_rightGrabber;
    CALayer *_topGrabber;
    CALayer *_bottomGrabber;
    CALayer *_selectedGrabber;
    struct CGRect _boundsInPDFSpace;
    struct CGColor *_grabberColor;
    UIPDFPageView *_pageView;
    struct CGPoint _initialSelectionPointOnPage;
}

@property (nonatomic) UIPDFPageView *pageView;
@property (nonatomic, readonly) struct CGPoint initialSelectionPointOnPage;
@property (nonatomic, readonly) struct CGPoint currentSelectionPointOnPage;

- (id)init;
- (void)dealloc;
- (void)remove;
- (void)layout;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)hide;
- (void)setSelection:(id)arg1;
- (void)setSelectedGrabberPosition:(struct CGRect)arg1;
- (struct CGRect)adjustRect:(struct CGRect)arg1 toPoint:(struct CGPoint)arg2;
- (struct CGRect)selectionBoundsInEffectsSpace;
- (_Bool)hitTest:(struct CGPoint)arg1 fixedPoint:(struct CGPoint *)arg2 preceeds:(_Bool *)arg3;
- (struct CGPoint)selectedPointFor:(struct CGPoint)arg1;
- (struct CGPoint)viewOffset;
- (void)track:(struct CGPoint)arg1;
- (void)endTracking;
- (struct CGRect)selectionRectangle;
- (void)setSelectedGrabber:(unsigned long long)arg1;

@end
