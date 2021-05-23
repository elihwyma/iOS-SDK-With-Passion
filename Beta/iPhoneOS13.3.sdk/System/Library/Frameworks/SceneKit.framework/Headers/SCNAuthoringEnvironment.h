/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, NSArray, NSMutableArray, NSMutableOrderedSet, NSSet, SCNAuthoringEnvironment2, SCNManipulator, SCNNode;

@protocol SCNAuthoringEnvironmentDelegate, SCNSceneRenderer;

@interface SCNAuthoringEnvironment : NSObject

{
    struct __C3DEngineContext *_engineContext;
    id <SCNSceneRenderer> _sceneRenderer;
    _Bool _sceneRendererIsSCNView;
    struct __C3DFXProgram *_noColorProgram;
    struct __C3DFXProgram *_colorOnlyProgram;
    struct __C3DFXProgram *_colorAndTextureProgram;
    struct __C3DFXProgram *_lightProbesProgram;
    struct __C3DFXProgram *_wireframeProgram;
    CDStruct_5d7f1bfa _logsInfo;
    CDStruct_5d7f1bfa _boldLogsInfo;
    CDStruct_5d7f1bfa _dynamicLinesInfo;
    CDStruct_5d7f1bfa _dynamicLinesNoDepthTestInfo;
    CDStruct_5d7f1bfa _dynamicTrianglesInfo;
    CDStruct_5d7f1bfa _overlayDynamicLinesInfo;
    CDStruct_5d7f1bfa _overlayDynamicTriangleInfo;
    CDStruct_5d7f1bfa _textInfo;
    CDStruct_5d7f1bfa _lightProbesInfo;
    CDStruct_c23cf450 _normalTextInfo;
    CDStruct_c23cf450 _boldTextInfo;
    struct __C3DRasterizerStates *_depthOnCullOnStates;
    struct __C3DRasterizerStates *_depthOffCullOnStates;
    struct __C3DRasterizerStates *_depthOnCullOffStates;
    struct __C3DRasterizerStates *_depthOffCullOffStates;
    const void *_arrowIndicesOffset;
    unsigned short _arrowIndicesCount;
    const void *_quadrantIndicesOffset;
    unsigned short _quadrantIndicesCount;
    const void *_quadrantRingIndicesOffset;
    unsigned short _quadrantRingIndicesCount;
    double _timedRecordingExpirationTime;
    unsigned char _timedRecordingBuffer[64000];
    unsigned int _timedRecordingBufferStart;
    unsigned int _timedRecordingBufferEnd;
    long long _authoringDisplayMask;
    unsigned int _hasLighting:1;
    _Bool _shouldSnapOnGrid;
    _Bool _shouldSnapToAlign;
    _Bool _selectionIsReadonly;
    long long _editingSpace;
    _Bool _graphicalSelectionEnabled;
    MISSING_TYPE *_selectionP0;
    MISSING_TYPE *_selectionP1;
    _Bool _selecting;
    _Bool _surroundToSelect;
    NSSet *_initialSelection;
    NSMutableOrderedSet *_selection;
    NSArray *_selectedNodes;
    _Bool _isOrbiting;
    float _lastGridDistance;
    double _gridUnit;
    NSMutableArray *_visibleManipulableItems;
    void *_wireframeRenderer;
    unsigned int _consoleLineCount;
    struct {
        _Bool initialized;
        _Bool showFullStatistics;
        _Bool showRenderOptionsPanel;
        float fps;
        float waitDisplayLinkTime;
        long long pressedButtonIndex;
        struct __CFString *fpsString;
        struct __CFString *shortString;
        struct __CFString *internalString;
        unsigned int lightingStatistics[9];
        struct __C3DEngineStats stats;
    } _statisticsInfo;
    float _drawScale;
    id _delegate;
    SCNAuthoringEnvironment2 *_authEnv2;
}

@property (readonly) id <SCNSceneRenderer> sceneRenderer;
@property (nonatomic, readonly) NSArray *selectedNodes;
@property (nonatomic) _Bool selectionIsReadonly;
@property (nonatomic, readonly) SCNManipulator *manipulator;
@property (nonatomic, readonly) SCNNode *authoringOverlayLayer;
@property (nonatomic) _Bool shouldSnapOnGrid;
@property (nonatomic) _Bool shouldSnapToAlign;
@property (nonatomic) _Bool graphicalSelectionEnabled;
@property (nonatomic) _Bool surroundToSelect;
@property (nonatomic) long long authoringDisplayMask;
@property (nonatomic, readonly) double gridUnit;
@property (nonatomic) long long editingSpace;
@property (nonatomic, readonly) struct SCNMatrix4 viewMatrix;
@property (nonatomic) id <SCNAuthoringEnvironmentDelegate> delegate;

+ (id)authoringEnvironmentForSceneRenderer:(id)arg1 createIfNeeded:(_Bool)arg2;
+ (long long)defaultAuthoringDisplayMask;
+ (id)rendererForSceneRenderer:(id)arg1;
+ (id)authoringEnvironmentForSceneRenderer:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)update;
- (id)renderer;
- (id)selectedItems;
- (_Bool)didTapAtPoint:(struct CGPoint)arg1;
- (id)_initWithEngineContext:(struct __C3DEngineContext *)arg1;
- (void)_setupAuthoringEnv2:(id)arg1;
- (void)setupAuthoringEnv2;
- (id)authoringEnvironment2;
- (void)sceneDidChange:(id)arg1;
- (void)beginEditingNodes:(id)arg1;
- (void)cancelEdition;
- (void)beginEditingNode:(id)arg1;
- (void)saveInitialSelection;
- (void)beginOrbiting;
- (void)endOrbiting;
- (void)drawLineFromPoint:(struct SCNVector3)arg1 toPoint:(struct SCNVector3)arg2 color:(id)arg3;
- (void)drawString:(id)arg1 atPoint:(struct CGPoint)arg2 color:(id)arg3;
- (_Bool)isEditingSubComponent;

@end
