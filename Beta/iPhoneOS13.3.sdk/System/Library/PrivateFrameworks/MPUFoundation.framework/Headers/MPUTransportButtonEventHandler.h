/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <Foundation/NSObject.h>

@class UIControl;

@protocol OS_dispatch_source;

@interface MPUTransportButtonEventHandler : NSObject

{
    NSObject<OS_dispatch_source> *_longPressTimer;
    _Bool _longPress;
    _Bool _shouldFakeEnabled;
    _Bool _supportsTapWhenDisabled;
    UIControl *_button;
    double _minimumLongPressDuration;
}

@property (weak, nonatomic) UIControl *button;
@property (nonatomic) double minimumLongPressDuration;
@property (nonatomic) _Bool supportsTapWhenDisabled;

- (id)init;
- (void)dealloc;
- (void)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)_clearLongPressTimer;
- (void)_longPressTimerAction;
- (id)performHitTestingBlock:(CDUnknownBlockType)arg1;
- (_Bool)shouldFakeEnabled;
- (_Bool)shouldForceTrackingEnabled;

@end
