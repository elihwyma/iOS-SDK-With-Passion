/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKActionBinding.h>

@class NSMutableDictionary, NSString, UIPanGestureRecognizer;

@interface OKActionBindingPan : OKActionBinding

{
    unsigned long long _minimumNumberOfTouches;
    unsigned long long _maximumNumberOfTouches;
    _Bool _canPanHorizontally;
    _Bool _canPanVertically;
    double _directionThreshold;
    NSMutableDictionary *_actionContext;
    UIPanGestureRecognizer *_panGestureRecognizer;
    struct CGPoint _previousLocation;
    struct CGPoint _previousTranslation;
    struct CGPoint _previousVelocity;
    struct CGPoint _direction;
    struct CGPoint _directionLastLocation;
}

@property (nonatomic) unsigned long long minimumNumberOfTouches;
@property (nonatomic) unsigned long long maximumNumberOfTouches;
@property (nonatomic) _Bool canPanHorizontally;
@property (nonatomic) _Bool canPanVertically;
@property (nonatomic) double directionThreshold;
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
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePan:(id)arg1;
- (id)settingObjectForKey:(id)arg1;
- (void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2;
- (_Bool)respondsToAction:(id)arg1 isTouchCountAgnostic:(_Bool)arg2;
- (_Bool)ownsGestureRecognizer:(id)arg1;
- (void)performActionWithState:(unsigned long long)arg1 location:(struct CGPoint)arg2 touchCount:(unsigned long long)arg3 translation:(struct CGPoint)arg4 velocity:(struct CGPoint)arg5 direction:(unsigned long long)arg6 context:(id)arg7;

@end
