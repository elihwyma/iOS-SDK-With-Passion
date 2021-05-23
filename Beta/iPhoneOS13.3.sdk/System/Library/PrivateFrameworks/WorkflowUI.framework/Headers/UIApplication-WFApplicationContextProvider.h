/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIApplication.h>

@class NSString;

@interface UIApplication (WFApplicationContextProvider)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool wfIdleTimerDisabled;

- (_Bool)shouldReverseLayoutDirection;
- (long long)currentApplicationStateForWFApplicationContext:(id)arg1;
- (id)bundleForWFApplicationContext:(id)arg1;
- (id)currentUserInterfaceTypeForWFApplicationContext:(id)arg1;
- (id)notificationNameForApplicationStateEvent:(long long)arg1 applicationContext:(id)arg2;
- (id)keyWindowForWFApplicationContext:(id)arg1;
- (id)applicationForWFApplicationContext:(id)arg1;

@end
