/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSString, UITapGestureRecognizer;

@protocol PUDoubleTapZoomControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUDoubleTapZoomController : NSObject

{
    struct {
        _Bool respondsToViewHostingGestureRecognizers;
        _Bool respondsToTilingView;
        _Bool respondsToDelegateForGestureRecognizer;
        _Bool respondsToCanDoubleTapBeginAtLocationFromProvider;
    } _delegateFlags;
    _Bool __needsUpdateGestureRecognizers;
    id <PUDoubleTapZoomControllerDelegate> _delegate;
    UITapGestureRecognizer *__doubleTapGestureRecognizer;
}

@property (nonatomic, setter=_setNeedsUpdateGestureRecognizers:) _Bool _needsUpdateGestureRecognizers;
@property (retain, nonatomic, setter=_setDoubleTapGestureRecognizer:) UITapGestureRecognizer *_doubleTapGestureRecognizer;
@property (weak, nonatomic) id <PUDoubleTapZoomControllerDelegate> delegate;
@property (nonatomic, readonly) UITapGestureRecognizer *doubleTapGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_handleDoubleTapGestureRecognizer:(id)arg1;
- (void)invalidateViewHostingGestureRecognizers;
- (void)_invalidateGestureRecognizers;
- (void)_updateGestureRecognizersIfNeeded;
- (_Bool)shouldDoubleTapBeginAtLocationFromProvider:(id)arg1;
- (id)_userTransformViewAtLocationFromProvider:(id)arg1;

@end
