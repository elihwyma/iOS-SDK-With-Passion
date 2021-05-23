/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKWidgetView.h>

@class NSString, SKEmitterNode, SKNode, SKTexture, SKView;

@interface OKWidgetSpriteEmitterViewProxy : OKWidgetView

{
    SKView *_skView;
    NSString *_emitterResourceName;
    NSString *_particuleResourceName;
    SKEmitterNode *_emitterNode;
    SKTexture *_particuleTexture;
}

@property (copy, nonatomic) NSString *emitterResourceName;
@property (copy, nonatomic) NSString *particuleResourceName;
@property (retain, nonatomic) SKNode *emitterNode;
@property (retain, nonatomic) SKTexture *particuleTexture;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)arg1;

- (void)dealloc;
- (id)valueForUndefinedKey:(id)arg1;
- (void)layoutSubviews;
- (_Bool)prepareForDisplay:(_Bool)arg1;
- (id)initWithWidget:(id)arg1;
- (id)settingObjectForKey:(id)arg1;
- (_Bool)prepareForWarmup:(_Bool)arg1;
- (_Bool)prepareForUnload:(_Bool)arg1;
- (void)setSettingBackgroundColor:(id)arg1;
- (void)setAntialiasing:(_Bool)arg1;
- (void)unloadEmitter;
- (void)updateEmitter;
- (void)loadEmitterIfNeeded;
- (id)settingParticuleResource;
- (void)setSettingParticuleResource:(id)arg1;
- (id)settingEmitterResource;
- (void)setSettingEmitterResource:(id)arg1;

@end
