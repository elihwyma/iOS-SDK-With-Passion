/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, TSDLayoutGeometry;

@interface TSDAbstractLayout : NSObject

{
    TSDAbstractLayout *mParent;
    NSMutableArray *mChildren;
    TSDLayoutGeometry *mGeometry;
    struct CGPoint mInterimPosition;
    _Bool mInterimPositionXSet;
    _Bool mInterimPositionYSet;
    struct CGPoint mLastInterimPosition;
    _Bool mLastInterimPositionXSet;
    _Bool mLastInterimPositionYSet;
}

@property (copy, nonatomic) TSDLayoutGeometry *geometry;
@property (nonatomic) TSDAbstractLayout *parent;
@property (nonatomic, readonly) TSDAbstractLayout *root;
@property (copy, nonatomic) NSArray *children;
@property (nonatomic) double interimPositionX;
@property (nonatomic) double interimPositionY;

- (id)init;
- (void)dealloc;
- (void)addChild:(id)arg1;
- (struct CGAffineTransform)transform;
- (struct CGRect)frame;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeFromParent;
- (struct CGAffineTransform)transformInRoot;
- (void)fixTransformFromInterimPosition;
- (void)addLayoutsToArray:(id)arg1;
- (struct CGRect)frameInRoot;
- (struct CGRect)rectInRoot:(struct CGRect)arg1;
- (_Bool)supportsInspectorPositioning;
- (id)geometryInRoot;
- (_Bool)supportsRotation;
- (struct CGRect)alignmentFrame;
- (struct CGPoint)alignmentFrameOriginForFixingInterimPosition;
- (id)geometryInRoot:(id)arg1;
- (_Bool)isRootLayoutForInspectorGeometry;
- (void)fixTransformFromLastInterimPosition;
- (id)additionalDependenciesForChildLayout:(id)arg1;
- (struct CGRect)frameForCulling;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (id)delegateConformingToProtocol:(id)arg1 forLayout:(id)arg2;
- (struct CGRect)rectInParent:(struct CGRect)arg1;
- (struct CGAffineTransform)transformInParent;
- (_Bool)providesGuidesForChildLayouts;
- (id)parentLayoutForProvidingGuides;
- (void)addLayoutsInRect:(struct CGRect)arg1 toArray:(id)arg2 deep:(_Bool)arg3;
- (struct CGRect)alignmentFrameInRoot;
- (void)p_fixTransformFromInterimPosition:(struct CGPoint)arg1 interimPositionXSet:(_Bool)arg2 interimPositionYSet:(_Bool)arg3;
- (void)offsetGeometryBy:(struct CGPoint)arg1;
- (id)geometryInParent;
- (id)geometryForTransforming;
- (id)visibleGeometries;
- (struct CGRect)frameInParent;
- (_Bool)isAxisAlignedUnflippedInRoot;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (void)insertChild:(id)arg1 below:(id)arg2;
- (void)insertChild:(id)arg1 above:(id)arg2;
- (void)exchangeChildAtIndex:(unsigned long long)arg1 withChildAtIndex:(unsigned long long)arg2;
- (void)addDescendentLayoutsToArray:(id)arg1;
- (struct CGRect)alignmentFrameForProvidingGuidesInRoot;
- (_Bool)shouldSnapWhileResizing;
- (struct CGPoint)positionInRootForAttachmentPositioner;
- (_Bool)supportsResize;
- (_Bool)supportsParentRotation;
- (_Bool)supportsFlipping;
- (_Bool)canRotateChildLayout:(id)arg1;

@end
