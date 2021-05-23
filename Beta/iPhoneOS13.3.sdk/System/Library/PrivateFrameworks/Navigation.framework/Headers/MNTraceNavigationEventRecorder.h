/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class MNLocation, MNTraceRecorder, NSError, NSString;

__attribute__((visibility("hidden")))
@interface MNTraceNavigationEventRecorder : NSObject

{
    MNTraceRecorder *_traceRecorder;
    MNLocation *_lastMatchedLocation;
    NSError *_previousSuppressedRerouteError;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)navigationSessionDidStart:(id)arg1;
- (void)navigationSessionDidStop:(id)arg1;
- (void)navigationSession:(id)arg1 didUpdateDisplayETA:(id)arg2 displayRemainingMinutes:(unsigned long long)arg3 forRoute:(id)arg4;
- (void)navigationSession:(id)arg1 didSuppressReroute:(id)arg2;
- (void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4;
- (void)navigationSession:(id)arg1 didUpdateDestination:(id)arg2;
- (id)initWithTraceRecorder:(id)arg1;
- (void)setLastMatchedLocation:(id)arg1;
- (void)_userGotOnRoute;
- (void)_userWentOffRoute;
- (void)_recordEvent:(long long)arg1 description:(id)arg2;
- (id)_descriptionForWaypoint:(id)arg1;

@end
