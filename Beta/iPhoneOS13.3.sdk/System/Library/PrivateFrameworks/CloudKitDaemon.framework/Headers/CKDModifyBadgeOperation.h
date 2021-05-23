/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDOperation.h>

__attribute__((visibility("hidden")))
@interface CKDModifyBadgeOperation : CKDOperation

{
    unsigned long long _badgeValue;
}

@property (nonatomic, readonly) unsigned long long badgeValue;

+ (long long)isPredominatelyDownload;

- (void)main;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end
