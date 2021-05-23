/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVRoutingSessionDestination, AVRoutingSessionInternal;

@interface AVRoutingSession : NSObject

{
    AVRoutingSessionInternal *_ivars;
}

@property (readonly) AVRoutingSessionDestination *destination;
@property (readonly) _Bool establishedAutomaticallyFromLikelyDestination;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithFigRoutingSession:(struct OpaqueFigRoutingSession *)arg1;

@end
