/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKActionBinding.h>

@class AVCaptureSession, NSMutableDictionary, NSString, NSTimer, UILongPressGestureRecognizer;

@interface OKActionBindingMicrophoneNoise : OKActionBinding

{
    unsigned long long _numberOfTouchesRequired;
    double _interval;
    NSMutableDictionary *_actionContext;
    AVCaptureSession *_session;
    NSTimer *_timer;
    float _lastMeanAudioLevel;
    _Bool _shouldForwardMotion;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    struct CGPoint _lastLocation;
}

@property (nonatomic) unsigned long long numberOfTouchesRequired;
@property (nonatomic) double interval;
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
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleLongPress:(id)arg1;
- (id)settingObjectForKey:(id)arg1;
- (void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2;
- (_Bool)respondsToAction:(id)arg1 isTouchCountAgnostic:(_Bool)arg2;
- (void)_updateAudioLevels:(id)arg1;

@end
