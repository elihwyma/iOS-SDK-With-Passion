/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWMeaningfulSubjectDetectionContext, BWPixelBufferPool, FigM2MController, MISSING_TYPE, NSMutableDictionary, NSMutableSet;

@interface BWMeaningfulSubjectTracker : NSObject

{
    _Bool _msrScalingEnabled;
    _Bool _dumpEnabled;
    unsigned int _numberOfFramesSinceDetection;
    unsigned int _numberOfFramesBetweenDetections;
    struct CGRect _coordinateSpaceForDetectedObjects;
    BWMeaningfulSubjectDetectionContext *_detectionContext;
    NSMutableSet *_inactiveAssociationObjectIdentifiers;
    NSMutableSet *_inactiveContexts;
    NSMutableDictionary *_activeContextsByAssociationObjectIdentifier;
    BWPixelBufferPool *_detectionPool;
    BWPixelBufferPool *_intermediatePool;
    BWPixelBufferPool *_examplePool;
    BWPixelBufferPool *_trackingPool;
    void *_neuralEngineContext;
    FigM2MController *_surfaceAcceleratorController;
    struct {
        struct {
            unsigned char numModels;
            char codeVersion[20];
            char name[4][20];
            char version[4][20];
            unsigned char rsvd[32];
        } modelInfo;
        unsigned int frameId;
        unsigned int numFaces;
        struct {
            unsigned int objectId;
            int category;
            CDStruct_0f55ad9b bbox;
            unsigned int confidence;
            int yaw;
            int roll;
            int smile;
            int blinkLeft;
            int blinkRight;
            CDStruct_0f55ad9b eyeRectLeft;
            CDStruct_0f55ad9b eyeRectRight;
            unsigned char hasPoseData;
            unsigned char hasEyeData;
            unsigned char hasBlinkData;
            unsigned char hasSmileData;
            unsigned char isFrontal;
            int modality;
        } faces[10];
        unsigned int numObjects;
        CDStruct_a63c4314 objects[10];
        unsigned int numSaliencyObjects;
        CDStruct_a63c4314 saliencyObjects[1];
        struct {
            unsigned char data[4480];
            unsigned short width;
            unsigned short height;
            unsigned short rowBytes;
            unsigned char valid;
        } saliencyHeatMap;
    } _mostRecentDetectionResult;
    CDStruct_35801271 _mostRecentDetectionResultAsTrackingResult;
    CDStruct_35801271 _mostRecentTrackingResult;
    struct {
        float minOverlap;
        float boxSmoothingLr;
        float overlapBoxThreshold;
        unsigned int initNonmatchFrameCheckWindow;
        unsigned int initMaxNonmatchFrameCount;
        unsigned int maxNonmatchFrameCounts[3];
        _Bool isDetUsedToReinit;
    } _associationParams;
    struct {
        unsigned int nextObjectId;
        unsigned int numObjects;
        CDStruct_66dcbea3 objects[4];
    } _mostRecentAssociationResult;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)terminate;
- (id)processPixelBuffer:(struct __CVBuffer *)arg1;
- (int)_detectObjectsInPixelBuffer:(struct __CVBuffer *)arg1 usingContext:(id)arg2 detectionPixelBuffer:(struct __CVBuffer *)arg3 bgraInputPixelBuffer:(struct __CVBuffer *)arg4;
- (void)_deactivateTrackingContext:(id)arg1 forObjectIdentifier:(id)arg2;
- (struct __CVBuffer *)newTrackingIntermediatePixelBufferFromPixelBuffer:(struct __CVBuffer *)arg1 estimatedMeanColor:(MISSING_TYPE **)arg2;
- (int)_initializeTrackingOfObject:(CDStruct_66dcbea3 *)arg1 inPixelBuffer:(struct __CVBuffer *)arg2 usingContext:(id)arg3 examplePixelBuffer:(struct __CVBuffer *)arg4 trackingPixelBuffer:(struct __CVBuffer *)arg5 intermediatePixelBuffer:(struct __CVBuffer *)arg6 estimatedMeanColor:(struct __CVBuffer *)arg7 bgraInputPixelBuffer: /* Error: Ran out of types for this method. */;
- (int)_continueTrackingObject:(CDStruct_66dcbea3 *)arg1 inPixelBuffer:(struct __CVBuffer *)arg2 usingContext:(id)arg3 examplePixelBuffer:(struct __CVBuffer *)arg4 trackingPixelBuffer:(struct __CVBuffer *)arg5 intermediatePixelBuffer:(struct __CVBuffer *)arg6 estimatedMeanColor:(struct __CVBuffer *)arg7 bgraInputPixelBuffer:(CDStruct_55a054ef *)arg8 result: /* Error: Ran out of types for this method. */;
- (void)_prepareContext:(id)arg1 withExamplePixelBuffer:(struct __CVBuffer *)arg2 trackingPixelBuffer:(struct __CVBuffer *)arg3;
- (void)_translateRegionOfInterest:(struct TtTrkCropRoi *)arg1 inPixelBuffer:(struct __CVBuffer *)arg2 toSourcePixelBuffer:(struct __CVBuffer *)arg3 destinationPixelBuffer:(struct __CVBuffer *)arg4 outSourceRect:(struct CGRect *)arg5 outDestinationRect:(struct CGRect *)arg6;
- (void)prepareWithInputPixelBufferAttributes:(id)arg1;
- (struct __CVBuffer *)newInputPixelBufferFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;

@end
