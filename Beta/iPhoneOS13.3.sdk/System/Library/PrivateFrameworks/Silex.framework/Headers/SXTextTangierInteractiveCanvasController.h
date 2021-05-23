/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <TSReading/TSWPInteractiveCanvasController.h>

@class UIScrollView;

@protocol SXTextTangierInteractiveCanvasControllerDataSource;

@interface SXTextTangierInteractiveCanvasController : TSWPInteractiveCanvasController

{
    _Bool _forceLayoutAndRenderOnThread;
    _Bool _isSelecting;
    _Bool _startedEditing;
    _Bool _isScrolling;
    _Bool _mightScrollToTop;
    UIScrollView *_scrollView;
    id <SXTextTangierInteractiveCanvasControllerDataSource> _dataSource;
}

@property (nonatomic) _Bool startedEditing;
@property (nonatomic) _Bool isScrolling;
@property (nonatomic) _Bool mightScrollToTop;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) id <SXTextTangierInteractiveCanvasControllerDataSource> dataSource;
@property (nonatomic) _Bool forceLayoutAndRenderOnThread;
@property (nonatomic) _Bool isSelecting;

+ (void)createCanvasWithDelegate:(id)arg1 outICC:(id *)arg2 outLayerHost:(id *)arg3 iccClass:(Class)arg4 layerHostClass:(Class)arg5;

- (void)teardown;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (id)hitRep:(struct CGPoint)arg1 withGesture:(id)arg2 passingTest:(CDUnknownBlockType)arg3;
- (void)setSelection:(id)arg1 onModel:(id)arg2 withFlags:(unsigned long long)arg3;
- (void)endUISession;
- (id)topLevelRepsForHitTesting;
- (id)i_topLevelLayersForTiling;
- (_Bool)p_currentlyScrolling;
- (void)didBeginEditingText;
- (id)closestRepToPoint:(struct CGPoint)arg1 forStorage:(id)arg2;
- (_Bool)p_shouldLayoutAndRenderOnThreadForcePendingLayout:(_Bool)arg1;

@end
