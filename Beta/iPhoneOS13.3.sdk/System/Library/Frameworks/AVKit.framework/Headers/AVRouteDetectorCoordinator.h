/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface AVRouteDetectorCoordinator : NSObject

{
    _Bool _routeDetectionEnabled;
}

@property (nonatomic, getter=isRouteDetectionEnabled) _Bool routeDetectionEnabled;
@property (nonatomic, readonly) _Bool multipleRoutesDetected;

+ (_Bool)multipleRoutesDetected;
+ (void)endDetectingRoutes;
+ (void)beginDetectingRoutes;
+ (id)routeDetectorCoordinatorQueue;
+ (id)sharedSystemRouteDetector;
+ (void)updateMultipleRoutesDetected;
+ (void)setMultipleRoutesDetected:(_Bool)arg1;

- (void)dealloc;

@end
