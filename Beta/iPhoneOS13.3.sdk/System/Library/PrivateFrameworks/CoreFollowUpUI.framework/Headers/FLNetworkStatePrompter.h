/*
 Image: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
 */

#import <Foundation/NSObject.h>

@class UIViewController;

@interface FLNetworkStatePrompter : NSObject

{
    UIViewController *_presenter;
}

- (void)dealloc;
- (id)initWithPresenter:(id)arg1;
- (void)_mainQueue_promptToDisableAirplaneModeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_mainQueue_verificationFailedAlert;
- (id)_disableAirplaneActionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_cancelActionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)preflightNetworkStateWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
