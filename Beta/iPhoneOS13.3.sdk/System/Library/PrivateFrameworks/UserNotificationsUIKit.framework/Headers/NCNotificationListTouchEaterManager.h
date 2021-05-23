/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <Foundation/NSObject.h>

@class NCNotificationListCell, NCNotificationListSectionHeaderView, NCTouchEaterGestureRecognizer, NSString;

@protocol NCNotificationListCoalescingControlsHandler;

@interface NCNotificationListTouchEaterManager : NSObject

{
    _Bool _enabled;
    NCNotificationListCell *_cellWithRevealedActions;
    NCNotificationListSectionHeaderView *_headerViewInClearState;
    id <NCNotificationListCoalescingControlsHandler> _coalescingControlsHandlerInClearState;
    NCTouchEaterGestureRecognizer *_touchEater;
}

@property (retain, nonatomic) NCTouchEaterGestureRecognizer *touchEater;
@property (weak, nonatomic) NCNotificationListCell *cellWithRevealedActions;
@property (weak, nonatomic) NCNotificationListSectionHeaderView *headerViewInClearState;
@property (weak, nonatomic) id <NCNotificationListCoalescingControlsHandler> coalescingControlsHandlerInClearState;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_handleEatenTouch:(id)arg1;
- (void)setTouchEaterEnabled:(_Bool)arg1;
- (_Bool)_shouldReceiveTouch:(id)arg1 forGestureRecognizer:(id)arg2;
- (void)_handleEatenTouchBeginStateForGestureRecognizer:(id)arg1;
- (void)_handleEatenTouchEndStateForGestureRecognizer:(id)arg1;
- (_Bool)_isPointInWindowSpace:(struct CGPoint)arg1 insideCell:(id)arg2;
- (id)initForView:(id)arg1;
- (void)removeTouchGestureRecognizer;

@end
