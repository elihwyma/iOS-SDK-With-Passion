/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, NSMutableDictionary, SKLabelNode, SKScene;

@interface SKSCNRenderer : NSObject

{
    double _timePreviousUpdate;
    struct SKCRenderer *_skcRenderer;
    NSMutableDictionary *_viewRenderOptions;
    SKLabelNode *_statsLabel;
    double _prevViewAspect;
    unsigned int _spritesRendered;
    unsigned int _spritesSubmitted;
    int _frames;
    unsigned int _prevSpritesRendered;
    unsigned int _prevSpritesRenderedSubmitted;
    double _timeBeginFrameCount;
    float _fps;
    _Bool _hasRenderedOnce;
    _Bool _hasRenderedForCurrentUpdate;
    _Bool _isInTransition;
    _Bool _disableInput;
    SKScene *_scene;
    float _prevBackingScaleFactor;
    _Bool showsFPS;
    _Bool showsNodeCount;
    double _backingScaleFactor;
    struct CGRect _bounds;
}

@property (retain, nonatomic) SKScene *scene;
@property (nonatomic) struct CGRect bounds;
@property (nonatomic) double backingScaleFactor;
@property (nonatomic) _Bool showsFPS;
@property (nonatomic) _Bool showsDrawCount;
@property (nonatomic) _Bool showsNodeCount;
@property (nonatomic) _Bool showsPhysics;
@property (nonatomic) _Bool showsFields;
@property (nonatomic) _Bool ignoresSiblingOrder;

+ (id)rendererWithContext:(id)arg1 options:(id)arg2;
+ (void)setPrefersOpenGL:(_Bool)arg1;
+ (id)rendererWithDevice:(id)arg1 options:(id)arg2;
+ (int)getOpenGLFramebuffer:(id)arg1;
+ (void)restoreDefaultOpenGLState:(id)arg1 frameBuffer:(int)arg2;

- (id)init;
- (void)dealloc;
- (void)_update:(double)arg1;
- (void)render:(_Bool)arg1;
- (id)_scene;
- (struct CGSize)pixelSize;
- (double)_fps;
- (void)_initialize;
- (void)updateAtTime:(double)arg1;
- (void)renderToFramebuffer:(int)arg1 shouldClear:(_Bool)arg2;
- (void)renderToTexture:(id)arg1 commandQueue:(id)arg2;
- (void)renderWithEncoder:(id)arg1 pass:(id)arg2 commandQueue:(id)arg3;
- (void)settingsForTransition:(id)arg1 atTime:(double)arg2 renderIncomingToTexture:(_Bool *)arg3 renderOutgoingToTexture:(_Bool *)arg4 renderIncomingToScreen:(_Bool *)arg5 renderOutgoingToScreen:(_Bool *)arg6;
- (void)renderTransition:(id)arg1 withInputTexture:(id)arg2 outputTexture:(id)arg3 time:(float)arg4 encoder:(id)arg5 pass:(id)arg6 commandQueue:(id)arg7;
- (void)renderTransition:(id)arg1 withInputTexture:(unsigned int)arg2 outputTexture:(unsigned int)arg3 inputTextureSize:(struct CGSize)arg4 outputTextureSize:(struct CGSize)arg5 time:(float)arg6;
- (void)setupContext;
- (void)setShowsSpriteBounds:(_Bool)arg1;
- (MISSING_TYPE *)_getDestBounds;
- (MISSING_TYPE *)_getViewport;
- (CDStruct_14d5dc5e)_getMatrix;
- (id)_getOptions;
- (void)renderTransition:(id)arg1 toFramebuffer:(int)arg2 withInputTexture:(unsigned int)arg3 outputTexture:(unsigned int)arg4 inputTextureSize:(struct CGSize)arg5 outputTextureSize:(struct CGSize)arg6 time:(float)arg7;
- (id)initWithSKCRenderer:(struct SKCRenderer *)arg1;
- (void)setShowsQuadCount:(_Bool)arg1;
- (void)set_showsCulledNodesInNodeCount:(_Bool)arg1;
- (void)set_showsGPUStats:(_Bool)arg1;
- (void)set_showsCPUStats:(_Bool)arg1;
- (void)set_showsCoreAnimationFPS:(_Bool)arg1;
- (void)set_showsTotalAreaRendered:(_Bool)arg1;
- (_Bool)showsSpriteBounds;
- (_Bool)showsQuadCount;
- (void)set_showsOutlineInterior:(_Bool)arg1;
- (_Bool)_showsOutlineInterior;
- (void)set_showsSpriteBounds:(_Bool)arg1;
- (_Bool)_showsSpriteBounds;
- (void)set_shouldCenterStats:(_Bool)arg1;
- (_Bool)_shouldCenterStats;
- (_Bool)_showsCoreAnimationFPS;
- (_Bool)_showsCPUStats;
- (_Bool)_showsGPUStats;
- (_Bool)_showsCulledNodesInNodeCount;
- (_Bool)_showsTotalAreaRendered;
- (void)_showAllStats;
- (int)_spriteRenderCount;
- (int)_spriteSubmitCount;

@end
