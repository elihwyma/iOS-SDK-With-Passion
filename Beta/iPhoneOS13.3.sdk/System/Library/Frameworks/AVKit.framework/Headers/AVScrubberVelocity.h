/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface AVScrubberVelocity : NSObject

{
    double _timestamp;
    double _velocity;
}

@property double timestamp;
@property double velocity;

@end
