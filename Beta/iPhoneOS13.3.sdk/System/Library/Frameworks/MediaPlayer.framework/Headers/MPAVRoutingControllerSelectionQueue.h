/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPAVRoute, MPAVRoutingController, MPAVRoutingControllerSelection, MSVTimer, NSMapTable, NSMutableArray, NSMutableSet, NSSet;

@protocol OS_dispatch_queue;

@interface MPAVRoutingControllerSelectionQueue : NSObject

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_selectionsEnqueued;
    MPAVRoutingControllerSelection *_selectionInProgress;
    NSMutableSet *_pendingRoutes;
    MSVTimer *_selectionInProgressTimer;
    NSMapTable *_pendingSelectionTimers;
    _Bool _hasPendingPickedRoutes;
    MPAVRoutingController *_routingController;
}

@property (weak, nonatomic, readonly) MPAVRoutingController *routingController;
@property (nonatomic, readonly) _Bool hasPendingPickedRoutes;
@property (nonatomic, readonly) NSSet *pendingPickedRoutes;
@property (nonatomic, readonly) MPAVRoute *pendingPickedRoute;

- (void)_dequeue;
- (_Bool)routeIsPendingPick:(id)arg1;
- (void)removePendingRoute:(id)arg1;
- (void)addPendingRoute:(id)arg1;
- (void)cancelInProgressSelectionForRoute:(id)arg1;
- (void)pickedRouteDidChange;
- (void)enqueueSelectionOperation:(long long)arg1 forRoute:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)hasPendingRoutes;
- (id)initWithRoutingController:(id)arg1;
- (void)removeAllPendingRoutes;
- (void)removePendingRoute:(id)arg1 withError:(_Bool)arg2;
- (void)_enqueue:(id)arg1;
- (void)_dequeueSelectionWhenPossible;
- (void)_processSelection:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
