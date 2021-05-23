/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAccessResource.h>

@interface WFLocalNotificationAccessResource : WFAccessResource

{
    unsigned long long _globalLevelStatus;
}

@property (nonatomic) unsigned long long globalLevelStatus;

+ (void)initialize;
+ (_Bool)isSystemResource;
+ (void)requestLocalNotificationsAuthorizationWithCompletionHandler:(CDUnknownBlockType)arg1;

- (id)name;
- (id)icon;
- (void)refreshAvailability;
- (id)protectedResourceDescription;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)errorRecoveryOptionsForGlobalLevelStatus:(unsigned long long)arg1;

@end
