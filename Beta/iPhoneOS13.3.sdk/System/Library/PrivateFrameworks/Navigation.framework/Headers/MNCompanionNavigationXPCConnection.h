/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEOCompanionRouteDetails, GEOCompanionRouteStatus, NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface MNCompanionNavigationXPCConnection : NSObject

{
    NSXPCConnection *_connection;
    GEOCompanionRouteDetails *_companionRouteDetails;
    GEOCompanionRouteStatus *_companionRouteStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)_closeConnection;
- (void)_stop;
- (void)_openConnection;
- (void)updateNavigationRouteDetails:(id)arg1 routeStatus:(id)arg2;
- (void)updateNavigationRouteStatus:(id)arg1;
- (void)updateNavigationRouteWithUpdate:(id)arg1;
- (void)_connectionWasInterrupted;
- (void)_connectionWasInvalidated;
- (void)_resendRouteDetailsAndStatus;

@end
