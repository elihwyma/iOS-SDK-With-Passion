/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNTracker.h>

@class NSMutableDictionary, NSObject;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VNRectangleTracker : VNTracker

{
    NSMutableDictionary *_cornerTrackersImpl;
    NSObject<OS_dispatch_queue> *_rectangleTrackingProcessingQueue;
}

+ (id)_trackingRectAroundPoint:(struct CGPoint)arg1 trackingRectSize:(struct CGSize)arg2;
+ (id)trackedCorners;
+ (Class)trackerObservationClass;

- (_Bool)reset:(id *)arg1;
- (_Bool)isTracking;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;
- (id)setTrackedObjects:(id)arg1 inFrame:(id)arg2 error:(id *)arg3;
- (id)trackInFrame:(id)arg1 error:(id *)arg2;
- (id)_parseInputObservations:(id)arg1 imageBuffer:(id)arg2 error:(id *)arg3;
- (id)_convertCornerObservationsToRectangleObservation:(id)arg1 error:(id *)arg2;

@end
