/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString, PXContextualNotification, UIPanGestureRecognizer, UITapGestureRecognizer, UIWindow, _PXContextualNotificationCenterUpdatingView;

@interface PXContextualNotificationCenter : NSObject

{
    NSMutableSet *_contextualNotifications;
    NSMutableSet *_contextualNotificationsNeedingUpdate;
    _PXContextualNotificationCenterUpdatingView *_containerView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    PXContextualNotification *_pannedContextualNotification;
    UIWindow *_window;
}

@property (nonatomic, readonly) NSMutableSet *contextualNotifications;
@property (nonatomic, readonly) NSMutableSet *contextualNotificationsNeedingUpdate;
@property (retain, nonatomic) _PXContextualNotificationCenterUpdatingView *containerView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) PXContextualNotification *pannedContextualNotification;
@property (weak, nonatomic, readonly) UIWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultCenter;

- (id)init;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithWindow:(id)arg1;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)invalidateContextualNotification:(id)arg1;
- (void)_updateContainerView;
- (void)updateContextualNotificationsIfNeeded;
- (void)_updateAppearanceStateForContextualNotification:(id)arg1;
- (void)_handlePanGestureRecognizer:(id)arg1;
- (id)_contextualNotificationAtLocation:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2 isInsideDismissArea:(_Bool *)arg3 isInsidePassthroughArea:(_Bool *)arg4;

@end
