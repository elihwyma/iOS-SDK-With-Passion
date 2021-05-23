/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

#import <PencilKit/Swift-Protocol.h>

@class CHRecognitionSession, NSArray, NSMapTable, NSMutableArray, NSString, NSUUID, PKVectorTimestamp, PKVisualizationManager;

@interface PKDrawing : NSObject <Swift>

{
    struct CGRect __canvasBounds;
    struct CGRect __bounds;
    struct shared_ptr<PKProtobufUnknownFields> _unknownFields;
    NSMutableArray *_visibleStrokes;
    _Bool _recognitionEnabled;
    NSArray *_forcedRecognitionLocales;
    NSUUID *_uuid;
    NSUUID *_replicaUUID;
    NSMutableArray *_allStrokes;
    PKVectorTimestamp *_version;
    CHRecognitionSession *_recognitionSession;
    NSMapTable *_ongoingQueries;
    PKVisualizationManager *_visualizationManager;
    struct _PKStrokeID _boundsVersion;
}

@property (nonatomic) long long _orientation;
@property (retain, nonatomic) NSMutableArray *_allStrokes;
@property (retain, nonatomic, setter=_setUUID:) NSUUID *uuid;
@property (nonatomic, readonly) NSUUID *replicaUUID;
@property (nonatomic, readonly) _Bool _hasReplicaUUID;
@property (retain, nonatomic) PKVectorTimestamp *version;
@property (nonatomic) struct _PKStrokeID boundsVersion;
@property (retain, nonatomic) CHRecognitionSession *recognitionSession;
@property (retain, nonatomic) NSMapTable *ongoingQueries;
@property (retain, nonatomic) PKVisualizationManager *visualizationManager;
@property (nonatomic, readonly) struct CGRect bounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)drawingWithData:(id)arg1;
+ (struct _PKStrokeID)newStrokeIDGreaterThan:(struct _PKStrokeID)arg1 forUUID:(id)arg2;
+ (void)sortStrokes:(id)arg1;
+ (long long)_currentSerializationVersion;
+ (id)_enabledLocales;
+ (id)visibleStrokesFromStrokes:(id)arg1 inDrawing:(id)arg2;
+ (struct CGAffineTransform)_orientationTransform:(long long)arg1 size:(struct CGSize)arg2;
+ (id)_defaultConversionQueue;
+ (id)_upgradeDrawingData:(id)arg1 queue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)data;
- (id)_data;
- (id)dataRepresentation;
- (id).cxx_construct;
- (id)debugQuickLookObject;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)serialize;
- (struct CGRect)_bounds;
- (id)strokes;
- (id)_strokes;
- (id)initWithStrokes:(id)arg1 fromDrawing:(id)arg2;
- (id)drawingByApplyingTransform:(struct CGAffineTransform)arg1;
- (id)_visibleStrokes;
- (id)CHDrawing;
- (id)visibleStrokes;
- (id)setStroke:(id)arg1 ink:(id)arg2;
- (id)_unclippedStroke:(id)arg1;
- (id)_clipAgainstLegacyCanvas:(id)arg1;
- (id)_clipStroke:(id)arg1;
- (void)setStrokeSortIDForInsertion:(id)arg1;
- (unsigned long long)mergeWithDrawing:(id)arg1;
- (void)setStrokes:(id)arg1 hidden:(_Bool)arg2;
- (id)visibleStrokeForInsertingStroke:(id)arg1;
- (void)addNewStroke:(id)arg1;
- (id)sliceWithEraseStroke:(id)arg1;
- (id)setStroke:(id)arg1 hidden:(_Bool)arg2;
- (void)invalidateVisibleStrokes;
- (void)set_canvasBounds:(struct CGRect)arg1;
- (id)strokesIntersectedByPoint:(struct CGPoint)arg1 prevPoint:(struct CGPoint)arg2 onscreenVisibleStrokes:(id)arg3;
- (struct CGRect)_eraserStrokeBounds;
- (struct CGRect)_canvasBounds;
- (id)strokeForIdentifier:(id)arg1;
- (void)queryDidUpdateResult:(id)arg1;
- (id)initWithDrawing:(id)arg1;
- (void)_teardownRecognitionObjects;
- (id)_copyAndAddStroke:(id)arg1 transform:(struct CGAffineTransform)arg2 ink:(id)arg3 isSequentialCopy:(_Bool)arg4;
- (struct CGRect)calculateStrokeBounds;
- (struct _PKStrokeID)newStrokeIDGreaterThan:(struct _PKStrokeID)arg1;
- (id)visibleStrokeForInsertingStroke:(id)arg1 ink:(id)arg2;
- (id)visibleStrokeForInsertingStroke:(id)arg1 transform:(struct CGAffineTransform)arg2 ink:(id)arg3;
- (void)invalidateStrokeBounds;
- (void)setNeedsRecognitionUpdate;
- (id)_copyAndAddStroke:(id)arg1 transform:(struct CGAffineTransform)arg2;
- (struct _PKStrokeID)strokeVersionForUpdatedStroke:(id)arg1;
- (void)updateStrokes:(CDUnknownBlockType)arg1;
- (void)_updateStrokes:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;
- (id)_stroke:(id)arg1 transformed:(struct CGAffineTransform)arg2 concat:(_Bool)arg3;
- (id)_newStroke:(id)arg1 withInk:(id)arg2;
- (id)updateStroke:(id)arg1 updater:(CDUnknownBlockType)arg2;
- (void)willMergeWithDrawing:(id)arg1;
- (void)didMergeWithDrawing:(id)arg1;
- (id)strokesIntersectedByPoint:(struct CGPoint)arg1 prevPoint:(struct CGPoint)arg2 minThreshold:(double)arg3 transform:(struct CGAffineTransform)arg4 onscreenVisibleStrokes:(id)arg5;
- (id)imageFromRect:(struct CGRect)arg1 scale:(double)arg2;
- (id)_initWithData:(id)arg1 loadNonInkingStrokes:(_Bool)arg2 error:(id *)arg3;
- (void)_updateRecognitionSession;
- (_Bool)recognitionEnabled;
- (id)forcedRecognitionLocales;
- (id)indexableContent;
- (_Bool *)_newAsciiBitfield;
- (id)strokeProviderSnapshot;
- (id)dataRepresentationForStrokeProviderVersion:(id)arg1;
- (id)strokeProviderVersionFromData:(id)arg1;
- (id)dataRepresentationForStrokeIdentifier:(id)arg1;
- (id)strokeIdentifierFromData:(id)arg1;
- (void)_imageInRect:(struct CGRect)arg1 scale:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)drawingByAppendingDrawing:(id)arg1;
- (struct CGRect)strokeBounds;
- (void)sortStrokes;
- (id)insertNewTestStroke;
- (id)_addStroke:(id)arg1;
- (void)_removeStroke:(id)arg1;
- (id)copyAndAddStroke:(id)arg1 transform:(struct CGAffineTransform)arg2;
- (void)setStrokes:(id)arg1 transform:(struct CGAffineTransform)arg2 concat:(_Bool)arg3;
- (void)setStrokes:(id)arg1 inks:(id)arg2;
- (void)_transformAllStrokes:(struct CGAffineTransform)arg1;
- (id)setStroke:(id)arg1 transform:(struct CGAffineTransform)arg2 concat:(_Bool)arg3;
- (void)setStrokeSubstrokes:(id)arg1;
- (void)_mergeStroke:(id)arg1;
- (id)_strokesIntersectedByPoint:(struct CGPoint)arg1 prevPoint:(struct CGPoint)arg2 transform:(struct CGAffineTransform)arg3;
- (void)_addTestDataToUnknownFields;
- (id)_dataInUnknownFields;
- (void)setRecognitionEnabled:(_Bool)arg1;
- (void)setForcedRecognitionLocales:(id)arg1;
- (void)cancelOngoingRecognitionRequests;
- (void)performSearchQuery:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)_ascii;
- (id)serializeWithVersion:(long long)arg1;
- (id)serializeTransiently;
- (long long)_minimumSerializationVersion;
- (id)initWithLegacyData:(id)arg1;
- (id)_upgradeOnQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (CDStruct_5f3a0cd7)_drawingStrokeInfo;
- (struct CGSize)_unscaledOrientedDrawingSize;
- (double)_conversionScaleFactor;
- (void)_removeInvisibleStrokes;
- (void)_removeHiddenAndEraserStrokes;
- (struct CGAffineTransform)_transformForImageWithSize:(struct CGSize)arg1;
- (struct CGSize)_orientedDrawingSize;
- (void)_upgradeLegacyPenInks;
- (id)initWithV1Data:(id)arg1 loadNonInkingStrokes:(_Bool)arg2;
- (id)v1SerializeWithPathData:(_Bool)arg1 toVersion:(unsigned int *)arg2;
- (id)_initWithUnzippedData:(id)arg1 loadNonInkingStrokes:(_Bool)arg2 error:(id *)arg3;
- (id)initWithArchive:(const struct Drawing *)arg1 loadNonInkingStrokes:(_Bool)arg2 error:(id *)arg3;
- (void)saveToArchive:(struct Drawing *)arg1 withPathData:(_Bool)arg2;
- (id)initWithV1Archive:(const Drawing_54c0d626 *)arg1 loadNonInkingStrokes:(_Bool)arg2;
- (id)initWithLegacyArchive:(const struct Drawing *)arg1;
- (unsigned int)saveToV1Archive:(Drawing_54c0d626 *)arg1 withPathData:(_Bool)arg2;
- (id)_initWithUnzippedData:(id)arg1 error:(id *)arg2;
- (id)v1SerializeWithPathData:(_Bool)arg1;

@end
