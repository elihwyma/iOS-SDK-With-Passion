/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class AXMVisionFaceNameHelper, VNClassifyFaceAttributesRequest, VNCreateFaceprintRequest, VNDetectFaceExpressionsRequest, VNDetectFaceLandmarksRequest, VNDetectFacePoseRequest, VNDetectFaceRectanglesRequest;

@interface AXMFaceDetectorNode : AXMEvaluationNode

{
    AXMVisionFaceNameHelper *__faceNameHelper;
    VNDetectFaceRectanglesRequest *__faceRectanglesRequest;
    VNCreateFaceprintRequest *__faceprintRequest;
    VNClassifyFaceAttributesRequest *__faceAttributesRequest;
    VNDetectFaceExpressionsRequest *__faceExpressionsRequest;
    VNDetectFaceLandmarksRequest *__faceLandmarksRequest;
    VNDetectFacePoseRequest *__facePoseRequest;
}

@property (retain, nonatomic) AXMVisionFaceNameHelper *_faceNameHelper;
@property (retain, nonatomic) VNDetectFaceRectanglesRequest *_faceRectanglesRequest;
@property (retain, nonatomic) VNCreateFaceprintRequest *_faceprintRequest;
@property (retain, nonatomic) VNClassifyFaceAttributesRequest *_faceAttributesRequest;
@property (retain, nonatomic) VNDetectFaceExpressionsRequest *_faceExpressionsRequest;
@property (retain, nonatomic) VNDetectFaceLandmarksRequest *_faceLandmarksRequest;
@property (retain, nonatomic) VNDetectFacePoseRequest *_facePoseRequest;

+ (_Bool)supportsSecureCoding;
+ (id)title;
+ (_Bool)isSupported;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)nodeInitialize;
- (_Bool)validateVisionKitSoftLinkSymbols;
- (void)evaluate:(id)arg1;
- (_Bool)requiresVisionFramework;
- (id)_faceResultForUUID:(id)arg1 inFaceDictionary:(id)arg2;
- (id)_createRequestsForContext:(id)arg1;
- (id)_faceDetectionResultsForVisionRequests:(id)arg1 canvasSize:(struct CGSize)arg2;

@end
