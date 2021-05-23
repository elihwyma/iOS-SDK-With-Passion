/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVRouteDetectorInternal;

@interface AVRouteDetector : NSObject

{
    AVRouteDetectorInternal *_routeDetectorInternal;
}

@property (getter=isRouteDetectionEnabled) _Bool routeDetectionEnabled;
@property (readonly) _Bool multipleRoutesDetected;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)_updateMultipleRoutesDetected;

@end
