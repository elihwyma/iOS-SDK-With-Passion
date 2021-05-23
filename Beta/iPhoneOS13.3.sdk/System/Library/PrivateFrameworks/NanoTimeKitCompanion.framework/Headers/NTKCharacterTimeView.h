/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CLKDevice, CLKUIQuadView, NSString, NTKCharacterQuad, NTKCharacterRenderer, NTKCharacterResourceLoader;

@interface NTKCharacterTimeView : UIView

{
    CLKDevice *_device;
    NTKCharacterResourceLoader *_loader;
    NTKCharacterQuad *_characterQuad;
    CLKUIQuadView *_characterQuadView;
    NTKCharacterRenderer *_renderers[2];
    NTKCharacterRenderer *_renderer;
    unsigned long long _character;
    unsigned int _isRenderOneFrameRequested:1;
    unsigned int _isAnimating:1;
    unsigned int _isBackgrounded:1;
    unsigned int _renderWasIgnored:1;
    unsigned int _layoutWasIgnored:1;
    _Bool _frozen;
}

@property (nonatomic, readonly) CLKUIQuadView *quadView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isFrozen) _Bool frozen;

- (void)dealloc;
- (void)layoutSubviews;
- (void)_stopAnimation;
- (void)setTimeOffset:(double)arg1;
- (void)setAnimationFrameInterval:(long long)arg1;
- (void)_endScrubbing;
- (void)_willEnterForeground;
- (void)_didEnterBackground;
- (void)setCharacter:(unsigned long long)arg1;
- (void)_startAnimation;
- (void)setOverrideDate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2;
- (void)renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1 inGroup:(id)arg2;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)endScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)prepareToZoom;
- (void)cleanupAfterZoom;
- (void)setClothingColor:(id)arg1 andDesaturation:(double)arg2;
- (void)setZoomFraction:(double)arg1 diameter:(double)arg2;
- (void)scrubToDate:(id)arg1;
- (void)startScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_layoutRenderer;
- (void)setOverrideDate:(id)arg1 animated:(_Bool)arg2 enteringOrb:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)enumarateRenderers:(CDUnknownBlockType)arg1;
- (void)renderOneFrame;
- (void)setClothingColor:(id)arg1 andDesaturation:(double)arg2 forCharacter:(unsigned long long)arg3;
- (void)_renderOneFrame;
- (void)setOverrideDate:(id)arg1 animated:(_Bool)arg2 enteringOrb:(_Bool)arg3;
- (void)applyCharacterTransition:(double)arg1 fromCharacter:(unsigned long long)arg2 toCharacter:(unsigned long long)arg3;

@end
