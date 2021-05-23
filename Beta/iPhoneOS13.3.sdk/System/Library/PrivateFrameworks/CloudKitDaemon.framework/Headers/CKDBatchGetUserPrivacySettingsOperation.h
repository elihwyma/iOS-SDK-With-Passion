/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDOperation.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKDBatchGetUserPrivacySettingsOperation : CKDOperation

{
    NSArray *_containerPrivacySettings;
}

@property (copy, nonatomic) NSArray *containerPrivacySettings;

+ (id)appPermissionGroupsFromContainerPrivacySettings:(id)arg1;

- (void)main;
- (id)activityCreate;
- (_Bool)shouldCheckAppVersion;

@end
