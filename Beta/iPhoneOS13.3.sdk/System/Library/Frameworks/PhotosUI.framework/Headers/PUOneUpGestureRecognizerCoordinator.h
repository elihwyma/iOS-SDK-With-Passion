/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString, PUBrowsingSession, PUDoubleTapZoomController, PULongPressDragController, PUOneUpBarsController, PUTouchingGestureRecognizer, UILongPressGestureRecognizer;

@protocol PUOneUpGestureRecognizerCoordinatorDelegate;

__attribute__((visibility("hidden")))
@interface PUOneUpGestureRecognizerCoordinator : NSObject

{
    struct {
        _Bool respondsToViewHostingGestureRecognizers;
        _Bool respondsToShouldAllowIrisGestureRecognizer;
    } _delegateFlags;
    PUTouchingGestureRecognizer *_touchingGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    _Bool __needsUpdateGestureRecognizers;
    id <PUOneUpGestureRecognizerCoordinatorDelegate> _delegate;
    PUBrowsingSession *_browsingSession;
    PUOneUpBarsController *_oneUpBarsController;
    PUDoubleTapZoomController *_doubleTapZoomController;
    PULongPressDragController *_longPressDragController;
    NSHashTable *__irisGestureRecognizers;
}

@property (retain, nonatomic, setter=_setIrisGestureRecognizers:) NSHashTable *_irisGestureRecognizers;
@property (nonatomic, setter=_setNeedsUpdateGestureRecognizers:) _Bool _needsUpdateGestureRecognizers;
@property (weak, nonatomic) id <PUOneUpGestureRecognizerCoordinatorDelegate> delegate;
@property (retain, nonatomic) PUBrowsingSession *browsingSession;
@property (retain, nonatomic) PUOneUpBarsController *oneUpBarsController;
@property (retain, nonatomic) PUDoubleTapZoomController *doubleTapZoomController;
@property (retain, nonatomic) PULongPressDragController *longPressDragController;
@property (nonatomic, readonly) PUTouchingGestureRecognizer *touchingGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (id)longPressGestureRecognizer;
- (void)invalidateViewHostingGestureRecognizers;
- (void)_invalidateGestureRecognizers;
- (void)_updateGestureRecognizersIfNeeded;
- (void)addIrisGestureRecognizer:(id)arg1;

@end
