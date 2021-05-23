/*
 Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

#import <NanoAudioControl/Swift-Protocol.h>

@class MISSING_TYPE, NACAudioRoute, NSArray;

@protocol NACRoutingControllerDelegate;

@protocol NACRoutingController <Swift>

@property (nonatomic, readonly) NACAudioRoute *pickedRoute;
@property (nonatomic, readonly) NSArray *availableAudioRoutes;
@property (weak, nonatomic) id <NACRoutingControllerDelegate> delegate;

- (MISSING_TYPE *)initWithAudioCategory: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)beginObservingRoutes;
- (MISSING_TYPE *)endObservingRoutes;
- (MISSING_TYPE *)pickAudioRoute: /* Error: Ran out of types for this method. */;

@end
