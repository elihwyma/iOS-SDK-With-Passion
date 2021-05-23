/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUInteractiveDismissalController.h>

@class NSString, PUChangeDirectionValueFilter, PUSwipedDownTileTracker, PXVerticalSwipeGestureRecognizerHelper, UIPanGestureRecognizer;

__attribute__((visibility("hidden")))
@interface PUInteractiveSwipeDismissalController : PUInteractiveDismissalController

{
    _Bool _handlingPanGestureRecognizer;
    UIPanGestureRecognizer *__panGestureRecognizer;
    PXVerticalSwipeGestureRecognizerHelper *_verticalSwipeGestureRecognzierHelper;
    PUChangeDirectionValueFilter *__dismissGestureDirectionValueFilter;
    PUSwipedDownTileTracker *__swipedDownTileTracker;
}

@property (retain, nonatomic, setter=_setPanGestureRecognizer:) UIPanGestureRecognizer *_panGestureRecognizer;
@property (nonatomic, readonly) PXVerticalSwipeGestureRecognizerHelper *verticalSwipeGestureRecognzierHelper;
@property (nonatomic, getter=_isHandlingPanGestureRecognizer, setter=_setHandlingPanGestureRecognizer:) _Bool handlingPanGestureRecognizer;
@property (retain, nonatomic, setter=_setDismissGestureDirectionValueFilter:) PUChangeDirectionValueFilter *_dismissGestureDirectionValueFilter;
@property (retain, nonatomic, setter=_setSwipedDownTileTracker:) PUSwipedDownTileTracker *_swipedDownTileTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)_handlePanGestureRecognizer:(id)arg1;
- (_Bool)verticalSwipeGestureRecognizerHelper:(id)arg1 shouldRecognizeSwipeDownGestureRecognizer:(id)arg2;
- (void)updateGestureRecognizersWithHostingView:(id)arg1;

@end
