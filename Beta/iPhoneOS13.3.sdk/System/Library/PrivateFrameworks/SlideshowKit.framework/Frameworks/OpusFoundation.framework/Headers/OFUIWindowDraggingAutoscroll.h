/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <NSObject.h>

@class NSTimer, UIView;

@protocol OFUIWindowDraggingAutoscroll;

@interface OFUIWindowDraggingAutoscroll : NSObject

{
    UIView<OFUIWindowDraggingAutoscroll> *_autoscrollView;
    NSTimer *_autoscrollTimer;
    float _autoscrollDistance;
}

@property (retain) UIView<OFUIWindowDraggingAutoscroll> *autoscrollView;
@property (retain, nonatomic) NSTimer *autoscrollTimer;
@property float autoscrollDistance;

- (id)init;
- (void)dealloc;
- (void)maybeStartAutoscrollForDraggingSession:(id)arg1;
- (void)stopAutoscroll;
- (id)_hitAutoscrollViewInSuperview:(id)arg1;
- (id)_hitAutoscrollViewWithDraggingSession:(id)arg1;
- (void)_autoscrollTimerFired:(id)arg1;

@end
