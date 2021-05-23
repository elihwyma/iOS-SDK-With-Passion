/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@class CIBurstActionClassifier, CIBurstImageFaceAnalysisContext, CIBurstYUVImage, NSArray, NSCountedSet, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface CIBurstImageSetInternal : NSObject

{
    NSObject<OS_dispatch_queue> *dq;
    NSObject<OS_dispatch_queue> *dq_yuvdump;
    NSObject<OS_dispatch_semaphore> *sem;
    NSMutableArray *clusterArray;
    int temporalOrder;
    int maxNumPendingFrames;
    _Bool enableAnalysis;
    int dummyAnalysisCount;
    _Bool enableFaceCore;
    _Bool enableDumpYUV;
    NSString *burstCoverSelection;
    _Bool isAction;
    _Bool isPortrait;
    CIBurstImageFaceAnalysisContext *faceAnalysisContext;
    CIBurstYUVImage *overrideImage;
    NSDictionary *overrideProps;
    NSMutableArray *allImageIdentifiers;
    NSCountedSet *faceIDCounts;
    NSMutableDictionary *statsByImageIdentifier;
    NSMutableDictionary *clusterByImageIdentifier;
    NSString *burstLogFileName;
    struct __sFILE *burstLogFileHandle;
    CIBurstActionClassifier *actionClassifier;
    int curClusterIndexToProcess;
    NSMutableArray *bestImageIdentifiersArray;
    int _version;
    NSString *burstId;
    NSString *_versionString;
}

@property NSMutableArray *clusterArray;
@property int temporalOrder;
@property NSCountedSet *faceIDCounts;
@property NSMutableArray *allImageIdentifiers;
@property NSMutableDictionary *statsByImageIdentifier;
@property NSMutableDictionary *clusterByImageIdentifier;
@property NSString *burstLogFileName;
@property CIBurstActionClassifier *actionClassifier;
@property int maxNumPendingFrames;
@property _Bool enableAnalysis;
@property int dummyAnalysisCount;
@property _Bool enableFaceCore;
@property _Bool enableDumpYUV;
@property NSString *burstCoverSelection;
@property (retain, nonatomic) NSString *burstId;
@property NSArray *bestImageIdentifiersArray;
@property NSString *versionString;
@property int version;

+ (id)defaultVersionString;

- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (void)addImageFromIOSurface:(struct __IOSurface *)arg1 properties:(id)arg2 identifier:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)bestImageIdentifiers;
- (_Bool)isFaceDetectionForced;
- (_Bool)isAction;
- (_Bool)isPortrait;
- (id)burstDocumentDirectory;
- (id)imageClusterForIdentifier:(id)arg1;
- (void)processClusters:(_Bool)arg1;
- (void)addYUVImage:(id)arg1 properties:(id)arg2 identifier:(id)arg3 imageProps:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (int)computeEmotion:(id)arg1;
- (float)computeCameraTravelDistance;
- (float)computeBeginningVsEndAEMatrixDiffVsAverageAdjacent;
- (float)computeActionSelectionThreshold;
- (void)computeAllImageScores;
- (void)performEmotionalRejectionOnCluster:(id)arg1;
- (id)findBestImage:(id)arg1 useActionScores:(_Bool)arg2;
- (void)selectCoverPhotoFromMultiple:(id)arg1 burstSize:(int)arg2;

@end
