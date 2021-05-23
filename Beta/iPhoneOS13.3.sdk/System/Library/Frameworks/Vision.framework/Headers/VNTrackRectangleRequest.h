/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNTrackingRequest.h>

@interface VNTrackRectangleRequest : VNTrackingRequest

+ (const CDStruct_7d93034e *)revisionAvailability;
+ (id)trackerTypeForRequestRevision:(unsigned long long)arg1 error:(id *)arg2;

- (id)initWithRectangleObservation:(id)arg1;
- (id)initWithRectangleObservation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
