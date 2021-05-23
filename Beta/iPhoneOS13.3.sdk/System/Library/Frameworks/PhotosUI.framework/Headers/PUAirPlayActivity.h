/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXActivity.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUAirPlayActivity : PXActivity

@property (nonatomic, readonly, getter=isRouteAvailable) _Bool routeAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)activityType;
- (id)_systemImageName;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)performActivity;
- (void)tearDownForCompletion;
- (void)airPlayControllerRouteAvailabilityChanged:(id)arg1;
- (void)_registerForAirPlayNotifications;
- (void)_unregisterForAirPlayNotifications;

@end
