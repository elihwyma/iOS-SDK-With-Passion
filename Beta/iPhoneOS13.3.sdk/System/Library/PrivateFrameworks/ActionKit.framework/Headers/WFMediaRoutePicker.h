/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class MPAVRoutingController, NSArray, NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface WFMediaRoutePicker : NSObject

{
    long long _routeType;
    MPAVRoutingController *_routingController;
    NSMutableArray *_observers;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) MPAVRoutingController *routingController;
@property (nonatomic, readonly) NSMutableArray *observers;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) long long routeType;
@property (nonatomic, readonly) NSArray *availableRoutes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)startDiscoveringRoutes;
- (void)stopDiscoveringRoutes;
- (id)initWithRouteType:(long long)arg1;
- (void)addAvailableRoutesObserver:(id)arg1;
- (void)removeAvailableRoutesObserver:(id)arg1;
- (void)findRouteMatchingDescriptor:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)findRoutesMatchingDescriptors:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)selectRoute:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handOffFromSourceUID:(id)arg1 toDestinationUID:(id)arg2 timeout:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)findHandoffRouteMatchingDescriptor:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)findHandoffRoutesMatchingDescriptors:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
