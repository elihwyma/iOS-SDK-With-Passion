/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusFoundation/OFUIView.h>

@class NSArray, NSString, OFNSOperationQueue, OKDimmerView, OKPresentationViewControllerProxy, OKSynopsisGestureRecognizer, OKSynopsisInterpreter, UICollectionView;

@protocol OKSynopsisViewDelegate;

@interface OKSynopsisView : OFUIView

{
    OKSynopsisGestureRecognizer *_synopsisGestureRecognizer;
    NSArray *_widgetMediaItems;
    OFNSOperationQueue *_highSpeedOperationQueue;
    OKDimmerView *_backgroundView;
    _Bool _pinchStartedRight;
    _Bool _isAnimating;
    _Bool _isDisplay;
    UICollectionView *_collectionView;
    _Bool _scrollViewDidEndDragging;
    struct CGPoint _collectionViewContentPreviousOffset;
    OKPresentationViewControllerProxy *_presentationViewController;
    OKSynopsisInterpreter *_synopsisInterpreter;
    id <OKSynopsisViewDelegate> _delegate;
}

@property (nonatomic, readonly) OFUIView *presentationView;
@property (nonatomic, readonly) OFUIView *navigatorView;
@property (retain, nonatomic) OKSynopsisInterpreter *synopsisInterpreter;
@property (nonatomic) OKPresentationViewControllerProxy *presentationViewController;
@property (nonatomic) id <OKSynopsisViewDelegate> delegate;
@property (nonatomic, readonly) _Bool isDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)show;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)hide;
- (void)updateWithProgress:(double)arg1;
- (void)updateLayout:(struct CGRect)arg1;
- (void)handleMagnification:(id)arg1;
- (void)initCollectionView;
- (void)animateView:(id)arg1 forKeyPath:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4 delay:(double)arg5 duration:(double)arg6 setDelegate:(id)arg7;
- (void)animateSynopsisViewBlurForDisplay:(_Bool)arg1 withProgress:(double)arg2;
- (void)prepareForDisplaySynopsisView;
- (void)endedGesture;
- (void)handleTapCell:(id)arg1;
- (void)updateSynopsisViewOffsetForVisibleWidgets;
- (void)prepareAdjacentItemWidgetViewsForScrolling;
- (void)_scrollViewDidCompleteScrolling;
- (void)prepareAdjacentItemWidgetViews;
- (void)prepareAdjacentItemWidgetViews:(unsigned long long)arg1;
- (id)pageViewForWidgetView:(id)arg1;
- (id)widgetViewResolution:(id)arg1;
- (void)widgetViewCancelAllOperations:(id)arg1;
- (void)widgetViewCancelAllOperations:(id)arg1 withIdentifier:(id)arg2;
- (void)widgetView:(id)arg1 addHighSpeedOperations:(id)arg2 andConsumingOperations:(id)arg3;
- (void)evaluateScript:(id)arg1 withInfoDictionary:(id)arg2 andCompletionBlock:(CDUnknownBlockType)arg3 forWidgetView:(id)arg4;
- (id)initWithPresentationViewController:(id)arg1;
- (id)collectionItemAtIndexPath:(id)arg1;

@end
