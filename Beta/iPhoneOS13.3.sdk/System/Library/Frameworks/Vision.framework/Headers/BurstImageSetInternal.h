/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class BurstActionClassifier, BurstImageFaceAnalysisContext, NSArray, NSCountedSet, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, VNImageBuffer;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface BurstImageSetInternal : NSObject

{
    NSObject<OS_dispatch_queue> *_burstAnalyzerDispatchQueue;
    NSObject<OS_dispatch_semaphore> *_pendingFramesSemaphore;
    NSObject<OS_dispatch_queue> *_yuvdumpDispatchQueue;
    int _temporalOrder;
    int _maxNumPendingFrames;
    _Bool _enableAnalysis;
    int _dummyAnalysisCount;
    _Bool _enableFaceCore;
    _Bool _enableDumpYUV;
    _Bool _isAction;
    _Bool _isPortrait;
    struct __sFILE {
        char *_field1;
        int _field2;
        int _field3;
        short _field4;
        short _field5;
        struct __sbuf _field6;
        int _field7;
        void *_field8;
        CDUnknownFunctionPointerType _field9;
        CDUnknownFunctionPointerType _field10;
        CDUnknownFunctionPointerType _field11;
        CDUnknownFunctionPointerType _field12;
        struct __sbuf _field13;
        struct __sFILEX *_field14;
        int _field15;
        unsigned char _field16[3];
        unsigned char _field17[1];
        struct __sbuf _field18;
        int _field19;
        long long _field20;
    } *_burstLogFileHandle;
    int _currentClusterIndexToProcess;
    NSMutableArray *_clusterArray;
    BurstImageFaceAnalysisContext *_faceAnalysisContext;
    NSCountedSet *_faceIDCounts;
    int _version;
    NSString *_burstId;
    CDUnknownBlockType _loggingCallback;
    VNImageBuffer *_overrideImage;
    NSDictionary *_overrideProps;
    NSMutableArray *_allImageIdentifiers;
    NSMutableDictionary *_statsByImageIdentifier;
    NSMutableDictionary *_clusterByImageIdentifier;
    NSString *_burstLogFileName;
    BurstActionClassifier *_actionClassifier;
    NSString *_burstCoverSelection;
    NSArray *_bestImageIdentifiersArray;
    NSString *_versionString;
}

@property (copy, nonatomic) CDUnknownBlockType loggingCallback;
@property (retain) BurstImageFaceAnalysisContext *faceAnalysisContext;
@property (retain) VNImageBuffer *overrideImage;
@property (retain) NSDictionary *overrideProps;
@property (retain) NSMutableArray *clusterArray;
@property int temporalOrder;
@property (retain) NSCountedSet *faceIDCounts;
@property (retain) NSMutableArray *allImageIdentifiers;
@property (retain) NSMutableDictionary *statsByImageIdentifier;
@property (retain) NSMutableDictionary *clusterByImageIdentifier;
@property (retain) NSString *burstLogFileName;
@property (retain) BurstActionClassifier *actionClassifier;
@property int maxNumPendingFrames;
@property _Bool enableAnalysis;
@property int dummyAnalysisCount;
@property _Bool enableFaceCore;
@property _Bool enableDumpYUV;
@property (retain) NSString *burstCoverSelection;
@property (retain) NSString *burstId;
@property (retain) NSArray *bestImageIdentifiersArray;
@property (retain) NSString *versionString;
@property int version;

+ (id)defaultVersionString;

- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (double)secondsSinceStart;
- (id)bestImageIdentifiers;
- (_Bool)isFaceDetectionForced;
- (_Bool)isAction;
- (_Bool)isPortrait;
- (id)burstDocumentDirectory;
- (id)imageClusterForIdentifier:(id)arg1;
- (void)processClusters:(_Bool)arg1;
- (int)computeEmotion:(id)arg1;
- (float)computeCameraTravelDistance;
- (float)computeBeginningVsEndAEMatrixDiffVsAverageAdjacent;
- (float)computeActionSelectionThreshold;
- (void)computeAllImageScores;
- (void)performEmotionalRejectionOnCluster:(id)arg1;
- (id)findBestImage:(id)arg1 useActionScores:(_Bool)arg2;
- (void)selectCoverPhotoFromMultiple:(id)arg1 burstSize:(int)arg2;
- (struct CGRect)_reorientROIRect:(struct CGRect)arg1 imageSize:(struct CGSize)arg2 orientation:(int)arg3;
- (void)_reorientFaceRects:(id)arg1 imageSize:(struct CGSize)arg2 orientation:(int)arg3;
- (void)_addImageInternal:(id)arg1 properties:(id)arg2 identifier:(id)arg3 imageProps:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)addImage:(id)arg1 properties:(id)arg2 identifier:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)allImageClusters;

@end
