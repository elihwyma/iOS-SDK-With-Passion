/*
 Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

#import <Foundation/NSObject.h>

@class MPAVRoutingController, NACAudioRoute, NSArray, NSString;

@protocol NACRoutingControllerDelegate;

__attribute__((visibility("hidden")))
@interface NACRoutingControllerLocal : NSObject

{
    MPAVRoutingController *_routingController;
    NSString *_audioCategory;
    id <NACRoutingControllerDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NACAudioRoute *pickedRoute;
@property (nonatomic, readonly) NSArray *availableAudioRoutes;
@property (weak, nonatomic) id <NACRoutingControllerDelegate> delegate;

- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)routingController:(id)arg1 didFailToPickRouteWithError:(id)arg2;
- (id)initWithAudioCategory:(id)arg1;
- (void)beginObservingRoutes;
- (void)endObservingRoutes;
- (void)pickAudioRoute:(id)arg1;

@end
