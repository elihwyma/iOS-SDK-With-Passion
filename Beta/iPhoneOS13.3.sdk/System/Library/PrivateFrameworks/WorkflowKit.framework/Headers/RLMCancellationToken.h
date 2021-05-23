/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/RLMNotificationToken.h>

@class RLMRealm;

__attribute__((visibility("hidden")))
@interface RLMCancellationToken : RLMNotificationToken

{
    struct NotificationToken _token;
    RLMRealm *_realm;
}

- (void)invalidate;
- (id).cxx_construct;
- (id)realm;
- (id)initWithToken:(struct NotificationToken)arg1 realm:(id)arg2;
- (void)suppressNextNotification;

@end
