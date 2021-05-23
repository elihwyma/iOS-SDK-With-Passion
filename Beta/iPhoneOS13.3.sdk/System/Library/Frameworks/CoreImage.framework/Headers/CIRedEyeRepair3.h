/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@protocol RedEyeInspector3;

__attribute__((visibility("hidden")))
@interface CIRedEyeRepair3 : NSObject

{
    id <RedEyeInspector3> inspector;
    CDStruct_c3faddef fullBitmap;
    CDStruct_5973fb4f subRectangle;
    CDStruct_7286a259 FC;
    NSArray *faceArray;
    CDStruct_c3faddef faceBitmap;
    CDStruct_242bf05f S;
    struct {
        int width;
        int height;
        struct CGAffineTransform T;
        struct CGAffineTransform Tp;
        CDStruct_c3faddef O;
        CDStruct_c3faddef OO;
        _Bool computeEyePolygon;
        CDStruct_c3faddef EP;
        _Bool maskRender;
        CDStruct_c3faddef D;
        _Bool computeGradient;
        CDStruct_c3faddef G;
        CDStruct_c3faddef M;
        _Bool computeShine;
        CDStruct_c3faddef S;
        CDStruct_c3faddef P;
    } PB;
    CDStruct_ea27cb70 G;
    CDStruct_3882bc9d M;
    CDStruct_fc6961d5 FS;
    int printFaceArrayLevel;
    struct CGRect ROIRect;
    float avgLuminance;
    float minLuminance;
    float maxLuminance;
    float skinval;
    int ioffx;
    int ioffy;
    int erError;
    NSMutableArray *repairs;
    CDStruct_5973fb4f repairRect;
    CDStruct_c3faddef repairMap;
    NSMutableArray *failureCauses;
}

+ (struct CGRect)supportRectangleWithFaceArray:(id)arg1 options:(id)arg2;
+ (struct CGRect)supportRectangleWithRepair:(id)arg1 imageSize:(struct CGSize)arg2;
+ (float)yawAngleWithFaceDictionary:(id)arg1;
+ (int)bitmapRect:(CDStruct_a734b2e2 *)arg1 point:(struct CGPoint *)arg2 polygon:(struct CGPoint [8])arg3 andDistMatrix:(float [4])arg4 forEye:(int)arg5 inFaceDictionary:(id)arg6 settings:(CDStruct_242bf05f *)arg7;
+ (int)faceContext:(CDStruct_7286a259 *)arg1 withFaceArray:(id)arg2 index:(int)arg3 settings:(CDStruct_242bf05f *)arg4;
+ (CDStruct_242bf05f)settingsWithOptions:(id)arg1;
+ (CDStruct_a734b2e2)bitmapRectWithImageSubRectangle:(struct CGRect)arg1 settings:(CDStruct_242bf05f *)arg2;
+ (void)insertIntoThreadHopper:(CDStruct_b443dc70 *)arg1 index:(int)arg2 recChannel:(float)arg3 hue:(float)arg4 saturation:(float)arg5 luminance:(float)arg6 shapeMetricTotal:(float)arg7 xPosition:(float)arg8;
+ (void)insertIntoConnectionHopper:(CDStruct_ccbddcce *)arg1 index1:(int)arg2 drop1:(int)arg3 index2:(int)arg4 drop2:(int)arg5 score:(float)arg6;

- (void)dealloc;
- (id)initWithExternalBuffer:(char *)arg1 subRectangle:(struct CGRect)arg2 rowBytes:(unsigned long long)arg3 options:(id)arg4;
- (void)autoRepairWithFaceArray:(id)arg1;
- (id)repairArray;
- (struct CGAffineTransform)inverseImageTransformForOrientation:(int)arg1;
- (void)executeRepair:(id)arg1;
- (void)repairExternalBuffer;
- (void)printFaceArray;
- (int)updateWithFaceIndex:(int)arg1;
- (int)transformRepairArray:(struct CGAffineTransform)arg1;
- (struct CGPoint)globalBitmapPointWithDictionaryPoint:(struct CGPoint)arg1;
- (CDStruct_a734b2e2)globalBitmapRectWithDictionaryRectArray:(id)arg1;
- (struct CGPoint)dictionaryPointWithGlobalBitmapPoint:(struct CGPoint)arg1;
- (id)dictionaryRectArrayWithGlobalBitmapRect:(CDStruct_a734b2e2)arg1;
- (struct CGPoint)leftHandedTransform:(struct CGAffineTransform)arg1 ofPoint:(struct CGPoint)arg2;
- (id)mutableCopyOfArray:(id)arg1;
- (void)setInspector:(id)arg1;
- (CDStruct_c3faddef *)repairMap;
- (CDStruct_a734b2e2)repairRect;
- (struct CGPoint)bitmapPointWithDictionaryPoint:(struct CGPoint)arg1;
- (struct CGPoint)dictionaryPointWithBitmapPoint:(struct CGPoint)arg1;
- (CDStruct_a734b2e2)bitmapRectWithDictionaryRectArray:(id)arg1;
- (id)dictionaryRectArrayWithBitmapRect:(CDStruct_a734b2e2)arg1;
- (id)repairWithSide:(int)arg1;
- (struct CGPoint)centroidWithConvexHull:(CDStruct_d01ad076 *)arg1;
- (id)dictionaryPointArrayWithEyeBitmapPoint:(struct CGPoint)arg1;
- (id)dictionaryPointArrayWithBitmapPoint:(struct CGPoint)arg1;
- (id)dictionaryPointArrayWithGlobalBitmapPoint:(struct CGPoint)arg1;
- (struct CGPoint)globalBitmapPointWithDictionaryPointArray:(id)arg1;
- (_Bool)unpackToGlobalRepairDictionary:(id)arg1 convexHull:(CDStruct_183601bc **)arg2 facts:(CDStruct_73443751 *)arg3;
- (id)stringWithRER3Error:(int)arg1;
- (_Bool)gatherFaceStatistics:(CDStruct_3882bc9d *)arg1;
- (int)repairDictionary:(id *)arg1 withEyeIndex:(int)arg2;
- (void)transformGlobalsWithTransform:(struct CGAffineTransform)arg1;
- (void)transformConvexHull:(CDStruct_d01ad076 *)arg1 withTransform:(struct CGAffineTransform)arg2;
- (int)packGlobalRepairDictionary:(id *)arg1 withConvexHull:(CDStruct_d01ad076 *)arg2 facts:(CDStruct_73443751 *)arg3;
- (int)executeRepairWithRepairDictionary:(id)arg1;
- (struct CGPoint)bitmapPointWithDictionaryPointArray:(id)arg1;
- (int)saveRepairDictionary:(id *)arg1 withConvexHull:(CDStruct_d01ad076 *)arg2 facts:(CDStruct_73443751 *)arg3;
- (_Bool)openRepairDictionary:(id)arg1 convexHull:(CDStruct_183601bc **)arg2 facts:(CDStruct_73443751 *)arg3;
- (void)start12BitRandom:(int)arg1;
- (double)next12BitRandom;
- (void)termShapePoints:(CDStruct_892ad059 *)arg1;
- (void)point:(struct CGPoint)arg1 toGridRow:(int *)arg2 column:(int *)arg3;
- (void)removeThreadAtIndex:(int)arg1;
- (int)gatherThreadInfo:(CDStruct_ed92ceb9 *)arg1;
- (int)lookForPoint:(struct CGPoint *)arg1 onLine:(CDStruct_12b04d25)arg2 nearestPoint:(struct CGPoint)arg3;
- (void)forAllGridPointsNear:(int)arg1 withinRadius:(float)arg2 do:(CDUnknownFunctionPointerType)arg3 context:(void *)arg4;
- (int)initHull:(CDStruct_183601bc **)arg1 withOrientation:(_Bool)arg2;
- (void)termHull:(CDStruct_d01ad076 *)arg1;
- (int)addPoint:(struct CGPoint)arg1 toHull:(CDStruct_d01ad076 *)arg2;
- (_Bool)trimConcaveFromHull:(CDStruct_d01ad076 *)arg1;
- (_Bool)trimEndPointFromHull:(CDStruct_d01ad076 *)arg1;
- (_Bool)trimStartPointFromHull:(CDStruct_d01ad076 *)arg1;
- (_Bool)isConvex:(CDStruct_d01ad076 *)arg1;
- (int)renderHull:(CDStruct_d01ad076 *)arg1 toBitmap:(CDStruct_c3faddef *)arg2;
- (void)printThreadWithIndex:(int)arg1;
- (int)newThread:(CDStruct_183601bc **)arg1;
- (void)putThreadAtIndex:(int)arg1;
- (void)printThreadsOnlyClosed:(_Bool)arg1 message:(char *)arg2;
- (void)forAllGridThreadsNear:(struct CGPoint)arg1 withinRadius:(float)arg2 do:(CDUnknownFunctionPointerType)arg3 context:(void *)arg4;
- (void)printConnectionHopper:(CDStruct_ccbddcce *)arg1 message:(char *)arg2;
- (int)connectThreads:(int)arg1 drop1:(int)arg2 and:(int)arg3 drop2:(int)arg4;
- (void)computeLengthsAnglesAndDeltaAnglesForShape:(CDStruct_892ad059 *)arg1;
- (int)newShape:(CDStruct_183601bc **)arg1;
- (int)initShapePoints:(CDStruct_892ad059 *)arg1 withMaxPoints:(int)arg2;
- (int)addPoint:(struct CGPoint)arg1 toShapePoints:(CDStruct_892ad059 *)arg2;
- (int)updatedCheckpoint:(struct CGPoint *)arg1 withCheckpoint:(struct CGPoint)arg2 checkpointIndex:(int)arg3 angle:(float)arg4 width:(int)arg5 height:(int)arg6 inChannel:(CDStruct_c3faddef *)arg7 threadIndex:(int)arg8 returningEdgeWidth:(float *)arg9;
- (int)newShape:(CDStruct_183601bc **)arg1 byInterpolatingBetweenCheckpoints:(CDStruct_e958be04 [100])arg2 nc:(int)arg3 usingVectorField:(CDStruct_c3faddef *)arg4;
- (void)removeRedundantPointsFromShape:(CDStruct_892ad059 *)arg1 closerThan:(float)arg2;
- (void)removeSmallBumpsFromShape:(CDStruct_892ad059 *)arg1 center:(struct CGPoint)arg2 threshold:(float)arg3;
- (void)removeSpikesFromShape:(CDStruct_892ad059 *)arg1;
- (int)improvedShape:(CDStruct_183601bc **)arg1 withShape:(CDStruct_892ad059 *)arg2;
- (int)insertPoint:(struct CGPoint)arg1 andDirection:(struct CGPoint)arg2 intoGrid:(_Bool)arg3;
- (int)closeThreadIndex:(int)arg1 usingVectorField:(CDStruct_c3faddef *)arg2;
- (int)attemptClosureOfThreadIndex:(int)arg1;
- (struct CGPoint)threadCentroid:(CDStruct_ed92ceb9 *)arg1;
- (float)threadSignedArea:(CDStruct_ed92ceb9 *)arg1 centroid:(struct CGPoint)arg2;
- (int)shape:(CDStruct_183601bc **)arg1 withThreadAtIndex:(int)arg2 centroid:(struct CGPoint)arg3;
- (void)slidingWindowAnalysisOfShape:(CDStruct_892ad059 *)arg1 into:(CDStruct_04c5c26d *)arg2;
- (int)copyShape:(CDStruct_892ad059 *)arg1 into:(CDStruct_892ad059 *)arg2 transform:(struct CGAffineTransform)arg3 height:(int)arg4;
- (int)convexHull:(CDStruct_183601bc **)arg1 ofOriented:(_Bool)arg2 shape:(CDStruct_892ad059 *)arg3;
- (void)measureHull:(CDStruct_d01ad076 *)arg1 majorAxis:(struct CGPoint *)arg2 majorTo:(struct CGPoint *)arg3 majorDiameter:(float *)arg4 minorAxis:(struct CGPoint *)arg5 minorTo:(struct CGPoint *)arg6 minorDiameter:(float *)arg7;
- (int)color:(CDStruct_818bb265 *)arg1 underConvexHull:(CDStruct_d01ad076 *)arg2 saturated:(CDStruct_818bb265 *)arg3;
- (CDStruct_818bb265)RGBtoHSV:(CDStruct_818bb265)arg1;
- (_Bool)hopperElement:(CDStruct_c952897d *)arg1 isMoreScleraThanElement:(CDStruct_c952897d *)arg2;
- (void)swapHopperElement:(CDStruct_c952897d *)arg1 withElement:(CDStruct_c952897d *)arg2;
- (_Bool)initGridWithBitmap:(CDStruct_c3faddef *)arg1 scale:(int)arg2;
- (_Bool)edgePoint:(struct CGPoint *)arg1 withBitmap:(CDStruct_c3faddef *)arg2 center:(struct CGPoint)arg3 perp:(struct CGPoint)arg4;
- (void)regressionWithPointIndex:(int)arg1;
- (int)replacePointAndDirection:(int)arg1;
- (int)nextPointIndexWithPointIndex:(int)arg1;
- (int)linkUpPointIndex:(int)arg1 toPointIndex:(int)arg2;
- (int)findThreadsInGrid;
- (int)connectThreadsInGrid;
- (int)recognizeThreadsWinningThreadIndex:(int *)arg1 info:(CDStruct_818bb265 *)arg2;
- (int)copyGridInto:(CDStruct_ea27cb70 *)arg1 transform:(struct CGAffineTransform)arg2 height:(int)arg3;
- (int)convexHull:(CDStruct_183601bc **)arg1 ofOriented:(_Bool)arg2 threadIndex:(int)arg3;
- (void)termGrid;
- (void)condenseFourChannelRecognitionMap:(CDStruct_c3faddef *)arg1 intoOneChanneMap:(CDStruct_c3faddef *)arg2;
- (void)magnitudeMap:(CDStruct_c3faddef *)arg1 fromGabor:(CDStruct_c3faddef *)arg2;
- (int)renderEyePolygonToBitmap:(CDStruct_c3faddef *)arg1;
- (int)analyzeMask:(CDStruct_c3faddef *)arg1 usingConvexHull:(CDStruct_d01ad076 *)arg2 producingOptimizedMask:(CDStruct_c3faddef *)arg3;
- (int)widenedHull:(CDStruct_183601bc **)arg1 withHull:(CDStruct_d01ad076 *)arg2 by:(float)arg3;
- (int)renderConvexHull:(CDStruct_d01ad076 *)arg1 distance:(float)arg2 fieldToBitmap:(CDStruct_c3faddef *)arg3;
- (void)initBitmaps;
- (int)prepareTransformWithEyeIndex:(int)arg1;
- (int)prepareBitmapsWithString:(char *)arg1;
- (int)prominenceConvexHull:(CDStruct_183601bc **)arg1 facts:(CDStruct_73443751 *)arg2;
- (void)termBitmaps;
- (int)prepareMasksWithConvexHull:(CDStruct_d01ad076 *)arg1;
- (CDStruct_fc6961d5)focusStatsWithBitmap:(CDStruct_c3faddef *)arg1 IOD:(float)arg2;
- (_Bool)isBlurryWithFocusStats:(CDStruct_fc6961d5)arg1;

@end
