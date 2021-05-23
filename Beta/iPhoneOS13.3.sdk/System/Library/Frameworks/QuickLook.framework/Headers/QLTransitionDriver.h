/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class QLItem, UIView;

@protocol QLDismissGestureTracking;

__attribute__((visibility("hidden")))
@interface QLTransitionDriver : NSObject

{
    _Bool _transitionContainerMasksToBounds;
    _Bool _presenting;
    QLItem *_transitionPreviewItem;
    UIView *_transitionContainer;
    UIView *_destinationView;
    UIView *_sourceView;
    id <QLDismissGestureTracking> _gestureTracker;
    double _duration;
    double _topNavigationOffset;
    double _hostNavigationOffset;
    struct CGSize _transitionPreviewSize;
    struct CGRect _sourceViewFrame;
    struct CGRect _uncroppedFrame;
    struct CGRect _transitionContainerOriginalFrame;
}

@property struct CGSize transitionPreviewSize;
@property (retain) QLItem *transitionPreviewItem;
@property (retain) UIView *transitionContainer;
@property (retain) UIView *destinationView;
@property (retain) UIView *sourceView;
@property struct CGRect sourceViewFrame;
@property struct CGRect uncroppedFrame;
@property struct CGRect transitionContainerOriginalFrame;
@property _Bool transitionContainerMasksToBounds;
@property (retain) id <QLDismissGestureTracking> gestureTracker;
@property _Bool presenting;
@property double duration;
@property double topNavigationOffset;
@property double hostNavigationOffset;

- (void)tearDown;
- (void)animateTransition;
- (void)animateFinishTransition;

@end
