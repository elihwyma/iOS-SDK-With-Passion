/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSHashTable, TURoute;

@protocol OS_dispatch_queue, TURouteControllerActions;

@interface TURouteController : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    id <TURouteControllerActions> _actionsDelegate;
    NSHashTable *_delegates;
    NSDictionary *_routesByUniqueIdentifier;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic, readonly) id <TURouteControllerActions> actionsDelegate;
@property (nonatomic, readonly) NSHashTable *delegates;
@property (copy, nonatomic) NSDictionary *routesByUniqueIdentifier;
@property (copy, nonatomic, readonly) NSArray *routes;
@property (copy, nonatomic, readonly) TURoute *pickedRoute;
@property (copy, nonatomic, readonly) TURoute *receiverRoute;
@property (copy, nonatomic, readonly) TURoute *speakerRoute;

- (void)addDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)pickRoute:(id)arg1;
- (void)pickRouteWithUniqueIdentifier:(id)arg1;
- (void)handleRoutesByUniqueIdentifierUpdated:(id)arg1;
- (void)requeryRoutes;
- (id)initWithActionsDelegate:(id)arg1 serialQueue:(id)arg2;
- (void)pickRouteWhenAvailableWithUniqueIdentifier:(id)arg1;
- (void)handleServerReconnect;
- (void)handleServerDisconnect;

@end
