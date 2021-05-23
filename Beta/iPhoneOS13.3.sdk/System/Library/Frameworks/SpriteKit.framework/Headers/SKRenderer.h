/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableDictionary, SKScene, SKTransition;

@interface SKRenderer : NSObject

{
    _Bool _needsInitialUpdate;
    _Bool _disableInput;
    _Bool _hasRenderedForCurrentUpdate;
    double _currentTime;
    double _previousTime;
    struct SKCRenderer *_skcRenderer;
    SKScene *_scene;
    SKScene *_nextScene;
    SKTransition *_transition;
    struct CGRect _renderBounds;
    NSMapTable *_touchMap;
    NSMutableDictionary *_renderOptions;
}

@property (retain, nonatomic) SKScene *scene;
@property (nonatomic) _Bool ignoresSiblingOrder;
@property (nonatomic) _Bool shouldCullNonVisibleNodes;
@property (nonatomic) _Bool showsDrawCount;
@property (nonatomic) _Bool showsNodeCount;
@property (nonatomic) _Bool showsQuadCount;
@property (nonatomic) _Bool showsPhysics;
@property (nonatomic) _Bool showsFields;

+ (id)rendererWithDevice:(id)arg1;

- (void)dealloc;
- (void)_update:(double)arg1;
- (void)_initialize;
- (void)updateAtTime:(double)arg1;
- (id)_getOptions;
- (id)initWithSKCRenderer:(struct SKCRenderer *)arg1;
- (void)_notifyWillRenderContent;
- (void)renderWithViewport:(struct CGRect)arg1 renderCommandEncoder:(id)arg2 renderPassDescriptor:(id)arg3 commandQueue:(id)arg4;
- (void)renderWithViewport:(struct CGRect)arg1 commandBuffer:(id)arg2 renderPassDescriptor:(id)arg3;

@end
