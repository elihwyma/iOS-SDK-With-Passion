/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, NSMutableIndexSet, NSOrderedSet, SCNAuthoringEnvironment, SCNBillboardConstraint, SCNNode;

@interface SCNManipulator : NSObject

{
    SCNAuthoringEnvironment *_authoringEnvironment;
    NSOrderedSet *_targets;
    SCNNode *_node;
    union C3DMatrix4x4 _xAxisToZAxisTransform;
    union C3DMatrix4x4 _yAxisToZAxisTransform;
    union C3DMatrix4x4 _xyPlaneToYZPlaneTransform;
    union C3DMatrix4x4 _xyPlaneToXZPlaneTransform;
    unsigned short _selectedAxis;
    union {
        struct {
            MISSING_TYPE *originalPosition__axisDirection__mouseDeltaVector;
        } axisMove;
        struct {
            MISSING_TYPE *originalPosition__planeNormal__pointInPlane__mouseDeltaVector;
        } planeMove;
        struct {
            float rotationSign;
            MISSING_TYPE *originalRotation;
        } axisRotate;
    } _actionData;
    _Bool _isMouseDown;
    _Bool _readonly;
    unsigned short _action;
    struct CGPoint _originalMouseLocation;
    struct {
        void *positions;
        void *orientations;
        struct SCNMatrix4 *originalLocalMatrix;
        void *scales;
    } _originalData;
    unsigned int _originalDataCount;
    union C3DMatrix4x4 _worldInitialMatrix;
    union C3DMatrix4x4 _worldMatrix;
    long long _snapToAlignCount;
    CDStruct_962da47d *_snapToAlignOnX;
    CDStruct_962da47d *_snapToAlignOnY;
    CDStruct_962da47d *_snapToAlignOnZ;
    NSMutableIndexSet *_snapXIndexes;
    NSMutableIndexSet *_snapYIndexes;
    NSMutableIndexSet *_snapZIndexes;
    long long _xAlignment;
    long long _yAlignment;
    long long _zAlignment;
    SCNNode *_planarTranslationHandleXY;
    SCNNode *_planarTranslationHandleYZ;
    SCNNode *_planarTranslationHandleXZ;
    SCNNode *_planarTranslationHandles;
    SCNNode *_axis;
    SCNNode *_arcHandleXY;
    SCNNode *_arcHandleYZ;
    SCNNode *_arcHandleXZ;
    SCNNode *_arcHandles;
    SCNNode *_scaleNode;
    SCNNode *_screenSpaceRotation;
    SCNNode *_highlightNode;
    MISSING_TYPE *_planarTranslationLayout;
    _Bool _layoutLocked;
    SCNNode *_zArrow;
    SCNNode *_rotationHandles;
    SCNNode *_occluder;
    SCNNode *_translateHandles;
    SCNBillboardConstraint *_billboard;
    NSOrderedSet *_cloneSet;
    _Bool _cloning;
    unsigned long long _features;
    _Bool _alternateMode;
}

@property (readonly) SCNAuthoringEnvironment *authoringEnvironment;
@property (readonly) struct SCNMatrix4 transform;
@property (readonly) SCNNode *manipulatorNode;
@property (retain, nonatomic) NSOrderedSet *targets;
@property (retain, nonatomic) SCNNode *target;
@property (nonatomic) long long xAlignment;
@property (nonatomic) long long yAlignment;
@property (nonatomic) long long zAlignment;
@property (nonatomic) _Bool readonly;
@property (nonatomic) unsigned long long features;

- (id)init;
- (void)dealloc;
- (id)copy;
- (id)scene;
- (_Bool)isDragging;
- (_Bool)mouseUp:(CDStruct_8affffdd)arg1;
- (id)hitTest:(CDStruct_8affffdd)arg1;
- (_Bool)mouseDown:(CDStruct_8affffdd)arg1;
- (_Bool)mouseMoved:(CDStruct_8affffdd)arg1;
- (void)updateManipulatorNode;
- (void)_deleteOriginalData;
- (void)setupNode;
- (void)updateManipulatorComponents;
- (long long)effectiveEditingSpace;
- (unsigned long long)_effectiveFeatures;
- (void)unhighlightSelectedNode;
- (void)_updateActionWithEvent:(CDStruct_8affffdd)arg1;
- (MISSING_TYPE *)_snapPositionToAlign:(struct SCNVector3)arg1 original:(double)arg2 unit:(_Bool)arg3 axisMove:(_Bool *)arg4 rayStart:(long long *)arg5 rayDir:didSnap:snapIndexes: /* Error: Ran out of types for this method. */;
- (void)updateItemsPosition;
- (void)updateItemsRotation: /* Error: Ran out of types for this method. */;
- (void)updateItemsScale:(float)arg1;
- (void)_updateCloneStateWithEvent:(CDStruct_8affffdd)arg1;
- (_Bool)_applyWithEvent:(CDStruct_8affffdd)arg1;
- (void)_saveOriginalData;
- (void)clearSnapIndexes;
- (void)validateClones;
- (void)_prepareSnapToAlignData:(unsigned short)arg1 minOffset:maxOffset: /* Error: Ran out of types for this method. */;
- (void)prepareSnapToAlignData;
- (void)prepareSnapToAlignDataIfNeeded;
- (void)_setAuthoringEnvironment:(id)arg1;
- (void)updateManipulatorPosition:(struct __C3DEngineContext *)arg1;
- (void)editingSpaceChanged;
- (void)setAlternateMode:(_Bool)arg1;
- (void)lockLayout;
- (void)unlockLayout;
- (_Bool)mouseDragged:(CDStruct_8affffdd)arg1;
- (void)removeClonesFromScene;
- (void)addClonesToScene;
- (id)setupClones;
- (id)snapGuideIndexesOnAxis:(unsigned long long)arg1;
- (const CDStruct_962da47d *)snapInfoAtIndex:(unsigned long long)arg1 axis:(unsigned long long)arg2;

@end
