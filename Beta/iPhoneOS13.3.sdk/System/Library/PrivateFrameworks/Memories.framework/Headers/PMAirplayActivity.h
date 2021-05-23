/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIActivity.h>

@class NSString, UIBarButtonItem, UIViewController;

@protocol PMAirplayActivityDelegate;

@interface PMAirplayActivity : UIActivity

{
    _Bool __routeAvailable;
    id <PMAirplayActivityDelegate> _delegate;
    UIBarButtonItem *_barButtonItem;
    UIViewController *_parentViewController;
}

@property (nonatomic) _Bool _routeAvailable;
@property (weak, nonatomic) id <PMAirplayActivityDelegate> delegate;
@property (weak, nonatomic) UIBarButtonItem *barButtonItem;
@property (weak, nonatomic) UIViewController *parentViewController;
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
