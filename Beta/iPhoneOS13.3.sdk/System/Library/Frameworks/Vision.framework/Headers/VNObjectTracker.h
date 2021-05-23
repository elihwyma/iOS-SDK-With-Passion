/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNTracker.h>

__attribute__((visibility("hidden")))
@interface VNObjectTracker : VNTracker

+ (Class)trackerObservationClass;

- (id)_parseInputObservations:(id)arg1 imageBuffer:(id)arg2 error:(id *)arg3;

@end
