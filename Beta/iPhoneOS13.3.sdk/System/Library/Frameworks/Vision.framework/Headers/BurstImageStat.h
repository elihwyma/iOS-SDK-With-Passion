/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BurstImageStat : NSObject

{
    float normalizedFocusScore;
    float normalizedSigma;
    float colorHistogram[1024];
    int numEntries;
    unsigned short aeMatrix[256];
    int dissimilarity;
    struct FastRegistration_Signatures projectionSignature;
    struct SharpnessGridElement_t *sharpnessGrid;
    int gridWidth;
    int gridHeight;
    struct GridROI_t gridROI;
    struct GridROI_t smoothedROI;
    float maxSkewness;
    float roiSize;
    _Bool exclude;
    _Bool AEStable;
    _Bool AFStable;
    _Bool hasRegistrationData;
    _Bool emotionallyRejected;
    _Bool doLimitedSharpnessAndBlur;
    _Bool isGarbage;
    int orientation;
    int AEAverage;
    int AETarget;
    int temporalOrder;
    float avgHorzDiffY;
    float blurExtent;
    float imageScore;
    float actionScore;
    float registrationErrorX;
    float registrationErrorY;
    float registrationErrorIntegral;
    float actionClusteringScore;
    int numHWFaces;
    float tx;
    float ty;
    int _AEDelta;
    int _version;
    double timeReceived;
    double timestamp;
    NSString *_imageId;
    NSMutableArray *_faceStatArray;
    struct CGRect facesRoiRect;
}

@property (retain) NSString *imageId;
@property int orientation;
@property (retain) NSMutableArray *faceStatArray;
@property _Bool exclude;
@property _Bool AEStable;
@property int AEAverage;
@property int AETarget;
@property _Bool AFStable;
@property int temporalOrder;
@property float avgHorzDiffY;
@property float blurExtent;
@property float imageScore;
@property float actionScore;
@property double timeReceived;
@property double timestamp;
@property float maxSkewness;
@property float registrationErrorX;
@property float registrationErrorY;
@property float registrationErrorIntegral;
@property float actionClusteringScore;
@property _Bool hasRegistrationData;
@property struct CGRect facesRoiRect;
@property int numHWFaces;
@property _Bool emotionallyRejected;
@property _Bool doLimitedSharpnessAndBlur;
@property float tx;
@property float ty;
@property _Bool isGarbage;
@property float roiSize;
@property int AEDelta;
@property int version;

- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (void)computeImageData:(struct __CVBuffer *)arg1 faceIDCounts:(id)arg2;
- (unsigned short *)aeMatrix;
- (float)computeAEMatrixDifference:(id)arg1;
- (int)canRegister;
- (void)allocateMeanStdPingPongBuffers:(float **)arg1:(float **)arg2:(float **)arg3:(float **)arg4;
- (void)assignMeanStdBuffers:(float *)arg1;
- (void)performRegistration:(id)arg1 deltaCol:(float *)arg2 deltaRow:(float *)arg3;
- (float)computeSmoothedGridROI:(id)arg1 nextStat:(id)arg2;
- (void)collapseSharpnessGrid;
- (void)flagAsGarbage;
- (float)computeScore:(float)arg1;
- (void)writeGridROI:(id)arg1;
- (float)computeImageDistance:(id)arg1;
- (long long)compareImageOrder:(id)arg1;
- (struct GridROI_t)getSharpnessAndBlurLimits;
- (void)updateROI:(struct GridROI_t)arg1;
- (void)computeImageColorHistogram:(struct vImage_Buffer)arg1;
- (void)computeImageSharpnessOnGrid:(struct vImage_Buffer)arg1;
- (void)computeBlurStatsOnGrid:(struct vImage_Buffer)arg1;
- (void)computeImageProjections:(struct vImage_Buffer)arg1;
- (float)computeFacialFocusScoreSum;
- (float)computeRuleOfThreeDistance;
- (float)computeSmilePercentage;
- (int)setAEMatrix:(id)arg1;
- (void)computeAEMatrix:(struct __CVBuffer *)arg1;
- (long long)compareImageStats:(id)arg1;
- (float *)colorHistogram;

@end
