/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVExternalPlaybackMonitorInternal;

@interface AVExternalPlaybackMonitor : NSObject

{
    AVExternalPlaybackMonitorInternal *_ivars;
}

@property (readonly, getter=isAirPlayVideoActive) _Bool airPlayVideoActive;
@property (readonly, getter=isAirPlayVideoPlaying) _Bool airPlayVideoPlaying;

+ (void)initialize;
+ (id)longFormVideoExternalPlaybackMonitor;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithFigRoutingSessionManager:(struct OpaqueFigRoutingSessionManager *)arg1;

@end
