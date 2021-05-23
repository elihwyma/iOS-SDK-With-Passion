/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKActionBinding.h>

@class NSMutableDictionary, NSString, OFUITrackingPinchGestureRecognizer;

@interface OKActionBindingPinch : OKActionBinding

{
    OFUITrackingPinchGestureRecognizer *_pinchGestureRecognizer;
    struct CGPoint _startLocation;
    double _isRotating;
    double _startAngle;
    NSMutableDictionary *_actionContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)supportedSettings;

- (id)init;
- (void)dealloc;
- (void)unload;
- (id)initWithSettings:(id)arg1;
- (void)handlePinch:(id)arg1;
- (id)settingObjectForKey:(id)arg1;
- (void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2;
- (_Bool)respondsToAction:(id)arg1 isTouchCountAgnostic:(_Bool)arg2;
- (_Bool)ownsGestureRecognizer:(id)arg1;
- (void)performActionWithState:(unsigned long long)arg1 location:(struct CGPoint)arg2 touchCount:(unsigned long long)arg3 scale:(double)arg4 angle:(double)arg5 translation:(struct CGPoint)arg6 velocity:(double)arg7 context:(id)arg8;

@end
