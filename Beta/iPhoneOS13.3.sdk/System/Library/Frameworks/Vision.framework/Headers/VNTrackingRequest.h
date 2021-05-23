/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequest.h>

@class VNDetectedObjectObservation;

@interface VNTrackingRequest : VNImageBasedRequest

{
    VNDetectedObjectObservation *_inputObservation;
    unsigned long long _trackingLevel;
    _Bool _lastFrame;
}

@property (retain, nonatomic) VNDetectedObjectObservation *inputObservation;
@property (nonatomic) unsigned long long trackingLevel;
@property (nonatomic, getter=isLastFrame) _Bool lastFrame;

+ (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
+ (void)recordDefaultOptionsInDictionary:(id)arg1;
+ (unsigned int)frameCVPixelBufferFormatForRequestRevision:(unsigned long long)arg1;
+ (id)trackerTypeForRequestRevision:(unsigned long long)arg1 error:(id *)arg2;

- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)allowsCachingOfResults;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (id)sequencedRequestPreviousObservationsKey;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1;
- (id)_trackingLevelOptionFromTrackingLevelEnum;
- (id)initWithDetectedObjectObservation:(id)arg1;
- (id)initWithDetectedObjectObservation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newDefaultRequestInstance;
- (id)_resetTrackerIfNeeded:(id)arg1 trackerProvider:(id)arg2 options:(id)arg3 error:(id *)arg4;

@end
