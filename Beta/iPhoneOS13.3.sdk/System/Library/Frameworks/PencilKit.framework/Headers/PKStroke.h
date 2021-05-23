/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

#import <PencilKit/Swift-Protocol.h>

@class NSArray, NSUUID, PKInk, _PKStrokeClipPlane, _PKStrokeData;

@interface PKStroke : NSObject <Swift>

{
    struct shared_ptr<PKProtobufUnknownFields> _unknownFields;
    struct CGRect _cachedBounds;
    PKInk *_ink;
    CDStruct_87ef4b51 _flags;
    NSUUID *_strokeUUID;
    _PKStrokeData *_strokeData;
    NSArray *_substrokes;
    _PKStrokeClipPlane *__clipPlane;
    CDStruct_88b945db _tRange;
    struct _PKStrokeID _version;
    struct _PKStrokeID _sortID;
    struct _PKStrokeID _substrokesVersion;
    struct CGAffineTransform _transform;
}

@property (retain, nonatomic) _PKStrokeClipPlane *_clipPlane;
@property (nonatomic) CDStruct_87ef4b51 _flags;
@property (nonatomic, getter=_isHidden, setter=_setHidden:) _Bool _hidden;
@property (nonatomic, readonly) _Bool _isFullyHidden;
@property (nonatomic, getter=_isNewCopy, setter=_setIsNewCopy:) _Bool _isNewCopy;
@property (retain, nonatomic) _PKStrokeData *_strokeData;
@property (nonatomic, readonly) NSUUID *_strokeDataUUID;
@property (nonatomic, setter=_setBounds:) struct CGRect _bounds;
@property (nonatomic, readonly) struct CGRect _untransformedBounds;
@property (nonatomic, readonly) unsigned int _randomSeed;
@property (retain, nonatomic) PKInk *ink;
@property (retain, nonatomic, setter=_setStrokeUUID:) NSUUID *_strokeUUID;
@property (nonatomic) struct _PKStrokeID _sortID;
@property (nonatomic) struct _PKStrokeID _version;
@property (nonatomic, setter=_setTransform:) struct CGAffineTransform _transform;
@property (nonatomic) CDStruct_88b945db _tRange;
@property (nonatomic) struct _PKStrokeID _substrokesVersion;
@property (retain, nonatomic) NSArray *_substrokes;
@property (nonatomic, readonly) double timestamp;

+ (id)copyStrokes:(id)arg1 hidden:(_Bool)arg2;
+ (long long)_asciiDimensionForBoundsDimension:(double)arg1;
+ (long long)_asciiBitfieldIndexForX:(long long)arg1 y:(long long)arg2 width:(long long)arg3;
+ (id)_testStrokeFromPoints:(struct PKCompressedStrokePoint *)arg1 length:(long long)arg2 ink:(id)arg3;
+ (struct PKCompressedStrokePoint)_compressStrokePoint:(struct _PKStrokePoint)arg1 withTimestamp:(double)arg2;
+ (struct _PKStrokePoint)_decompressStrokePoint:(struct PKCompressedStrokePoint)arg1 withTimestamp:(double)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)dataRepresentation;
- (double)_timestamp;
- (id).cxx_construct;
- (struct CGRect)bounds;
- (id)debugQuickLookObject;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (const struct _PKStrokeDataPoints *)_points;
- (long long)_inputType;
- (double)startTimestamp;
- (double)endTimestamp;
- (struct CGPoint)locationAtIndex:(unsigned long long)arg1;
- (double)timestampAtIndex:(unsigned long long)arg1;
- (struct CGRect)_calculateBounds;
- (id)initWithArchive:(const struct StrokeDelta *)arg1 error:(id *)arg2;
- (void)saveToArchive:(struct StrokeDelta *)arg1;
- (id)_ink;
- (id)deltaTo:(id)arg1;
- (void)generateClipPaths:(vector_acef39cc *)arg1 transform:(struct CGAffineTransform)arg2;
- (_Bool)_shouldBeClippedAgainstLegacyCanvas;
- (id)copyForMutation;
- (id)initWithStroke:(id)arg1;
- (id)_sliceWithSlicingBlock:(CDUnknownBlockType)arg1 replica:(id)arg2;
- (id)copyForMutationWithSubstrokes:(id)arg1;
- (struct CGPath *)_newPathRepresentation;
- (void)_appendPointsOfInterestForSelection:(vector_e1abc270 *)arg1;
- (void)interpolatePointDataWithStep:(double)arg1 from:(double)arg2 to:(double)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (long long)compareToStroke:(id)arg1;
- (unsigned long long)_pointsCount;
- (void)enumeratePointsWithDistanceStep:(double)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumeratePointsWithTimestep:(double)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_setInk:(id)arg1;
- (id)initWithArchive:(const struct Stroke *)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3;
- (unsigned int)saveToArchive:(struct Stroke *)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 withPathData:(_Bool)arg4 transient:(_Bool)arg5;
- (id)strokeApplying:(id)arg1;
- (long long)_visibleSubstrokeCount;
- (void)_addVisibleSubstrokesTo:(id)arg1;
- (id)initWithStroke:(id)arg1 hidden:(_Bool)arg2 version:(struct _PKStrokeID)arg3 ink:(id)arg4 transform:(struct CGAffineTransform)arg5 tRange:(CDStruct_88b945db)arg6;
- (id)initWithData:(id)arg1 id:(id)arg2 sortID:(struct _PKStrokeID)arg3 timestamp:(double)arg4 flags:(CDStruct_87ef4b51)arg5 version:(struct _PKStrokeID)arg6 ink:(id)arg7 transform:(struct CGAffineTransform)arg8 tRange:(CDStruct_88b945db)arg9 substrokes:(id)arg10 substrokesVersion:(struct _PKStrokeID)arg11;
- (id)_updateStroke:(CDUnknownBlockType)arg1;
- (id)_mergeWithStroke:(id)arg1;
- (_Bool)intersectsLineFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2 minThreshold:(double)arg3;
- (_Bool *)_newAsciiBitfield;
- (void)_addTestDataToUnknownFields;
- (id)_dataInUnknownFields;
- (id)_ascii;
- (id)_initWithPath:(struct CGPath *)arg1 ink:(id)arg2 inputScale:(double)arg3 velocityForDistanceFunction:(CDUnknownBlockType)arg4;
- (id)initWithStroke:(id)arg1 hidden:(_Bool)arg2 version:(struct _PKStrokeID)arg3;
- (void)_consumeRenderVertexes:(CDUnknownBlockType)arg1;
- (void)interpolatePointDataWithStep:(double)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)descriptionAtDepth:(long long)arg1;
- (_Bool *)_newAsciiBitfieldWithWidth:(long long)arg1 height:(long long)arg2;
- (id)_substrokeWithRange:(struct _NSRange)arg1;
- (id)_initWithStroke:(id)arg1 strokeData:(id)arg2;
- (struct CGPoint)_locationAtIndex:(unsigned long long)arg1 applyStrokeTransform:(_Bool)arg2;
- (struct CGPoint)_locationAtIndex:(unsigned long long)arg1;
- (double)_timestampAtIndex:(unsigned long long)arg1;
- (id)_initWithPath:(struct CGPath *)arg1 ink:(id)arg2 inputScale:(double)arg3;
- (id)initWithStroke:(id)arg1 hidden:(_Bool)arg2 version:(struct _PKStrokeID)arg3 transform:(struct CGAffineTransform)arg4;
- (id)initWithData:(id)arg1 id:(id)arg2 sortID:(struct _PKStrokeID)arg3 timestamp:(double)arg4 hidden:(_Bool)arg5 version:(struct _PKStrokeID)arg6 ink:(id)arg7 transform:(struct CGAffineTransform)arg8 tRange:(CDStruct_88b945db)arg9 substrokes:(id)arg10 substrokesVersion:(struct _PKStrokeID)arg11;
- (struct CGPath *)newPathRepresentation;
- (void)_invalidateBounds;
- (id)substrokeWithRange:(struct _NSRange)arg1;
- (_Bool)_containsSamePointsAsStroke:(id)arg1;
- (unique_ptr_5ffa53b3)_compressedStrokePoints;
- (_Bool)intersectsClosedStroke:(id)arg1;
- (_Bool)_visitVisibleSubstrokes:(CDUnknownBlockType)arg1;
- (id)_mergeUnparentedWithStroke:(id)arg1;
- (id)_updateWithParent:(id)arg1;
- (id)mergeArrayOfStrokes:(id)arg1 with:(id)arg2;
- (void)debugRender:(struct CGContext *)arg1;
- (vector_acef39cc *)newOutlinePaths;
- (id)initWithV1Archive:(const struct Stroke *)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3;
- (id)initWithLegacyArchive:(const struct Command *)arg1 sortedUUIDs:(id)arg2;
- (void)saveUUIDsTo:(id)arg1;
- (void)saveInksTo:(id)arg1;
- (unsigned int)saveToV1Archive:(struct Stroke *)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 withPathData:(_Bool)arg4 transient:(_Bool)arg5;
- (id)initWithArchive:(const struct Stroke *)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 parent:(id)arg4 isHidden:(_Bool)arg5;
- (struct _PKStrokeID)readStrokeIDFromArchive:(const struct StrokeID *)arg1 withSortedUUIDs:(id)arg2;
- (unsigned int)saveToArchive:(struct Stroke *)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 withPathData:(_Bool)arg4 parent:(id)arg5 transient:(_Bool)arg6;
- (void)saveStrokeID:(const struct _PKStrokeID *)arg1 toArchive:(struct StrokeID *)arg2 withSortedUUIDs:(id)arg3;
- (struct _PKStrokeID)readV1StrokeIDFromArchive:(const struct StrokeID *)arg1 withSortedUUIDs:(id)arg2;
- (struct _PKStrokePoint)readPointFromLegacyArchive:(const struct Point *)arg1 deltaFrom:(const struct _PKStrokePoint *)arg2;
- (void)saveV1StrokeID:(const struct _PKStrokeID *)arg1 toArchive:(struct StrokeID *)arg2 withSortedUUIDs:(id)arg3;
- (struct CGPoint)readPointFromArchive:(const struct Point *)arg1;

@end
