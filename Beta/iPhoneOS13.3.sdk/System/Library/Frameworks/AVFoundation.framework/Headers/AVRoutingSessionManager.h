/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVRoutingSession, AVRoutingSessionManagerInternal, NSArray;

@interface AVRoutingSessionManager : NSObject

{
    AVRoutingSessionManagerInternal *_ivars;
}

@property (readonly) AVRoutingSession *currentRoutingSession;
@property (readonly) NSArray *likelyExternalDestinations;
@property (readonly) NSArray *allLikelyDestinations;
@property (readonly) _Bool prefersLikelyDestinationsOverCurrentRoutingSession;

+ (void)initialize;
+ (id)longFormVideoRoutingSessionManager;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithFigRoutingSessionManager:(struct OpaqueFigRoutingSessionManager *)arg1;
- (void)updateCurrentRoutingSessionFromLikelyDestinationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startRoutingSessionForHighConfidenceExternalDestinationIfPresentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)startRoutingSessionWithOutputDeviceDescriptions:(id)arg1 error:(id *)arg2;
- (_Bool)startSuppressingLikelyDestinationsUntilNextPlayEventAndReturnError:(id *)arg1;
- (_Bool)stopSuppressingLikelyDestinationsAndReturnError:(id *)arg1;

@end
