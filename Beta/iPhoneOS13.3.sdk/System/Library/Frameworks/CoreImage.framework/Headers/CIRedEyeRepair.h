/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CIRedEyeRepair : NSObject

{
    _Bool ownLF;
    CDStruct_79f2618e *lf;
    int imageSourceType;
    struct CGImageBlockSet *blockSet;
    void *releaseMe;
    struct __CFData *dataRef;
    NSArray *faces;
    int nRepairs;
    int nextRepairTag;
    CDStruct_8d997f87 repairs[32];
    int lastRepairTag;
    float lastRepairIOD;
    CDStruct_6ca1d5c6 standardTemplate;
    int iFaceIndex;
    _Bool iLeft;
    _Bool debugRedEye;
    _Bool logRepairs;
    int redEyeThresholdKind;
    _Bool renderAlpha;
    _Bool infillBackground;
    _Bool renderSpecularShine;
    float specularSize;
    float specularSoftness;
    _Bool pupilShadeAlignment;
    _Bool autoPupilTonality;
    _Bool forceLoValue;
    int loValue;
    CDStruct_c3faddef lastClickYBitmap;
    CDStruct_c3faddef lastClickCbCrBitmap;
    int lastClickBitmapMinX;
    int lastClickBitmapMaxX;
    int lastClickBitmapMinY;
    int lastClickBitmapMaxY;
    CDStruct_c3faddef lastClickYBitmaps[3];
    CDStruct_c3faddef lastClickCbCrBitmaps[3];
    CDStruct_5973fb4f lastClickBitmapRects[3];
    CDStruct_c3faddef lastSearchYBitmap;
    CDStruct_c3faddef lastSearchCbCrBitmap;
    int lastSearchBitmapMinX;
    int lastSearchBitmapMaxX;
    int lastSearchBitmapMinY;
    int lastSearchBitmapMaxY;
    int nPolyPoints;
    _Bool polyClosed;
    struct CGPoint polyPoints[20];
    CDStruct_12b04d25 polyLines[20];
    _Bool polyPointConcave[20];
    unsigned char CbCrDistanceTable[65536];
    int nLinears;
    int linearCoefficients[8][3];
}

+ (struct CGRect)supportRectangleWithFaceArray:(id)arg1 imageSize:(struct CGSize)arg2;
+ (struct CGRect)supportRectangleWithRepair:(id)arg1 imageSize:(struct CGSize)arg2;
+ (float)upperRepairDistance:(float)arg1;
+ (float)upperRepairDistanceFraction:(float)arg1;
+ (struct CGRect)supportRectangleWithPoint:(struct CGPoint)arg1 imageSize:(struct CGSize)arg2 IOD:(float)arg3;

- (void)dealloc;
- (int)format;
- (void)setColorSpace:(struct CGColorSpace *)arg1;
- (id)faces;
- (void)autoRepairWithFaceArray:(id)arg1;
- (id)repairArray;
- (id)initWithExternalBuffer:(char *)arg1 subRectangle:(struct CGRect)arg2 fullSize:(struct CGSize)arg3 rowBytes:(unsigned long long)arg4 cameraModel:(id)arg5;
- (void)executeRepair:(id)arg1;
- (void)repairExternalBuffer;
- (CDStruct_8d997f87 *)repairs;
- (_Bool)getBlockSetWithImage:(struct CGImage *)arg1 into:(CDStruct_c3faddef *)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;
- (_Bool)getDataProviderBytePtrWithImage:(struct CGImage *)arg1 into:(CDStruct_c3faddef *)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;
- (_Bool)getDataProviderCopyWithImage:(struct CGImage *)arg1 into:(CDStruct_c3faddef *)arg2;
- (id)initWithDeskView:(id)arg1 andFrame:(CDStruct_79f2618e *)arg2;
- (void)skinInit;
- (void)initializeNonDebugVariables;
- (id)initWithFrameExternalBuffer:(CDStruct_79f2618e *)arg1;
- (CDStruct_8d997f87 *)repairWithTag:(int)arg1;
- (float)upperRepairSizeFraction:(float)arg1;
- (float)lowerRepairSizeFraction:(float)arg1;
- (float)lowerRepairSize:(float)arg1;
- (float)upperRepairSize:(float)arg1;
- (_Bool)extractReusableAlignedBitmapsAroundPoint:(CDStruct_c3faddef *)arg1 YR:(CDStruct_a734b2e2)arg2 subYBitmap:(CDStruct_c3faddef *)arg3 subCbCrBitmap:(CDStruct_c3faddef *)arg4;
- (int)averageValueFromY:(CDStruct_c3faddef *)arg1 withinSkinMask:(CDStruct_c3faddef *)arg2 butOutsideAlpha:(CDStruct_c3faddef *)arg3;
- (_Bool)computeTrimmedBitmaps:(CDStruct_c3faddef *)arg1 newY:(CDStruct_c3faddef *)arg2 newCbCr:(CDStruct_c3faddef *)arg3 IR:(CDStruct_a734b2e2)arg4 newTrimY:(CDStruct_c3faddef *)arg5 newTrimCbCr:(CDStruct_c3faddef *)arg6 returningYR:(CDStruct_a734b2e2 *)arg7 andCbCrR:(CDStruct_a734b2e2 *)arg8;
- (void)undoRepair:(int)arg1;
- (int)redEyeRemovalWithPoint:(struct CGPoint)arg1 alignPupilShades:(_Bool)arg2 matching:(CDStruct_a734b2e2)arg3 force:(int)arg4 IOD:(float)arg5 tap:(_Bool)arg6;
- (int)redoRepairWithTag:(int)arg1 IOD:(float)arg2;
- (void)insertIntoProminenceVettingHopper:(CDStruct_08ff8b76 *)arg1 max:(int)arg2 outside:(int)arg3 confidence:(float)arg4 distance:(float)arg5 row:(int)arg6 column:(int)arg7 IOD:(float)arg8;
- (_Bool)gatherProminencesWithC:(CDStruct_c3faddef *)arg1 MC:(CDStruct_c3faddef *)arg2 maxwindowsize:(int)arg3 repairsize:(int)arg4 IR:(CDStruct_a734b2e2)arg5 fr:(CDStruct_935079c3 *)arg6 intoHopper:(CDStruct_08ff8b76 *)arg7 faceIndex:(int)arg8 left:(_Bool)arg9 coss:(float [10])arg10 sins:(float [10])arg11 bitmapName:(char *)arg12;
- (_Bool)gatherProminencesWithC:(CDStruct_c3faddef *)arg1 MC:(CDStruct_c3faddef *)arg2 altC:(CDStruct_c3faddef *)arg3 altMC:(CDStruct_c3faddef *)arg4 maxwindowsize:(int)arg5 repairsize:(int)arg6 IR:(CDStruct_a734b2e2)arg7 fr:(CDStruct_935079c3 *)arg8 intoHopper:(CDStruct_08ff8b76 *)arg9 faceIndex:(int)arg10 left:(_Bool)arg11;
- (float)confidenceWithIOD:(float)arg1 repair:(int)arg2 andProminenceDifference:(int)arg3;
- (_Bool)extractAndGatherProminencesWithRect:(CDStruct_a734b2e2)arg1 face:(CDStruct_935079c3 *)arg2 faceIndex:(int)arg3 left:(_Bool)arg4 maxwindowsize:(float)arg5 repairsize:(float)arg6 returningRedHopper:(CDStruct_08ff8b76 *)arg7 whiteHopper:(CDStruct_08ff8b76 *)arg8 redChannel:(CDStruct_c3faddef *)arg9 redChannelMask:(CDStruct_c3faddef *)arg10;
- (CDStruct_3edab2bb)repairDecisionWithFaceRecord:(CDStruct_935079c3 *)arg1 left:(_Bool)arg2 redHopper:(CDStruct_08ff8b76 *)arg3 whiteHopper:(CDStruct_08ff8b76 *)arg4;
- (float)extractAverageFaceY:(CDStruct_935079c3 *)arg1 contrast:(float *)arg2 faceIndex:(int)arg3;
- (int)applyEyeRepairWithEye:(CDStruct_3edab2bb *)arg1 left:(_Bool)arg2 IOD:(float)arg3 autoPupilTonality:(_Bool)arg4 match:(CDStruct_a734b2e2 *)arg5 faceIndex:(int)arg6 whiteHopper:(CDStruct_08ff8b76 *)arg7;
- (int)distanceMaskFromPolyToCb:(int)arg1 Cr:(int)arg2;
- (void)prepareLineFunctions;
- (void)autoRepairExtractAndSearchLeft:(CDStruct_a734b2e2)arg1 right:(CDStruct_a734b2e2)arg2 data:(CDStruct_935079c3 *)arg3 repairSize:(float)arg4 autoPupilTonality:(_Bool)arg5 faceIndex:(int)arg6;
- (_Bool)getFloat:(float *)arg1 d:(id)arg2 s:(id)arg3;
- (void)orientPointX:(float *)arg1 Y:(float *)arg2;
- (_Bool)getInt:(int *)arg1 d:(id)arg2 s:(id)arg3;
- (_Bool)getBool:(_Bool *)arg1 d:(id)arg2 s:(id)arg3;
- (void)orientRectangleMinX:(float *)arg1 maxX:(float *)arg2 minY:(float *)arg3 maxY:(float *)arg4;
- (int)redEyeRemovalWithData:(CDStruct_1c31e7e7)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1 cameraModel:(id)arg2;
- (struct CGImage *)createRepairedImage;
- (id)initWithIOSurface:(struct __IOSurface *)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace *)arg3 cameraModel:(id)arg4;
- (id)initWithExternalBuffer:(char *)arg1 size:(struct CGSize)arg2 rowBytes:(unsigned long long)arg3;
- (_Bool)debug;
- (void)setDebug:(_Bool)arg1;
- (_Bool)logRepairs;
- (void)setLogRepairs:(_Bool)arg1;
- (int)redEyeThresholdKind;
- (void)setRedEyeThresholdKind:(int)arg1;
- (_Bool)renderAlpha;
- (void)setRenderAlpha:(_Bool)arg1;
- (_Bool)infillBackground;
- (void)setInfillBackground:(_Bool)arg1;
- (_Bool)renderSpecularShine;
- (void)setRenderSpecularShine:(_Bool)arg1;
- (float)specularSize;
- (void)setSpecularSize:(float)arg1;
- (float)specularSoftness;
- (void)setSpecularSoftness:(float)arg1;
- (_Bool)pupilShadeAlignment;
- (void)setPupilShadeAlignment:(_Bool)arg1;
- (_Bool)autoPupilTonality;
- (void)setAutoPupilTonality:(_Bool)arg1;
- (_Bool)forceLoValue;
- (void)setForceLoValue:(_Bool)arg1;
- (int)loValue;
- (void)setLoValue:(int)arg1;
- (CDStruct_a734b2e2)standardTemplate;
- (int)nRepairs;
- (int)lastRepairTag;
- (void)redoLastRepair;
- (void)executeRepairArray:(id)arg1;
- (void)setFaceIndex:(int)arg1;
- (void)setLeft:(_Bool)arg1;

@end
