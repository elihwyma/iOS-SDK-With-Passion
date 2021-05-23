/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/RLMNotificationToken.h>

@class RLMRealm;

__attribute__((visibility("hidden")))
@interface RLMRealmNotificationToken : RLMNotificationToken

{
    RLMRealm *_realm;
    CDUnknownBlockType _block;
}

@property (retain, nonatomic) RLMRealm *realm;
@property (copy, nonatomic) CDUnknownBlockType block;

- (void)dealloc;
- (void)invalidate;
- (void)suppressNextNotification;

@end
