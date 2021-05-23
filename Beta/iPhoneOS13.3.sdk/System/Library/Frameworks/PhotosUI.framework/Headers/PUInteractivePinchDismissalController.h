/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUInteractiveDismissalController.h>

@class NSString, PUChangeDirectionValueFilter, PUPinchedTileTracker, UIPinchGestureRecognizer;

__attribute__((visibility("hidden")))
@interface PUInteractivePinchDismissalController : PUInteractiveDismissalController

{
    _Bool _handlingPinchGestureRecognizer;
    UIPinchGestureRecognizer *__pinchGestureRecognizer;
    PUChangeDirectionValueFilter *__scaleDirectionValueFilter;
    PUPinchedTileTracker *__pinchedTileTracker;
}

@property (retain, nonatomic, setter=_setPinchGestureRecognizer:) UIPinchGestureRecognizer *_pinchGestureRecognizer;
@property (nonatomic, getter=_isHandlingPinchGestureRecognizer, setter=_setHandlingPinchGestureRecognizer:) _Bool handlingPinchGestureRecognizer;
@property (retain, nonatomic, setter=_setScaleDirectionValueFilter:) PUChangeDirectionValueFilter *_scaleDirectionValueFilter;
@property (retain, nonatomic, setter=_setPinchedTileTracker:) PUPinchedTileTracker *_pinchedTileTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)_handlePinchGestureRecognizer:(id)arg1;
- (void)updateGestureRecognizersWithHostingView:(id)arg1;
- (id)pinchedTiledTracker:(id)arg1 finalLayoutInfoForInitialLayoutInfo:(id)arg2;

@end
