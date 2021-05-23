/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDOperation.h>

__attribute__((visibility("hidden")))
@interface CKDSaveUserPrivacySettingsOperation : CKDOperation

{
    long long _discoverable;
}

@property (nonatomic) long long discoverable;

+ (long long)isPredominatelyDownload;

- (void)main;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (_Bool)shouldCheckAppVersion;

@end
