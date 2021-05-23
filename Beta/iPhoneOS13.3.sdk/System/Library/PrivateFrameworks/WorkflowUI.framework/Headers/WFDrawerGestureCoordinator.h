/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIPanGestureRecognizer, UIScrollView, UITapGestureRecognizer, WFDrawerVelocityFilter;

@protocol WFDrawerGestureCoordinatorDelegate;

@interface WFDrawerGestureCoordinator : NSObject

{
    _Bool _correctingContentOffset;
    id <WFDrawerGestureCoordinatorDelegate> _delegate;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    WFDrawerVelocityFilter *_heightVelocityFilter;
    WFDrawerVelocityFilter *_heightAccelerationFilter;
    unsigned long long _tapGestureIgnoringCount;
    double _minimumDrawerHeight;
    double _maximumDrawerHeight;
    double _topRubberBandRange;
    double _bottomRubberBandRange;
    UIScrollView *_scrollView;
    struct CGPoint _previousPanTranslation;
    struct CGPoint _initialContentOffset;
    struct CGPoint _unmodifiedInitialContentOffset;
}

@property (nonatomic, readonly) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic, readonly) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, readonly) WFDrawerVelocityFilter *heightVelocityFilter;
@property (nonatomic, readonly) WFDrawerVelocityFilter *heightAccelerationFilter;
@property (nonatomic) unsigned long long tapGestureIgnoringCount;
@property (nonatomic) struct CGPoint previousPanTranslation;
@property (nonatomic) double minimumDrawerHeight;
@property (nonatomic) double maximumDrawerHeight;
@property (nonatomic) double topRubberBandRange;
@property (nonatomic) double bottomRubberBandRange;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) struct CGPoint initialContentOffset;
@property (nonatomic) struct CGPoint unmodifiedInitialContentOffset;
@property (nonatomic) _Bool correctingContentOffset;
@property (weak, nonatomic, readonly) id <WFDrawerGestureCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDelegate:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)handleTapGesture:(id)arg1;
- (double)containerHeight;
- (void)handlePanGesture:(id)arg1;
- (double)dismissalRectTopEdgeForCardDismissalHelper:(id)arg1 coordinateSpace:(id)arg2;
- (void)drawerDismissalHelper:(id)arg1 requestedDismissalWithVelocity:(double)arg2;
- (id)dragGestureTrackerForCardDismissalHelper:(id)arg1;
- (void)updateTapGestureRecognizer;
- (void)beginIgnoringTapGestures;
- (void)endIgnoringTapGestures;
- (void)beginDragging;
- (void)dragTranslatedWithVerticalDelta:(double)arg1;
- (void)endDraggingWithAnimation:(id)arg1;
- (void)endDraggingWithVerticalVelocity:(double)arg1 animation:(id)arg2;
- (double)applyRubberBandToValue:(double)arg1 withRange:(double)arg2;
- (double)unapplyRubberBandToValue:(double)arg1 withRange:(double)arg2;
- (double)rubberBandHeightForHeight:(double)arg1;
- (double)heightForRubberBandHeight:(double)arg1;
- (double)drawerHeight;
- (double)clampedDrawerHeight:(double)arg1;

@end
