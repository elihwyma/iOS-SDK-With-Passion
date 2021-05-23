/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDOperation.h>

__attribute__((visibility("hidden")))
@interface CKDGetUserPrivacySettingsOperation : CKDOperation

{
    long long _discoverable;
}

@property (nonatomic) long long discoverable;

- (void)main;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)_handleRetrievedPrivacySettings:(id)arg1;

@end
