/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class CAAnimation, NSDictionary, NSString, OFUIView;

@interface OKWidgetContentEffect : NSObject

{
    NSString *_uuid;
    NSDictionary *_settings;
    CAAnimation *_animation;
    OFUIView *_animatedView;
    _Bool _loop;
    _Bool _autoplay;
    _Bool _isPaused;
    _Bool _needsApplySettings;
    double _defaultDuration;
}

@property (nonatomic) OFUIView *animatedView;
@property (retain, nonatomic) CAAnimation *animation;
@property (nonatomic) _Bool loop;
@property (nonatomic) _Bool autoplay;
@property (nonatomic) double defaultDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)animationKeyPrefix;
+ (id)supportedSettings;

- (id)init;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;
- (_Bool)isAnimating;
- (void)startAnimation;
- (void)stopAnimation;
- (void)pauseAnimation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)resumeAnimation;
- (id)settingObjectForKey:(id)arg1;
- (void)setUserSettingObject:(id)arg1 forKey:(id)arg2;
- (void)applySettingsIfNeeded;
- (void)applySettings;
- (void)needsApplySettings;
- (void)prepareContentEffectWithView:(id)arg1;
- (double)remainingPlayDuration;

@end
