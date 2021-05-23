/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNObjectTracker.h>

__attribute__((visibility("hidden")))
@interface VNObjectTrackerRevision2 : VNObjectTracker

+ (id)serializeRPNTrackingQueue;
+ (id)rpnTrackQueue;
+ (id)rpnInitQueue;
+ (id)rpnTrackEspressoResourcesCacheManager;
+ (id)rpnInitEspressoResourcesCacheManager;
+ (id)rpnTrackerInitProcessingQueueName;
+ (id)rpnTrackerTrackProcessingQueueName;
+ (id)rpnTrackerInitModelName;
+ (id)rpnTrackerTrackModelName;

- (id)initWithOptions:(id)arg1 error:(id *)arg2;

@end
