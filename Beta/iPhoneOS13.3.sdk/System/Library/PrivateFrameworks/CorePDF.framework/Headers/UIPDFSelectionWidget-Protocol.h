/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class MISSING_TYPE, UIPDFPageView;

@protocol UIPDFSelectionWidget

@property (nonatomic, readonly) struct CGPoint initialSelectionPointOnPage;
@property (nonatomic, readonly) struct CGPoint currentSelectionPointOnPage;
@property (nonatomic) UIPDFPageView *pageView;

- (MISSING_TYPE *)remove;
- (MISSING_TYPE *)layout;
- (MISSING_TYPE *)hide;
- (MISSING_TYPE *)setSelection: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)hitTest:fixedPoint:preceeds: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)selectedPointFor: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)viewOffset;
- (MISSING_TYPE *)track: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)endTracking;
- (MISSING_TYPE *)selectionRectangle;
- (MISSING_TYPE *)setSelectedGrabber: /* Error: Ran out of types for this method. */;

@end
