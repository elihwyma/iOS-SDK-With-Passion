/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKActionBinding.h>

@class NSString, OFUITrackingPinchGestureRecognizer;

@interface OKActionBindingFocusPinch : OKActionBinding

{
    unsigned long long _mode;
    OFUITrackingPinchGestureRecognizer *_pinchGestureRecognizer;
    unsigned long long _presentationMode;
}

@property (nonatomic) unsigned long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)supportedSettings;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)unload;
- (id)initWithSettings:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handlePinch:(id)arg1;
- (id)settingObjectForKey:(id)arg1;
- (void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2;
- (_Bool)respondsToAction:(id)arg1 isTouchCountAgnostic:(_Bool)arg2;
- (_Bool)ownsGestureRecognizer:(id)arg1;
- (void)_setFocusSize:(struct CGSize)arg1 angle:(float)arg2 toWidgetView:(id)arg3;

@end
