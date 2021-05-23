/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequest.h>

#import <Vision/Swift-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface VNDetectFaceLandmarksRequest : VNImageBasedRequest <Swift>

@property (nonatomic) _Bool refineMouthRegion;
@property (nonatomic) _Bool refineLeftEyeRegion;
@property (nonatomic) _Bool refineRightEyeRegion;
@property (nonatomic) _Bool performBlinkDetection;
@property (retain, nonatomic) NSNumber *cascadeStepCount;
@property unsigned long long constellation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *inputFaceObservations;

+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;
+ (const CDStruct_7d93034e *)revisionAvailability;
+ (Class)configurationClass;
+ (const CDStruct_d47b9615 *)dependentRequestCompatability;
+ (_Bool)revision:(unsigned long long)arg1 supportsConstellation:(unsigned long long)arg2;

- (void)setRevision:(unsigned long long)arg1;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (long long)dependencyProcessingOrdinality;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1;
- (void)_determineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputFacesThatNeedAlignment:(id)arg3 outputFacesThatNeedLandmarks:(id)arg4;

@end
