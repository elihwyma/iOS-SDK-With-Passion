/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKWidgetView.h>

@class OFEmitterView;

@interface OKWidgetEmitterView : OKWidgetView

{
    unsigned int _seed;
    OFEmitterView *_emitterView;
    struct CGPoint _originalEmitterPosition;
}

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)arg1;

- (void)dealloc;
- (void)layoutSubviews;
- (_Bool)prepareForDisplay:(_Bool)arg1;
- (id)initWithWidget:(id)arg1;
- (id)settingObjectForKey:(id)arg1;
- (double)settingBirthRate;
- (void)setSettingBirthRate:(double)arg1;
- (id)settingEmitterCells;
- (void)setSettingEmitterCells:(id)arg1;
- (double)settingLifetime;
- (void)setSettingLifetime:(double)arg1;
- (double)settingScale;
- (void)setSettingScale:(double)arg1;
- (double)settingSpin;
- (void)setSettingSpin:(double)arg1;
- (double)settingVelocity;
- (void)setSettingVelocity:(double)arg1;
- (_Bool)prepareForWarmup:(_Bool)arg1;
- (_Bool)prepareForUnload:(_Bool)arg1;
- (void)resumeEmitter;
- (void)pauseEmitter;
- (_Bool)isEmitting;
- (double)settingEmitterDepth;
- (void)setSettingEmitterDepth:(double)arg1;
- (id)settingEmitterMode;
- (void)setSettingEmitterMode:(id)arg1;
- (struct CGPoint)settingEmitterPosition;
- (void)setSettingEmitterPosition:(struct CGPoint)arg1;
- (id)settingEmitterShape;
- (void)setSettingEmitterShape:(id)arg1;
- (struct CGSize)settingEmitterSize;
- (void)setSettingEmitterSize:(struct CGSize)arg1;
- (double)settingEmitterZPosition;
- (void)setSettingEmitterZPosition:(double)arg1;
- (id)settingRenderMode;
- (void)setSettingRenderMode:(id)arg1;
- (double)settingSeed;
- (void)setSettingSeed:(double)arg1;

@end
