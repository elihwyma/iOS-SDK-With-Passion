/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class CCCharBoxContext, MetalInterface, NSString;

__attribute__((visibility("hidden")))
@interface CCTextDetector : NSObject

{
    int _getFilter_callCount;
    MetalInterface *_metalInterface;
    unsigned long long _requestRevision;
    _Bool _computeZCVectorHighProbability;
    unsigned char _ii;
    unsigned char _profileNormal;
    _Bool _debugMatlab;
    _Bool _debugOut;
    int _midRow;
    unsigned int _minHeight;
    unsigned int _maxHeight;
    unsigned int _startMaxFind;
    unsigned int _stopMaxFind;
    float _mmHeightCard;
    float _mmWidthCard;
    unsigned int _pixelHeightCard;
    unsigned int _pixelWidthCard;
    unsigned int _minBoxWidth;
    unsigned int _maxBoxWidth;
    unsigned int _startNormal;
    unsigned int _stopNormal;
    unsigned int _startSensitized;
    unsigned int _stopSensitized;
    CCCharBoxContext *_charBoxContext;
    NSString *_debugFilename;
}

@property _Bool computeZCVectorHighProbability;
@property int midRow;
@property unsigned int minHeight;
@property unsigned int maxHeight;
@property unsigned int startMaxFind;
@property unsigned int stopMaxFind;
@property float mmHeightCard;
@property float mmWidthCard;
@property unsigned int pixelHeightCard;
@property unsigned int pixelWidthCard;
@property unsigned int minBoxWidth;
@property unsigned int maxBoxWidth;
@property unsigned int startNormal;
@property unsigned int stopNormal;
@property unsigned int startSensitized;
@property unsigned int stopSensitized;
@property (retain) CCCharBoxContext *charBoxContext;
@property unsigned char ii;
@property unsigned char profileNormal;
@property _Bool debugMatlab;
@property _Bool debugOut;
@property (copy) NSString *debugFilename;

- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (void)initializeForImage:(struct vImage_Buffer)arg1;
- (int)_allocateVImageWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 rowBytes:(unsigned long long)arg3 imageOut:(struct vImage_Buffer *)arg4;
- (void)_freeVImage:(struct vImage_Buffer *)arg1;
- (int)_generateVotingImage:(struct vImage_Buffer)arg1 votingImage:(struct vImage_Buffer)arg2 useLowLightEnhancement:(char *)arg3;
- (void)examinePulseWindow:(unsigned short)arg1 prodBoostNormalized:(float *)arg2 pwContext:(struct __CCPulseWindowContext *)arg3 minHeight:(unsigned char)arg4 maxHeight:(unsigned char)arg5 thresholdSet:(struct ThresholdSet_t)arg6;
- (int)generatePulses:(unsigned short)arg1 minHeight:(unsigned char)arg2 maxHeight:(unsigned char)arg3 thresholdSet:(struct ThresholdSet_t)arg4 prodBoostNormalized:(float *)arg5 pulseVectorFlag:(unsigned long long)arg6;
- (void)_computeColumnSumsOverRange:(struct __CCRange *)arg1 sampleImageAddress:(char *)arg2 rowSumOut:(int *)arg3 rowDerivOut:(int *)arg4;
- (int)_allocateSumDerivVectors:(struct __CCSumDerivVectors *)arg1 size:(int)arg2;
- (void)_freeSumDerivVectors:(struct __CCSumDerivVectors *)arg1;
- (void)_computeProdBoostNormalizedResult:(struct __CCSumDerivVectors *)arg1 size:(int)arg2 binOverride:(unsigned char)arg3;
- (int)_getFilterResultOutBothSumDeriv:(unsigned char)arg1 floatVectorResult:(float *)arg2 bufferHeight:(unsigned short)arg3 minHeight:(unsigned char)arg4 maxHeight:(unsigned char)arg5 config:(struct __CCFilterSumDerivConfig *)arg6 bytesPerRow:(unsigned short)arg7 thresholdSet:(struct ThresholdSet_t)arg8 sampleImageAddressRef:(char *)arg9;
- (int)_getFilterResultOut:(float *)arg1 defaultRows:(unsigned short)arg2 bufferHeight:(unsigned short)arg3 minHeight:(unsigned char)arg4 maxHeight:(unsigned char)arg5 startRange:(unsigned short)arg6 stopRange:(unsigned short)arg7 startMaxFind:(unsigned int)arg8 stopMaxFind:(unsigned int)arg9 bytesPerRow:(unsigned short)arg10 thresholdSet:(struct ThresholdSet_t)arg11 sampleImageAddressRef:(char *)arg12 sampleImageFloatAddressRef:(float *)arg13 pulseVectorFlag:(unsigned long long)arg14;
- (void)_generatePulseAggregate:(unsigned long long)arg1 pulseVectorMain:(unsigned long long)arg2 pulseVectorResult:(unsigned long long)arg3 metricSelection:(unsigned char)arg4 bufferHeight:(unsigned short)arg5 bufferWidth:(unsigned short)arg6;
- (void)_generatePulseAggregateSmallStubs:(unsigned long long)arg1 pulseVectorResult:(unsigned long long)arg2 bufferHeight:(unsigned short)arg3 bufferWidth:(unsigned short)arg4;
- (void)generateDominantPulse:(unsigned long long)arg1 rowLocationsRef:(unsigned short *)arg2 debugOut:(unsigned char)arg3 bufferHeight:(unsigned short)arg4 bufferWidth:(unsigned short)arg5;
- (int)generateHistogramBounds:(struct __rgbaColor *)arg1 rgbVector2Ref:(struct __rgbaColor *)arg2 numPixels1:(unsigned int)arg3 numPixels2:(unsigned int)arg4 minMaxRGB:(struct __rgbMinMaxU8 *)arg5 lowHighRGB:(struct __rgbMinMaxFloat *)arg6;
- (unsigned int)_generateBinarizationForImage:(struct vImage_Buffer)arg1 textOut:(struct vImage_Buffer)arg2 firstOrSecondPassIndicator:(unsigned char)arg3 minMaxRGB:(struct __rgbMinMaxFloat *)arg4;
- (float)createLumaImage:(struct vImage_Buffer)arg1 lumaImage:(struct vImage_Buffer)arg2 numCropRows:(unsigned short)arg3 rowStartLocation:(unsigned short)arg4;
- (float)createLumaImageAlternative:(struct vImage_Buffer)arg1 lumaImageAlternative:(struct vImage_Buffer)arg2 numCropRows:(unsigned short)arg3 rowStartLocation:(unsigned short)arg4;
- (void)getVotingHistogram:(struct vImage_Buffer)arg1 colorProfileContext:(struct __CCColorProfileContext *)arg2 startCC:(unsigned short)arg3 rowStartLocation:(unsigned short)arg4;
- (void)getLumaHistogram:(struct vImage_Buffer)arg1 startCC:(unsigned short)arg2 colorProfileContext:(struct __CCColorProfileContext *)arg3;
- (unsigned short)computeNumCropCols:(float *)arg1 width:(unsigned long long)arg2 start:(unsigned short *)arg3;
- (int)computeMainStub:(struct vImage_Buffer)arg1 numCropRows:(unsigned short)arg2 numCropColsOut:(unsigned short *)arg3 maxY:(float)arg4 start:(unsigned short *)arg5;
- (void)determineColorProfileType:(struct __CCColorProfileContext *)arg1;
- (int)allocateColorProfileContext:(struct __CCColorProfileContext *)arg1 width:(unsigned short)arg2 height:(unsigned short)arg3 rowBytes:(unsigned long long)arg4;
- (void)freeColorProfileContext:(struct __CCColorProfileContext *)arg1;
- (int)_generateAndApplyColorProfileForImage:(struct vImage_Buffer)arg1 votingImage:(struct vImage_Buffer)arg2 textOut:(struct vImage_Buffer)arg3 minMaxRGB:(struct __rgbMinMaxU8 *)arg4 lowHighRGB:(struct __rgbMinMaxFloat *)arg5 numCropRows:(unsigned short)arg6 rowStartLocation:(unsigned short)arg7 rowStopLocation:(unsigned short)arg8 sumTextOutFirstPass:(unsigned int *)arg9 useLowLightEnhancement:(unsigned char)arg10;
- (int)_generateAdaptiveBinarization:(struct vImage_Buffer)arg1 adaptImage:(struct vImage_Buffer)arg2 useLowLightEnhancement:(unsigned char)arg3;
- (int)_generateSmoothedImage:(struct vImage_Buffer)arg1 uImage:(struct vImage_Buffer)arg2;
- (int)_generateBoxes:(id)arg1 pulseVector:(unsigned long long)arg2 uImage:(struct vImage_Buffer)arg3 countBigBoxOut:(unsigned long long *)arg4 bigBoxes:(struct __CCBigBox *)arg5 bigBoxesA:(struct __CCBigBox *)arg6 useLowLightEnhancement:(unsigned char)arg7;
- (void)_generateCC:(id)arg1 ccBigBoxes:(struct __CCBigBox *)arg2 textOut:(struct vImage_Buffer)arg3 countBigBox:(unsigned char)arg4 bufferHeight:(unsigned short)arg5;
- (void)groupEndpoints:(struct __CCBox *)arg1 finalCharBoxCoordCount:(unsigned long long *)arg2;
- (void)computeIndependentTopAndBottomComponents:(struct __CCBox *)arg1 finalCharBoxCoordCount:(unsigned long long *)arg2;
- (int)computeDependentTopAndBottomComponents:(struct __CCBox *)arg1 finalCharBoxCoordCount:(unsigned long long *)arg2;
- (int)_generateCRCharBoxInformation_TrackBox:(struct __CCBox *)arg1 finalCharBoxCoordCount:(unsigned long long *)arg2;
- (int)computePulseVectorSum:(char *)arg1 start:(unsigned short)arg2 stop:(unsigned short)arg3 imageHeight:(unsigned long long)arg4 imageWidth:(unsigned long long)arg5 bottomHeight:(unsigned short)arg6 topHeight:(unsigned short)arg7;
- (struct __CCRange)tightenBox:(struct vImage_Buffer)arg1 startTop:(unsigned short)arg2 startBottom:(unsigned short)arg3 startPosition:(unsigned short)arg4 stopPosition:(unsigned short)arg5 imageHeight:(unsigned long long)arg6 halfWalk:(unsigned short)arg7;
- (void)_generateCRCharBoxInformation_spaceBoxRemovalTightenBox:(struct vImage_Buffer)arg1 singleVotingImageAddressRef:(char *)arg2 adaptOut:(struct vImage_Buffer)arg3 textOut:(struct vImage_Buffer)arg4 zcStartLeft:(unsigned short)arg5 zcStopRight:(unsigned short)arg6 finalCoordinatesForStub:(struct __CCBox *)arg7 finalCoordinatesForStubRevised:(struct __CCBox *)arg8 finalCharBoxCoordCount:(unsigned long long *)arg9 useLowLightEnhancement:(unsigned char)arg10;
- (void)_generateCRCharBoxInformation_spaceBoxRemovalTruthFilter:(float *)arg1 magicThresh:(float *)arg2 zcStartLeft:(unsigned short)arg3 zcStopRight:(unsigned short)arg4 isSpaceBoxAccepted:(_Bool *)arg5 histCompliancePercent:(float *)arg6 useLowLightEnhancement:(unsigned char)arg7;
- (void)_generateCRCharBoxInformation_spaceBoxRemovalHistogram:(struct vImage_Buffer)arg1 zcStartLeft:(unsigned short)arg2 zcStopRight:(unsigned short)arg3 rowStartLocation2:(unsigned short)arg4 lowHighRGB:(struct __rgbMinMaxFloat *)arg5 histCompliancePercent:(float *)arg6 varSpaceBox:(float *)arg7;
- (int)_generateCRCharBoxInformation_spaceBoxRemovalMagicThresh:(struct vImage_Buffer)arg1 magicMinHeight:(float)arg2 magicMaxHeight:(float)arg3 rowStartLocation2:(unsigned short)arg4 magicThresh:(float *)arg5 magicThreshPrev:(float *)arg6 useLowLightEnhancement:(unsigned char)arg7;
- (unsigned int)_extractCharBoxCuts:(struct __CCBigBox *)arg1 heightConstraint:(unsigned char)arg2 medianHeightTopVector:(unsigned short *)arg3 medianHeightBottomVector:(unsigned short *)arg4 isAdaptive:(_Bool)arg5;
- (void)_generateFilteredPulseVector:(unsigned long long)arg1 target:(unsigned long long)arg2 height:(unsigned long long)arg3;
- (void)_generateZeroCrossingVector:(unsigned long long)arg1 zcVectorFlag:(unsigned long long)arg2 width:(unsigned long long)arg3;
- (void)calculateSumProd:(struct vImage_Buffer)arg1 prodROIRef:(float *)arg2 prodROIRotateRef:(float *)arg3 rowStartLocation2:(unsigned short)arg4 height:(unsigned short)arg5;
- (void)calculateSumProdAlternative:(struct vImage_Buffer)arg1 prodROIRef:(float *)arg2 prodROIRotateRef:(float *)arg3 rowStartLocation2:(unsigned short)arg4 height:(unsigned short)arg5;
- (void)extractCharBoxHeightInfo:(struct __CCCharBox *)arg1 ccCharBoxesFiltered:(struct __CCCharBox *)arg2 ccYTopLocationsForSort:(unsigned short *)arg3 ccYBottomLocationsForSort:(unsigned short *)arg4 aggregateGreenBoxesForStubCount:(unsigned short)arg5 imageWidth:(unsigned short)arg6;
- (unsigned short)charBoxesFromTextBoxes:(struct __CCCharBox *)arg1 bigBoxes:(struct __CCBigBox *)arg2 ccYTopLocationsForSort:(unsigned short *)arg3 ccYBottomLocationsForSort:(unsigned short *)arg4;
- (int)extractBoxesForStub:(struct __CCBigBox *)arg1 bigBoxesAdapt:(struct __CCBigBox *)arg2 countBigBox:(unsigned char)arg3 rowStartLocation2:(unsigned short)arg4 rowStopLocation2:(unsigned short)arg5 heightConstraint:(unsigned char)arg6 imageWidth:(unsigned short)arg7 height:(unsigned short)arg8 ccCharBoxesAggr:(struct __CCCharBox *)arg9 ccCharBoxesFiltered:(struct __CCCharBox *)arg10 useLowLightEnhancement:(unsigned char)arg11;
- (int)_generateCRCharBoxInformation_zcFinalVectorOriginate:(struct vImage_Buffer)arg1 textOut:(struct vImage_Buffer)arg2 adaptOut:(struct vImage_Buffer)arg3 bigBoxes:(struct __CCBigBox *)arg4 bigBoxesAdapt:(struct __CCBigBox *)arg5 ccCharBoxesAggr:(struct __CCCharBox *)arg6 ccCharBoxesFiltered:(struct __CCCharBox *)arg7 height:(unsigned short)arg8 rowStartLocation2:(unsigned short)arg9 rowStopLocation2:(unsigned short)arg10 singleVotingImageAddressRef:(char *)arg11 countBigBox:(unsigned char)arg12 filterWalkUpDownCount:(unsigned short *)arg13 useLowLightEnhancement:(unsigned char)arg14;
- (int)_generateCRCharBoxInformation_zcFinalVectorHighProbability:(struct vImage_Buffer)arg1 zcFinalRange:(unsigned short)arg2;
- (void)fillInOneVector:(struct vImage_Buffer)arg1 checkFlag:(unsigned long long)arg2 checkHeight:(_Bool)arg3;
- (void)_generateCRCharBoxInformation_zcFinalVectorFillIn:(struct vImage_Buffer)arg1;
- (int)_allocateCRCharBoxContext:(unsigned long long)arg1;
- (void)_freeCRCharBoxContext;
- (int)_generateCRCharBoxInformation_extendTextBoxes:(struct __CCBigBox *)arg1 countBigBox:(unsigned char)arg2 rowStartLocation2:(unsigned short)arg3 finalCharBoxCoordCount:(unsigned long long)arg4 finalCoordinatesForStubRevised:(struct __CCBox *)arg5 width:(unsigned long long)arg6 height:(unsigned short)arg7 bigBoxIndicator:(char *)arg8;
- (int)_generateCRCharBoxInformation:(id)arg1 inputImage:(struct vImage_Buffer)arg2 singleVotingImageAddressRef:(char *)arg3 bigBoxes:(struct __CCBigBox *)arg4 bigBoxesAdapt:(struct __CCBigBox *)arg5 textOut:(struct vImage_Buffer)arg6 adaptOut:(struct vImage_Buffer)arg7 lowHighRGB:(struct __rgbMinMaxFloat *)arg8 countBigBox:(unsigned char)arg9 useLowLightEnhancement:(unsigned char)arg10;
- (int)_generatePulseVectorOutputs:(struct vImage_Buffer)arg1 votingImage:(struct vImage_Buffer)arg2 rowLocationsRef:(unsigned short *)arg3;
- (id)textBoxesForBuffer:(struct vImage_Buffer)arg1 error:(id *)arg2;
- (id)textBoxesForImage:(id)arg1 error:(id *)arg2;

@end
