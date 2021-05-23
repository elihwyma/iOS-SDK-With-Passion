/*
 Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

#import <Foundation/NSObject.h>

@class NACAudioRoute, NACXPCClient, NSArray, NSString;

@protocol NACRoutingControllerDelegate;

__attribute__((visibility("hidden")))
@interface NACRoutingControllerProxy : NSObject

{
    NACXPCClient *_xpcClient;
    NSString *_category;
    _Bool _isObserving;
    id <NACRoutingControllerDelegate> _delegate;
    NSArray *_availableAudioRoutes;
    NACAudioRoute *_pickedRoute;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NACAudioRoute *pickedRoute;
@property (nonatomic, readonly) NSArray *availableAudioRoutes;
@property (weak, nonatomic) id <NACRoutingControllerDelegate> delegate;

- (void)dealloc;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (id)initWithAudioCategory:(id)arg1;
- (void)beginObservingRoutes;
- (void)endObservingRoutes;
- (void)pickAudioRoute:(id)arg1;
- (void)_audioRoutesDidChange;

@end
