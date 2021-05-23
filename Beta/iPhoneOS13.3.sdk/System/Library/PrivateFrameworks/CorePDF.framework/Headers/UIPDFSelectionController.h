/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class UIPDFPageView;

@protocol UIPDFSelectionWidget, UIPDFSelectionWidget><NSObject;

__attribute__((visibility("hidden")))
@interface UIPDFSelectionController : NSObject

{
    UIPDFPageView *_pageView;
    _Bool _rangeMode;
    id <UIPDFSelectionWidget><NSObject> _selectionWidget;
    _Bool _resizingWidget;
    struct CGPoint _selectionFixedPoint;
    struct CGRect _selectionBounds;
    _Bool _preceeds;
    _Bool _isTracking;
    struct CGPoint _adjustedPoint;
    _Bool _hiding;
    long long _firstIndex;
    long long _lastIndex;
    struct CGPoint _startPoint;
    _Bool _needsLayout;
    _Bool _cancelled;
    _Bool _instantModeIsSuspended;
    _Bool _instantHighlightMode;
}

@property (nonatomic) UIPDFPageView *pageView;
@property (nonatomic, readonly) _Bool rangeMode;
@property (nonatomic, readonly) id <UIPDFSelectionWidget> selectionWidget;
@property (nonatomic, readonly) _Bool isTracking;
@property (nonatomic, readonly) struct CGPoint adjustedPoint;
@property (nonatomic, readonly) struct CGPoint initialSelectionPoint;
@property (nonatomic, readonly) struct CGPoint currentSelectionPoint;
@property (nonatomic) _Bool instantHighlightMode;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)clearSelection;
- (void)layoutSelections;
- (void)hideWidget;
- (void)addSelectionWidget:(id)arg1;
- (void)suspendInstantHighlightMode;
- (void)selectionHideFromAncestor:(id)arg1;
- (void)selectionShowToAncestor:(id)arg1;
- (void)selectionHide:(id)arg1;
- (void)selectionShowDelayed:(id)arg1;
- (void)selectionShow:(id)arg1;
- (void)setSelectionFor:(struct CGPoint)arg1;
- (_Bool)useParagraphMode;
- (void)startSelectingAt:(struct CGPoint)arg1;
- (void)adjustSelection:(struct CGPoint)arg1;
- (void)extendSelectionToParagraph;
- (_Bool)shouldTrackAt:(struct CGPoint)arg1;
- (void)startTracking:(struct CGPoint)arg1 showMagnifier:(_Bool *)arg2;
- (void)tracking:(struct CGPoint)arg1 showMagnifier:(_Bool *)arg2;
- (void)endTracking:(struct CGPoint)arg1;
- (void)startTracking:(struct CGPoint)arg1 andPoint:(struct CGPoint)arg2;
- (void)tracking:(struct CGPoint)arg1 andPoint:(struct CGPoint)arg2;
- (struct CGPoint)selectedPointOffset;

@end
