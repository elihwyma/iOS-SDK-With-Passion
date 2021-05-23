/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <UIWindow.h>

@class NSMutableDictionary, NSString, OFUIWindowDraggingAutoscroll, OFUIWindowDraggingGestureRecognizer, OFUIWindowDraggingSession;

@interface OFUIWindow : UIWindow

{
    OFUIWindowDraggingSession *_draggingSession;
    OFUIWindowDraggingGestureRecognizer *_draggingGestureRecognizer;
    OFUIWindowDraggingAutoscroll *_draggingAutoscroll;
    NSMutableDictionary *_eventsTracking;
    _Bool _showTouches;
}

@property (retain, nonatomic) OFUIWindowDraggingSession *draggingSession;
@property (retain, nonatomic) OFUIWindowDraggingGestureRecognizer *draggingGestureRecognizer;
@property (retain, nonatomic) OFUIWindowDraggingAutoscroll *draggingAutoscroll;
@property (nonatomic) _Bool showTouches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)isDragging;
- (void)sendEvent:(id)arg1;
- (void)handleDragging:(id)arg1;
- (void)cancelDragging;
- (id)beginDraggingItems:(id)arg1 position:(struct CGPoint)arg2 source:(id)arg3;

@end
