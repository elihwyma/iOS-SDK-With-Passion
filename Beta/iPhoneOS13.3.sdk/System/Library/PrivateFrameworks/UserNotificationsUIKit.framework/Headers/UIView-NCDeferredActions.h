/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UIKit/UIView.h>

@interface UIView (NCDeferredActions)

- (_Bool)nc_hasDeferredActions;
- (void)_nc_setSubviewHasDeferredActions:(_Bool)arg1;
- (void)_nc_setHasDeferredActions:(_Bool)arg1;
- (void)_nc_setSubviewHasDeferredActions;
- (_Bool)_nc_subviewHasDeferredActions;
- (void)nc_performDeferredActionsIfNeeded;
- (void)nc_setHasDeferredActions;
- (void)nc_performCrossFadeForDeferredActions;

@end
