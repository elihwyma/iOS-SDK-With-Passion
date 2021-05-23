/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKActionBinding.h>

@class CMAttitude, CMMotionManager, NSMutableDictionary, NSOperationQueue, NSString, UILongPressGestureRecognizer;

@interface OKActionBindingMotion : OKActionBinding

{
    unsigned long long _numberOfTouchesRequired;
    double _motionInterval;
    NSMutableDictionary *_motionContext;
    _Bool _shouldForwardMotion;
    CMMotionManager *_motionManager;
    CMAttitude *_motionAttitudeReference;
    NSOperationQueue *_motionQueue;
    double _lastYaw;
    double _lastRoll;
    double _lastPitch;
    double _lastRotationX;
    double _lastRotationY;
    double _lastRotationZ;
    struct CGPoint _lastLocation;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}

@property (retain) CMAttitude *motionAttitudeReference;
@property (nonatomic) unsigned long long numberOfTouchesRequired;
@property (nonatomic) double motionInterval;
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

@end
