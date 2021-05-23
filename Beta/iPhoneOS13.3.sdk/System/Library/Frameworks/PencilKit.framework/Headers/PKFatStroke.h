/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <PencilKit/PKStroke.h>

@interface PKFatStroke : PKStroke

{
    vector_acef39cc _maskPaths;
    vector_63c28b85 _centerlineSlices;
}

+ (id)sliceWithEraser:(vector_acef39cc *)arg1 toClip:(id)arg2 clipType:(int)arg3;
+ (id)sliceWithEraser:(vector_acef39cc *)arg1 toClip:(id)arg2;

- (id).cxx_construct;
- (struct CGRect)_calculateBounds;
- (id)initWithStroke:(id)arg1;
- (id)sliceWithEraser:(vector_acef39cc *)arg1;
- (id)sliceWithMask:(vector_acef39cc *)arg1;
- (void)_appendPointsOfInterestForSelection:(vector_e1abc270 *)arg1;
- (id)initWithStroke:(id)arg1 hidden:(_Bool)arg2 version:(struct _PKStrokeID)arg3 ink:(id)arg4 transform:(struct CGAffineTransform)arg5 tRange:(CDStruct_88b945db)arg6;
- (_Bool)intersectsLineFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2 minThreshold:(double)arg3;
- (struct CGPath *)newPathRepresentation;
- (vector_63c28b85 *)centerlineSlices;
- (_Bool)intersectsClosedStroke:(id)arg1;
- (void)debugRender:(struct CGContext *)arg1;
- (void)generatePolyHull;
- (vector_acef39cc *)maskPaths;
- (void)calculateCenterlineSlices;
- (id)initWithArchive:(const struct Stroke *)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 parent:(id)arg4 isHidden:(_Bool)arg5;
- (unsigned int)saveToArchive:(struct Stroke *)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 withPathData:(_Bool)arg4 parent:(id)arg5 transient:(_Bool)arg6;

@end
