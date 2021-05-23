/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNTrackingRequest.h>

@interface VNTrackObjectRequest : VNTrackingRequest

+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;
+ (const CDStruct_7d93034e *)revisionAvailability;
+ (void)recordDefaultOptionsInDictionary:(id)arg1;
+ (unsigned int)frameCVPixelBufferFormatForRequestRevision:(unsigned long long)arg1;
+ (id)trackerTypeForRequestRevision:(unsigned long long)arg1 error:(id *)arg2;

- (id)_trackingLevelOptionFromTrackingLevelEnum;
- (void)setTrackingLevel:(unsigned long long)arg1;
- (id)initWithDetectedObjectObservation:(id)arg1;
- (id)initWithDetectedObjectObservation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
